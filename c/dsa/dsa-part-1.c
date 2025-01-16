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
#include <stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
typedef struct stack{
	int data[MAXSIZE]; //array
	int TOP;
}stack;

void push(int x, stack* s);
int pop(stack* s);
int peek(stack* s);
void display(stack* s);
stack* createStack();

int main(){
	stack* ps1 = createStack();
	push(5,ps1);
	push(3,ps1);
	push(8,ps1);
	pop(ps1);
	display(ps1);
	
	stack* ps2 = createStack();;
	push(3,ps2);
	push(9,ps2);
	push(8,ps2);
	pop(ps2);
	display(ps2);

}

stack* createStack(){
    stack* ps = (stack*)malloc(sizeof(stack));
	ps->TOP=-1;
	printf("\n New Stack created=============");
	return ps;
}

void push(int x, stack* ps){
	if(ps->TOP >= MAXSIZE-1){
		printf("\nStack overflow - Stack is full.\n");
	}else{
		ps->TOP++;
		ps->data[ps->TOP] = x;
		printf("\n%d is pushed to stack.",x);
	}
}

int pop(stack* ps){
	if(ps->TOP==-1){
		printf("\nStack is empty.");
		return -1; // To denote stack empty
	}else{
		int x = ps->data[ps->TOP];
		ps->TOP--;
		printf("\n%d is popped from stack.",x);
		return x;
	}
}

void display(stack* ps){
    printf("\n");
    for(int i=0; i<=ps->TOP; i++){
        printf("%d |",ps->data[i]);
    }
}

2. Implementation of queue using array and structure. 

========================== Linked List ================
Advantage of array:
	1. Indexed based - provide random access  O(1)

Disadvantage of Array:
	1. Fixed size
	2. Deletion/Insertion at the middle is costly
	
----------
Linked list consist of nodes which linked linearly.
Advantage of LL:
	1. Deletion/Insertion at the middle is easy.
	2. Dynamic size
DisAdvantage of LL:	
	1. Access is costly.
	2. Takes extra memory for storing links/adress along with data.

1. Single Linked List
	-> Each node has one data part and one link to next node.
2. Double Linked List
	-> -> Each node has one data part and two link - one of previous node and and another for next node.


Implementation SLL in C:
-----------------------
Node(data, link-to-next-node)

typedef struct Node{
	int data;
	struct Node* next;
}Node;

Node* HEAD=NULL;


struct Node* nodex=(struct Node*)malloc(sizeof(struct Node));

Operations in LL:
1. Insert
	a. beginning
	b. end
	c. middle - at position p
2. Delete
	a. beginning
	b. end
	c. middle - at position p
3. Traversal
4. Display
5. Search


typedef struct Node{
	int data;
	struct Node* next;
}Node;

Node* HEAD=NULL;
int main(){
	
	Node n1;
	n1.data=5;
	n1.next=NULL;
	
	Node n2;
	n2.data=8;
	n2.next=NULL;
	
	n1.next = &n2; // connected n1 to n2 (n1->n2)
	
	Node n3;
	n3.data=2;
	n3.next=NULL;
	
	n2.next=&n3; // connected n2 to n3 (n2->n3) => n1 -> n2 -> n3
	
	Node n4;
	n4.data=3;
	n4.next=NULL;
	n4.next->&n1; // connected n4 to n1 (n4->n1) => n4 -> n1 -> n2 -> n3

	return 0;
}
=====================================

typedef struct Node{
	int data;
	struct Node* next;
}Node;

Node* HEAD=NULL; // HEAD is a pointer which always points to the 1st node.
int main(){
	//Node* p1 = (Node*)malloc(sizeOf(Node));
	//p1->data = 5;
	//p1->next=NULL;
	Node* p1 = createNode(5); // HEAD=p1
	HEAD = p1;
	
	Node* p2 = createNode(8);
	p1->next = p2; // p1->p2 , HEAD=p1
	
	Node* p3 = createNode(3);
	p2->next=p3; // p1->p2->p3, HEAD=p1
	
	Node* p4 = createNode(2);
	p4->next = p1; // p4->p1->p2->p3, HEAD=p4
	HEAD = p4;
	
	
	return 0;
}

Node* createNode(int x){
	Node* px = (Node*)malloc(sizeOf(Node));
	px->data = x;
	px->next=NULL;
	
	return px;
}






	
	