package com.sdlc.pro.mymbstu.controller;

import com.sdlc.pro.mymbstu.model.User;
import com.sdlc.pro.mymbstu.service.UserService;
import jakarta.annotation.PostConstruct;
import jakarta.servlet.http.HttpSession;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestParam;

import java.util.HashMap;
import java.util.Map;

@Controller
public class homeController {

    @Autowired
    private UserService userService;

    private final Map<String, String> verificationCodes = new HashMap<>();

    // Initialize predefined admin users when the application starts
    @PostConstruct
    public void init() {
        createAdminIfNotExists("1", "touhidadmin", "1234", "it20019", "01834060206", "ADMIN", "ICT", true);
        createAdminIfNotExists("2", "mosabbiradmin", "1234", "it20020", "01869123445", "ADMIN", "ICT", true);
    }

    private void createAdminIfNotExists(String id, String username, String password, String email, String phone, String role, String department, boolean enabled) {
        if (userService.findById(id) == null) {
            User adminUser = new User(id, username, password, email, phone, role, department, enabled);
            userService.save(adminUser);
        }
    }

    // Home page
    @GetMapping("/home")
    public String home(HttpSession session, Model model) {
        String username = (String) session.getAttribute("username");
        String role = (String) session.getAttribute("role");

        if (username == null) {
            return "redirect:/login";
        }

        model.addAttribute("username", username);
        model.addAttribute("role", role);

        if ("ADMIN".equalsIgnoreCase(role)) {
            return "adminHome";
        } else {
            return "home";
        }
    }

    // Login page
    @GetMapping("/login")
    public String loginPage() {

        return "login";
    }

    // Process login
    @PostMapping("/login")
    public String login(
            @RequestParam("userIdentity") String userIdentity,
            @RequestParam("password") String password,
            HttpSession session) {

        User user = userService.findById(userIdentity);
        if (user != null && user.getPassword().equals(password)) {
            session.setAttribute("username", user.getUsername());
            session.setAttribute("role", user.getRole());
            return "redirect:/home";
        }

        session.setAttribute("errorMessage", "Invalid ID or password. Please try again.");
        return "redirect:/login";
    }

    // Registration page
    @GetMapping("/register")
    public String registerPage() {
        return "register";
    }

    // Process registration
    @PostMapping("/register")
    public String processRegistration(
            @RequestParam("id") String id,
            @RequestParam("username") String username,
            @RequestParam("email") String email,
            @RequestParam("phone") String phone,
            @RequestParam("password") String password,
            @RequestParam("department") String department,
            Model model) {

        if (userService.findById(id) != null) {
            model.addAttribute("errorMessage", "ID already exists.");
            return "register";
        }

        User newUser = new User(id, username, password, email, phone, "STUDENT", department, true);
        userService.save(newUser);
        model.addAttribute("successMessage", "Registration successful!");
        return "register";
    }

    // Forgot password page
    @GetMapping("/forgotPassword")
    public String forgotPasswordPage() {
        return "forgotPassword";
    }

    // Process forgot password
    @PostMapping("/forgotPassword")
    public String processForgotPassword(@RequestParam("email") String email, HttpSession session) {
        String verificationCode = String.valueOf((int) (Math.random() * 900000) + 100000);
        verificationCodes.put(email, verificationCode);
        System.out.println("Verification code sent to " + email + ": " + verificationCode);
        session.setAttribute("email", email);
        return "redirect:/verifyCode";
    }

    // Verify code page
    @GetMapping("/verifyCode")
    public String verifyCodePage() {
        return "verifyCode";
    }

    // Process verification code
    @PostMapping("/verifyCode")
    public String processVerifyCode(@RequestParam("code") String code, HttpSession session) {
        String email = (String) session.getAttribute("email");
        String storedCode = verificationCodes.get(email);

        if (storedCode != null && storedCode.equals(code)) {
            return "redirect:/resetPassword";
        }

        session.setAttribute("errorMessage", "Invalid verification code.");
        return "redirect:/verifyCode";
    }

    // Reset password page
    @GetMapping("/resetPassword")
    public String resetPasswordPage() {
        return "resetPassword";
    }

    // Process reset password
    @PostMapping("/resetPassword")
    public String resetPassword(@RequestParam("password") String password, HttpSession session) {
        String email = (String) session.getAttribute("email");
        User user = userService.findByEmail(email);

        if (user != null) {
            user.setPassword(password);
            userService.save(user);
            session.setAttribute("successMessage", "Password reset successfully.");
            return "redirect:/login";
        }

        session.setAttribute("errorMessage", "Email not found.");
        return "redirect:/resetPassword";
    }
}
