package com.sdlc.pro.mymbstu.model;

import com.sdlc.pro.mymbstu.service.UserService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.crypto.password.PasswordEncoder;
import org.springframework.stereotype.Component;

@Component
public class AdminSeeder {

    @Autowired
    private UserService userService; // Inject UserService to interact with the database

    @Autowired
    private PasswordEncoder passwordEncoder; // Inject PasswordEncoder to encode the password

    // Method to seed the admin user into the database
    public void seedAdmin() {
        // Check if admin already exists by searching by username
        if (userService.findByUsername("admin") == null) {
            // Encode the admin password using BCryptPasswordEncoder
            String encodedPassword = passwordEncoder.encode("admin123");

            // Create a new admin user and set necessary fields
            User admin = new User();
            admin.setUsername("admin");
            admin.setPassword(encodedPassword);  // Set the encoded password
            admin.setRole("ADMIN");              // Set the role to
            // "ADMIN" (as String)
            admin.setEmail("admin@example.com"); // Set the email
            admin.setPhone("1234567890");        // Set the phone number
            admin.setEnabled(true);              // Enable the admin user

            // Save the admin user to the database
            userService.save(admin);
        }
    }
}
