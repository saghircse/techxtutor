package com.techxtutor.test;

import com.techxtutor.bean.Student;

public class TestStudent {

	public static void main(String[] args) {
		
		Student s0 = new Student();
		//s0.roll = 6;
		//s0.name = "XYZ";
		s0.setName("PQR");
		System.out.println(s0.getName());
		s0.display();
		
		Student s1 = new Student(1, "John", 60);
		s1.display();
	}

}
