Data Structure
--------------
	-> Way of storing and organizing data so that it can accessed and updated easily.
	
Linear DS:
	-> Array
	-> Linked List
	-> Stack
		-> Using array
		-> Using Linked List
	-> Queue
		-> Using array
		-> Using Linked List

Non-linear
	-> Tree
	-> Graph
	
===================================================================
Stack:
	-> Linear DS
	-> LIFO
	-> Example : Stack of plates or books
	-> ADT (Abstract Data Type)
	-> Implementation
		-> Using array
		-> Using Linked List
	
Basic operation in Stack:
1. push(x)
2. pop()
3. peek()
4. isEmpty()
5. isFull()

#include <stdio.h>

#define MAXSIZE 100
int stack[MAXSIZE];
int TOP = -1;

int main(){
	return 0;
}

// 
void push(int x){
	if(TOP >= MAXSIZE-1){
		printf("Stack overflow - Stack is full.\n");
	}else{
		TOP++;
		stack[TOP] = x;
	}
}

int pop(){
	if(TOP==-1){
		printf("Stack is empty.");
	}else{
		int x = stack[TOP];
		TOP--;
		return x;
	}
}





















	
	
	
	
	