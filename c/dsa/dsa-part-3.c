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

// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* createNode(int x);
void insertAtStart(int x);
void insertAtEnd(int x);
void insertAtStartX(int x);
void insertAtEndX(int x);
void display();
void deleteAtStart();
void deleteAtEnd();

Node* HEAD = NULL;
Node* TAIL = NULL;

int main() {
    display();
    deleteAtStart();
    deleteAtEnd();
    insertAtEnd(2);
    deleteAtEnd();
    insertAtStart(5);
    display();
    insertAtStart(8);
    insertAtStart(4);
    insertAtEnd(1);
    display();
    deleteAtStart();
    deleteAtEnd();
    display();

    return 0;
}

Node* createNode(int x){
    Node* p = (Node*)malloc(sizeof(Node));
    p->data=x;
    p->next = NULL;
    return p;
}

void insertAtStart(int x){
    Node* newx = createNode(x);
    newx->next = HEAD;
    HEAD = newx;
}

void insertAtStartX(int x){
    Node* newx = createNode(x);
	if(HEAD==NULL){
		HEAD = newx;
		TAIL = newx;
	}else{
		newx->next = HEAD;
		HEAD = newx;
	}
}

void insertAtEndX(int x){
	Node* newx = createNode(x);
	if(HEAD==NULL){
		HEAD=newx;
		TAIL=newx;
	}else{
		TAIL->next=newx;
		TAIL=newx;
	}
}

void insertAtEnd(int x){
    Node* newx = createNode(x);
    if(HEAD==NULL){
        HEAD = newx;
    }else{
        Node* i = HEAD;
        while(i->next != NULL){
            i = i->next;
        }
        i->next = newx;
    }
}
void deleteAtStart(){
    if(HEAD!=NULL){
        Node* temp = HEAD;
        HEAD = HEAD->next;
        free(temp);
    }else{
        printf("\nCan not delete - list is empty");
    }
}

void deleteAtStartX(){
    if(HEAD!=NULL){
        Node* temp = HEAD;
        HEAD = HEAD->next;
        free(temp);
		if(HEAD==NULL) // It means SLL had only 1 node which is deleted now.
		{
			TAIL=NULL;
		}
    }else{
        printf("\nCan not delete - list is empty");
    }
}

void deleteAtEndX(){
	    if(HEAD!=NULL){
        Node* i = HEAD;
        Node* j = NULL;
        while(i->next != NULL){
            j=i;
            i = i->next;
        }
        if(j==NULL){
            // list had only single node which is deleted now
            HEAD = NULL;
			TAIL = NULL;
        }else{
            j->next = NULL;
			TAIL = j;
        }
        free(i);
        
    }else{
        printf("\nCan not delete - list is empty");
    }
}

void deleteAtEnd(){
    if(HEAD!=NULL){
        Node* i = HEAD;
        Node* j = NULL;
        while(i->next != NULL){
            j=i;
            i = i->next;
        }
        if(j==NULL){
            // list had only single node which is deleted now
            HEAD = NULL;
        }else{
            j->next = NULL;
        }
        free(i);
        
    }else{
        printf("\nCan not delete - list is empty");
    }
}

void display(){
    Node* i = HEAD;
    printf("\n SLL: ");
    while(i!=NULL){
        printf("[%d] >", i->data);
        i = i->next;
    }
}












	
	