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
1. push(x) - Insert an element at TOP
2. pop() - Remove an element from TOP
3. peek() - Return an element from TOP
4. isEmpty()
5. isFull()

define MAXSIZE 5
int stack[MAXSIZE];
int TOP = -1;

void push(int x);
int pop();
int peek();
void display();

int main(){
    pop();
    push(5);
    push(1);
    pop();
    push(3);
    push(4);
    push(5);
    push(8);
    push(9);
    peek();
    display();
    
	return 0;
}

void display(){
    printf("\n");
    for(int i=0; i<=TOP; i++){
        printf("%d |",stack[i]);
    }
}

// 
void push(int x){
	if(TOP >= MAXSIZE-1){
		printf("\nStack overflow - Stack is full.\n");
	}else{
		TOP++;
		stack[TOP] = x;
		printf("\n%d is pushed to stack.",x);
	}
}

int pop(){
	if(TOP==-1){
		printf("\nStack is empty.");
		return -1; // To denote stack empty
	}else{
		int x = stack[TOP];
		TOP--;
		printf("\n%d is popped from stack.",x);
		return x;
	}
}

int peek(){
	if(TOP==-1){
		printf("\nStack is empty.");
		return -1;
	}else{
		int x = stack[TOP];
		printf("\n%d is peeked from stack.",x);
		return x;
	}
}

------------
MAXSIZE=5
1>
stack[]
TOP=-1;
1.1>
push(5);
stack[5]
TOP=0
2>
push ->4,1,2,6
stack[5,4,1,2,6]
TOP=4 (from index 0 to 4)
display() -> 5 4 1 2 6
-------
pop()
stack[5,4,1,2,6]
TOP=3
display() -> 5 4 1 2
displayFullArray() -> 5 4 1 2 6
--------------------------
Enter your choice.
Press 1 : Push to stack
Press 2 : Pop from stack
Press 3 : Peek from stack
Press 4 : Display stack
Press 5 : Exit

=============================Queue=====================
Queue:
	-> Linear DS
	-> FIFO
	-> Example : Queue at ticket counter
	-> ADT (Abstract Data Type)
	-> Implementation
		-> Using array
		-> Using Linked List
	
Basic operation in Queue:
1. enqueue(x) - Inserts an element at rear
2. dequeue() - Removes an element from front
3. peek() - Return an element from front
4. isEmpty()
5. isFull()	
----------------------------------------
Implementation of Queue using array:
------------------------------------
// Online C compiler to run C program online
#include<stdio.h>
#define MAXSIZE 5

int queue[MAXSIZE];
int rear=-1; // It is an index that points to the last element in the queue. 
int front=-1; // It is an index that points to the first element in the queue.

void enqueue(int x);
int dequeue();
int peek();
int isEmpty();
int isFull();
void display();

int main() {
    dequeue();
    peek();
    enqueue(4);
    enqueue(2);
    enqueue(6);
    dequeue();
    dequeue();
    dequeue();
    //-------
    dequeue();
    dequeue();
    dequeue();
    

    return 0;
}

void enqueue(int x){
	if(isFull()){
		printf("\nQueue is full.");
	}else{
		if(front==-1){
			front++;
		}
		rear++;
		queue[rear]=x;
		printf("\n%d is inserted.",x);
		display();
	}
	
}

int dequeue(){
	if(isEmpty()){
		printf("\nQueue is empty.");
		return -1;
	}else{
	    int x = queue[front];
	    printf("\n%d is removed.",x);
	    
	    if(front==rear){ 
	        front=-1;
	        rear=-1;;
	    }else{
	        front++;
	        display();
	    }
		return x;
	}
}

int peek(){
	if(isEmpty()){
		printf("\nQueue is empty");
		return -1;
	}else{
		return queue[front];
	}
}

// 0(no)-false, 1(yes)-true
int isFull(){
	if(rear >= MAXSIZE-1){
		return 1;
	}else{
		return 0;
	}
}

// 0(no)-false, 1(yes)-true
int isEmpty(){
	if(rear==-1 && front==-1){
		return 1;
	}else{
		return 0;
	}
}

void display(){
    printf("\n Queue:");
    for(int i=front; i<=rear; i++){
        printf("%d |",queue[i]);
    }
}


Enter your choice.
Press 1 : Insert to queue
Press 2 : Remove from queue
Press 3 : Peek from queue
Press 4 : Display queue
Press 5 : Exit


===========================
1. Implementation of stack using array and structure. 
define MAXSIZE 100
typedef struct stack{
	int data[MAXSIZE]; //array
	int TOP = -1;
}stack;

void push(int x, stack s);
int pop(stack s);
int peek(stack s);
void display(stack s);

int main(){
	stack s1;
	push(5,s1);
	push(3,s1);
	push(8,s1);
	pop(s1);
	display(s1);
	
	stack s2;
	push(3,s2);
	push(9,s2);
	push(8,s2);
	pop(s2);
	display(s2);

}

void push(int x, stack s){
	if(s.TOP >= MAXSIZE-1){
		printf("\nStack overflow - Stack is full.\n");
	}else{
		s.TOP++;
		s.data[TOP] = x;
		printf("\n%d is pushed to stack.",x);
	}
}

int pop(stack s){
	if(s.TOP==-1){
		printf("\nStack is empty.");
		return -1; // To denote stack empty
	}else{
		int x = s.data[TOP];
		s.TOP--;
		printf("\n%d is popped from stack.",x);
		return x;
	}
}

void display(stack s){
    printf("\n");
    for(int i=0; i<=s.TOP; i++){
        printf("%d |",s.data[i]);
    }
}

2. Implementation of queue using array and structure. 









	
	