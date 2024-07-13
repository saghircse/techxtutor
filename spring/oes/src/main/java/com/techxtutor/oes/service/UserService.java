package com.techxtutor.oes.service;

import java.util.List;

import com.techxtutor.oes.model.User;
import com.techxtutor.oes.web.dto.UserRegistrationDto;

public interface UserService {
	
	// New : Registration
	User save(UserRegistrationDto userRegistrationDto);
	
	// Old
	List<User> getAllUsers();
	
	void saveUser(User user);
	
	User getUserById(long id);
	
	void deleteUserById(long id);

}
