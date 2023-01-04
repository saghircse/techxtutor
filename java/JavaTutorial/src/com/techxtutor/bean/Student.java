package com.techxtutor.bean;

public class Student {
	// States are represented using instance variables
	int roll;
	String name;
	int marks;
	
	// static variable - class variable
	static int PASS_MARKS = 40;
	
	// Behaviors are represented using instance methods
	boolean isPass(){
		
		if(marks >= PASS_MARKS){
			return true;
		}else{
			return false;
		}
		
	}
	
	// Static method to display object
	static void displayX(Student s) {
		System.out.println(s.roll + " | " + s.name + " | " + s.marks + " | " + s.isPass() );
	}
	
	// Instance method to display object
	void display() {
		System.out.println(roll + " | " + name + " | " + marks + " | " + isPass() );
		System.out.println("------------------------");
	}
	
	// static method (class method) to set student object
	static void setStudentX(Student s, int roll, String namex, int marks){
		s.roll = roll;
		s.name = namex;
		s.marks = marks;
	}
	
	// Instance method to set student object
	void setStudent( int roll, String namex, int marks){
		this.roll = roll;
		name = namex;
		this.marks = marks;
	}
	
	
	
	//========================================================================================================
	
	// Create a main method
	public static void main(String args[]) {
		
		// 1. Initialize object using reference variable
		Student s1 = new Student();
		System.out.println(s1.roll + " | " + s1.name + " | " + s1.marks + " | " + s1.isPass() );
		s1.roll = 1;
		s1.name = "John";
		s1.marks = 60;
		s1.display();
		
		
		// 2. Initialize object using static method
		Student s2 = new Student();
		s2.display();
		setStudentX(s2, 2, "San", 65);
		s2.display();
		
		// 3. Initialize object using instance method
		Student s3 = new Student();
		s3.display();
		s3.setStudent(3, "Fan", 55);
		s3.display();
		
		// 4. Initialize object using constructors
		
		

	}

}
