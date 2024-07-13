package com.techxtutor.oes.service;

import java.util.Arrays;
import java.util.List;
import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.techxtutor.oes.model.Role;
import com.techxtutor.oes.model.User;
import com.techxtutor.oes.repository.UserRepository;
import com.techxtutor.oes.web.dto.UserRegistrationDto;

@Service
public class UserServiceImpl implements UserService{
	
	@Autowired
	private UserRepository userRepository;

	@Override
	public List<User> getAllUsers() {
		
		return userRepository.findAll();
	}

	@Override
	public void saveUser(User user) {
		userRepository.save(user);
		
	}

	@Override
	public User getUserById(long id) {
		
		Optional<User> optUser = userRepository.findById(id);
		User user = null;
		
		if(optUser.isPresent()) {
			user = optUser.get();
		}else {
			throw new RuntimeException("User not found for id :: "+ id);
		}
		
		return user;
	}

	@Override
	public void deleteUserById(long id) {

		userRepository.deleteById(id);
		
	}
	
	// New - Registration

	@Override
	public User save(UserRegistrationDto userRegistrationDto) {

		User user = new User(
				userRegistrationDto.getFirstName(), 
				userRegistrationDto.getLastName(), 
				userRegistrationDto.getEmail(), 
				userRegistrationDto.getPassword(), 
				Arrays.asList(new Role("ROLE_USER"))); // TODO: 1. password should be encrypted 2. Create constants or enums for role name
		return userRepository.save(user);
	} 

}
