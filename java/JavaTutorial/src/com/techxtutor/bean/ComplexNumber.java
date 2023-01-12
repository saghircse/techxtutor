package com.techxtutor.bean;

public class ComplexNumber {
	private int real;
	private int img;
	
	public ComplexNumber(){	
	}
	
	public ComplexNumber(int real, int img){
		this.real = real;
		this.img = img;
	}
	
	public void display() {
		// TODO: Handle negative imaginary number
		if(this.img >= 0) {
			System.out.println(this.real + " + " + this.img + "i");
		}else {
			System.out.println(this.real + " - " + this.img * -1 + "i");
		}
		
	}
	
	public ComplexNumber add(ComplexNumber c){
		int sr = this.real + c.real;
		int si = this.img + c.img;
		ComplexNumber cs = new ComplexNumber(sr, si);
		return cs;
	}
	
	// TODO: minus(), multiply(), isEqual()
	
	public ComplexNumber minus(ComplexNumber c){
		int sr = this.real - c.real;
		int si = this.img - c.img;
		ComplexNumber cs = new ComplexNumber(sr, si);
		return cs;
	}
	
	public boolean isEqual(ComplexNumber c) {
		
		if(this.real == c.real && this.img == c.img) {
			return true;
		}
		else {
			return false;
		}
	}
	
	
	public static void main(String args[]) {
		ComplexNumber c1 = new ComplexNumber(-3, 2);
		c1.display();
		
		ComplexNumber c2 = new ComplexNumber(5, -4);
		c2.display();
		
//		int sr = c1.real + c2.real;
//		int si = c1.img + c2.img;
//		ComplexNumber csx = new ComplexNumber(sr, si);
//		csx.display();
		
		ComplexNumber cs = c1.add(c2);
		cs.display();
		
		boolean x = c1.isEqual(c2);
		System.out.println(x);
	}
}
