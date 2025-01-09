package com.sdlc.pro.mymbstu.jpa;

import com.sdlc.pro.mymbstu.model.User;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import java.util.List;
import java.util.Optional;

@Repository
public interface UserRepository extends JpaRepository<User, String> {

    // Find a user by their username
    Optional<User> findByUsername(String username);

    // Find a user by their email
    Optional<User> findByEmail(String email);

    // Find a user by their ID (assuming ID is unique for each user)
    Optional<User> findById(String id);

    // Count the number of users
    long count(); // This method is inherited from JpaRepository
}
