package com.techxtutor.bean;

public class Address {
	private String city;
	private String state;
	private String country;
	private long pin;
	
	public Address(){
		
	}
	
	public Address(String city, String state, String country, long pin ){
		this.city =city;
		this.state = state;
		this.country = country;
		this.pin = pin;
	}
	
	
	public void display() {
		System.out.println("Address: [city=" + city +  ", State=" + state +  ", Country=" + country + ", pin=" + pin + "]");
	}	
	
}
