package com.techxtutor.oes.web;

import org.springframework.stereotype.Controller;
//import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;

import com.techxtutor.oes.service.UserService;
import com.techxtutor.oes.web.dto.UserRegistrationDto;

@Controller
@RequestMapping("/registration")
public class UserRegistrationController {
	
	private UserService userService;

	public UserRegistrationController(UserService userService) {
		super();
		this.userService = userService;
	}
	
	@ModelAttribute("user")
    public UserRegistrationDto userRegistrationDto() {
        return new UserRegistrationDto();
    }
	
	// The model with attribute user can also be passed to form like below instead of the above userRegistrationDto() method.
//	@GetMapping
//	public String showRegistrationFormX(Model model) {
//		model.addAttribute("user", new UserRegistrationDto());
//		return "registration";
//	}
	
	@GetMapping
	public String showRegistrationForm() {
		return "registration";
	}
	
	@PostMapping
	public String registerUserAccount(@ModelAttribute("user") UserRegistrationDto userRegistrationDto) {
		userService.save(userRegistrationDto);
		
		return "redirect:/registration?success";
	}
	
}
