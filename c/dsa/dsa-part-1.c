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

#define MAXSIZE 5
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
		return -1;
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

--------------------------
Enter your choice.
Press 1 : Push to stack
Press 2 : Pop from stack
Press 3 : Peek from stack
Press 4 : Display stack
Press 5 : Exit

	
	
	
	
	