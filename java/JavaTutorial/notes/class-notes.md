OOP in Java
-----------
Class and Objects

Class : It is template for creating objects.
Object : It is real world entity. It is also called instance of a class. It has state, behaviour and identity.

Example of object 
	car 
		states -> id, name, color, brand 
		bevaiour -> start(), stop(), accelarate()


1. How to create class?
2. How to create objects?
3. How to initialize an object?
	1. Using reference variable
--------------
1. How to create class?

class Student {
	// States are represented using variables
	int roll;
	String name;
	int marks;
	
	
	// Behaviours are represented using methods
	boolean isPass(){
		if(marks >= 40){
			return true;
		}else{
			return false;
		}
	}
}

2. How to create objects?
	Objects are created using new keyword.

	Student s1 = new Student();
	s1.roll
	
	
	this -> It is a keyword used to represent the current object.
======================================================= Day-3

Fuction/Method :
returnType functionName( [dataType x1, ...]){
	---
	
	---
	[return xxx];
}
====================================
Constructor: 
	It is used to create any object.
	It is similar to function whose name is same as class name and  it has not return type.

Types of constructor:
	1. Default Constructor
		Student(){
		}
	2. Parameterized constructor
		Student(int roll, String name){
			this.roll = roll;
			this.name = name;
		}
Does constructor retun any value?
Yes, it returns the object/instance of the current class. But it has no any return statement like method.
====================================		
		
Variable:
int x = 5;

Types of variables
1. Instance (or object) variable - It is accessed using object.
2. static variable or class variable - It is accessed using class Name or object as well.
3. local variable
4. final variable - It is a variable whose value cannot be changed.

class Student{
	int roll;
	String name;
	static String COLLEGE = "DKC";
	final int PASS_MARKS = 40;
	
	void printSquare(int x){
		int s = x*x;
	}
	
}

=============================================

Access Modifiers in Java
------------------------
The access modifiers specifies the accessbility of a class, fields, methods, constructors.

Four types of access modifiers
------------|-------------|---------------|----------------------------|---------------------|-
			|Within class |Within package |Outside package by subclass |Outside package      |
------------|-------------|---------------|----------------------------|---------------------|-
1. private  |      Y      |      N        |              N             |         N           |
------------|-------------|---------------|----------------------------|---------------------|-
2. Default  |      Y      |      Y        |              N             |         N           |
------------|-------------|---------------|----------------------------|---------------------|-
3. protected|      Y      |      Y        |              Y             |         N           |
------------|-------------|---------------|----------------------------|---------------------|-
4. public   |      Y      |      Y        |              Y             |         Y           |
------------|-------------|---------------|----------------------------|---------------------|-


Home work
---------
Complex Number
a = 3 + 4i
b = 5 + 2i

a + b = 8 + 6i
a - b
class ComplexNumber
{
	int real
	int imaginary
}

new ComplexNumber(3,4)
0. contructor
1. add
2. subract
3. display







	





























-----------------------------------------------
IDE -> Integrated Development Environment
	For Java -> Eclipse and IntelliJ
