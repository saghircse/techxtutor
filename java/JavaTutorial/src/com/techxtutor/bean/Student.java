package com.techxtutor.bean;

public class Student {
	
	// Instance variable
	private int roll;
	private String name;
	private int marks;
	
	// Static variables
	static String COLLEGE = "DKC";
	final static int PASS_MARKS = 40;
	
	
	// Getters and setters
	public int getRoll() {
		return roll;
	}

	public void setRoll(int roll) {
		this.roll = roll;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getMarks() {
		return marks;
	}

	public void setMarks(int marks) {
		this.marks = marks;
	}

	// Default Constructor
	public Student(){
	}
	
	// Parameterized Constructor
	public Student(int roll, String name, int marks ){
		this.roll = roll;
		this.name = name;
		this.marks = marks;
	}
	
	// Behaviors are represented using instance methods
	public boolean isPass(){
		if(marks >= PASS_MARKS){
			return true;
		}else{
			return false;
		}	
	}
	
	// Instance method to display object
	public void display() {
		System.out.println(COLLEGE+ " | " +roll + " | " + name + " | " + marks + " | " + isPass() );
	}

}
