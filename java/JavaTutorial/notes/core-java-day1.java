-> What is Java?
-> Why Java?
->	JDK(Java Development Kit)
	JRE(Java Runtime Environment)
	JVM(Java Virtual machine)
-> How to start?
	-> Verify if JDK installed?
		1. Open cmd and run as below:
			cmd>java -version
				java version "1.8.0_91"
				Java(TM) SE Runtime Environment (build 1.8.0_91-b14)
				Java HotSpot(TM) 64-Bit Server VM (build 25.91-b14, mixed mode)

			cmd>javac -version
				javac 1.8.0_91
	-> If not installed?
		-> Download, install & configure (https://www.guru99.com/install-java.html)
		
-> First Java program (Java Hello World)
====================================
File name : hello.c
#include<stdio.h>
int main(){
	printf("Hello C programmers");
}
====================================
File name : Hello.java

public class Hello {
	public static void main(String args[]){
		System.out.println("Hello Java programmers");
	}
}

Step-1: Compile Hello.java
cmd> javac Hello.java

Note: A new file will be created (Hello.class). This file contains bytecode.
		
Step-2: Run Hello
cmd> java Hello
Hello Java programmers	

=> Ways to write,compile and run Java programs
	-> Command Line or Terminal
	-> Online terminal (Example : https://www.tutorialspoint.com/online_java_compiler.php)
	-> IDE (Integrated Development Environment)
		1. Eclipse IDE (*)
		2. IntelliJ IDE
		3. VS code	