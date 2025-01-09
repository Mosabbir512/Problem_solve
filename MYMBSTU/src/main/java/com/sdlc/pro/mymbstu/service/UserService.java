package com.sdlc.pro.mymbstu.service;

import com.sdlc.pro.mymbstu.jpa.UserRepository;
import com.sdlc.pro.mymbstu.model.User;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.Optional;

@Service
public class UserService {

    @Autowired
    private UserRepository userRepository;

    // Save user
    public void save(User newUser) {
        userRepository.save(newUser);
    }

    // Authenticate user by username or email and password
    public User authenticate(String userIdentity, String password) {
        User foundUser = null;

        // Check if the user identity is an email or username
        if (userIdentity.contains("@")) {
            // Search by email
            Optional<User> foundUserOpt = userRepository.findByEmail(userIdentity);
            if (foundUserOpt.isPresent()) {
                foundUser = foundUserOpt.get();
            }
        } else {
            // Search by username
            Optional<User> foundUserOpt = userRepository.findByUsername(userIdentity);
            if (foundUserOpt.isPresent()) {
                foundUser = foundUserOpt.get();
            }
        }

        // Validate password and return user if authenticated
        if (foundUser != null && foundUser.getPassword().equals(password)) {
            return foundUser; // Authentication successful
        }

        return null; // Authentication failed
    }

    // Find user by email
    public User findByEmail(String email) {
        Optional<User> userOpt = userRepository.findByEmail(email);
        return userOpt.orElse(null); // Return null if user not found
    }

    // Find user by username
    public User findByUsername(String username) {
        Optional<User> userOpt = userRepository.findByUsername(username);
        return userOpt.orElse(null); // Return null if user not found
    }

    // Find user by ID
    public User findById(String id) {
        Optional<User> userOpt = userRepository.findById(id);
        return userOpt.orElse(null);
    }

    // Count the number of users
    public long count() {
        return userRepository.count();
    }
}
