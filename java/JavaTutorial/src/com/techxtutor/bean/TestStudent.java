package com.techxtutor.bean;

public class TestStudent {

	public static void main(String[] args) {
		
		Student s0 = new Student();
		//s0.name = "XYZ"; name can not be accessed as it is private 
		s0.setName("PQR");
		System.out.println(s0.getName());
		s0.display();
		
		Student s1 = new Student(1, "John", 60);
		s1.display();
	}

}
