package com.techxtutor.test;

import com.techxtutor.bean.Address;
import com.techxtutor.bean.Student;

public class TestStudent {

	public static void main(String[] args) {
		
//		Student s0 = new Student();
//		//s0.roll = 6;
//		//s0.name = "XYZ";
//		s0.setName("PQR");
//		System.out.println(s0.getName());
//		s0.display();
		
		//int s1marks[] = {60, 45, 40, 75, 88};
		Student s1 = new Student(1, "John", 45);
		s1.display();
		
		Address s2a = new Address();
		Student s2 = new Student(2, "John", 45, s2a);
		s2.display();
		
		Address s3a = new Address("Patna", "Bihar", "India", 3344556);
		Student s3 = new Student(3, "John", 45, s3a);
		s3.display();
		
		
		
		
	}

}
