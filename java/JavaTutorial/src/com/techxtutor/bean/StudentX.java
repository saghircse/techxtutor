package com.techxtutor.bean;

public class StudentX {
	// States are represented using instance variables
	int roll;
	String name;
	int marks;
	
	// static variable - class variable
	static String COLLEGE = "DKC";
	final static int PASS_MARKS = 40;
	
	
	// Default Constructor
	StudentX(){
		System.out.println("I am default constructor.");
	}
	
	// Parameterized Constructor
	StudentX(int roll, String name, int marks){
		System.out.println("I am parameterized constructor.");
		this.roll = roll;
		this.name = name;
		this.marks = marks;
	}
	
	// Parameterized Constructor
	StudentX(int roll, String name){
		System.out.println("I am parameterized constructor.");
		this.roll = roll;
		this.name = name;
	}
	
	
	// Behaviors are represented using instance methods
	boolean isPass(){
		if(marks >= PASS_MARKS){
			return true;
		}else{
			return false;
		}	
	}
	
	// Static method to display object
	static void display(StudentX s) {
		System.out.println(COLLEGE +" | "+ s.roll + " | " + s.name + " | " + s.marks + " | " + s.isPass() );
	}
	
	// Instance method to display object
	void display() {
		System.out.println(COLLEGE+ " | " +roll + " | " + name + " | " + marks + " | " + isPass() );
	}
	
	// static method (class method) to set student object
	static void setStudentX(StudentX s, int roll, String namex, int marks){
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
		StudentX s1 = new StudentX();
		s1.COLLEGE = "VKU";
		System.out.println(s1.roll + " | " + s1.name + " | " + s1.marks + " | " + s1.isPass() );
		s1.roll = 1;
		s1.name = "John";
		s1.marks = 60;
		display(s1);
		
		System.out.println("================================================");
		
		// 2. Initialize object using static method
		StudentX s2 = new StudentX();
		StudentX.COLLEGE = "DK";
		
		s2.display();
		setStudentX(s2, 2, "San", 65);
		s2.display();
		
		System.out.println("================================================");
		
		// 3. Initialize object using instance method
		StudentX s3 = new StudentX();
		s3.display();
		s3.setStudent(3, "Fan", 55);
		s3.display();
		
		System.out.println("================================================");
		// How to initialize any object at the time of its creation?
		// 4. Initialize object using constructors
		StudentX s4 = new StudentX(4, "Tan", 70);
		s4.display();
		
		System.out.println("================================================");
		// How to initialize any object at the time of its creation?
		// 4. Initialize object using constructors
		StudentX s5 = new StudentX(5, "Tan");
		//Student.PASS_MARKS =30; // Final variable cannot be modified
		s5.marks=35;
		s5.name = "Jan";
		s5.display();
		
		

	}

}
