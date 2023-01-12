package com.techxtutor.bean;

public class Student {
	
	// Instance variable
	private int roll;
	private String name;
	private int marks;
	//private String address; // "Dumraon, Buxar, Bihar, India, 802119", "Dumraon, Bihar, India, 802119"
	private Address address;
	
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


	// Default Constructor
	public Student(){
	}
	
	// Parameterized Constructor
	public Student(int roll, String name ){
		this.roll = roll;
		this.name = name;
	}
	
	public Student(int roll, String name, int marks ){
		this(roll,name);
//		this.roll = roll;
//		this.name = name;
		this.marks = marks;
	}
	
	public Student(int roll, String name, int marks, Address address ){
		this(roll, name, marks);
		this.address = address;
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
		System.out.println("======================================");
		System.out.println("College: " +COLLEGE);
		System.out.println("Roll: " +roll);
		System.out.println("Name: " + name);
		System.out.println("Marks: " + marks);
		System.out.println("IsPass: " + isPass());
		if(address != null) {
			address.display();
		}else {
			System.out.println("Address: " + address);
		}
		
		System.out.println("======================================");
	}

}
