					Structure and Union in C
					------------------------
Structure in C:
---------------


int n = 5;
char x = 'O';
float f = 5.6;

Array:
-----
int ar[5]={5,4,5,6,1}; // array of integer
char arc[5]={'h','e','l', 'l', 'o'} // array of characters
char name[10]="John123"; // String - array of characters that ends with NULL(\0)

------------
Student(name, roll, gender)
char name[10];
int roll;
char gender;

// Creation
struct Student{
	char name[10];
	int roll;
	char gender;
};

// Declare
struct Student s1;
struct Student s2;

// Inializize
Way-1:
s1.name="John";
s1.roll=3;
s1.gender='M';
way-2:
s2={"Kate", 5, 'F'};


// Access
printf("%s", s1.name);
printf("%d", s1.roll);
printf("%c", s1.gender);


---------------------------
// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

struct Student{
	char name[10]; // 1*10 --> 3*4byte = 12 byte
	int roll;   // 4 (int is of max size) -> 4byte
	char gender; // 1 -> 4byte
}; // total = 12 + 4 + 4 = 20 bytes

int main() {
    struct Student s1,s2;
    
    strcpy(s1.name, "John");
    s1.roll=3;
    s1.gender='M';
    
    strcpy(s2.name, "Kate");
    s2.roll=5;
    s2.gender='F';
    
    printf("\nName = %s | Roll = %d | Gender = %c", s1.name, s1.roll, s1.gender);
    printf("\nName = %s | Roll = %d | Gender = %c", s2.name, s2.roll, s2.gender);
    
    printf("\n%d", sizeof(s1)); // 20
    printf("\n%d", sizeof(s1.name)); // 10
    printf("\n%d", sizeof(s1.roll)); // 4
    printf("\n%d", sizeof(s1.gender)); // 1
    
    return 0;
}

-------------------

Array of structure
------------------
int a;
int ar[10];
----------
struct Student s;
struct Student ars[10];

struct Student s1,s2;
    
    strcpy(s1.name, "John");
    s1.roll=3;
    s1.gender='M';
    
    strcpy(s2.name, "Kate");
    s2.roll=5;
    s2.gender='F';
	
ars[0]=s1;
ars[1]=s2;

------------------------

// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

struct Student{
	int roll;
	//char gender;
	float score;
};

int main() {
    struct Student ars[10];
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    
    printf("\nEnter %d students:",n);
    for(int i=0; i<n; i++){
        printf("\n==========Student-%d========",i);
        printf("\nEnter roll");
        scanf("%d", &ars[i].roll);
        
        //printf("\nEnter gender");
        //scanf("%c", &ars[i].gender);
        
        printf("\nEnter score");
        scanf("%f", &ars[i].score);
    }
    
    for(int i=0; i<n; i++){
        //printf("\nRoll = %d | Gender = %c | Score = %f", ars[i].roll, ars[i].gender, ars[i].score);
        printf("\nRoll = %d | Score = %f", ars[i].roll, ars[i].score);
    }
    
    return 0;
}

How to rename struture?
1. 
typedef struct Student{
	int roll;
	char gender;
	float score;
} stud;

2. typedef  struct Student stud;

3. Structure pointer
struct Student s1; // s1 is of type Student
s1.roll

struct Student* p1; // P1 is Student pointer
p1->roll;

Q1. Find the student having highest score.
Q2. Write a program to read and display Employee(id, name, age, salary)
Q3. typedef struct State{
	char name[10];
	struct State* eastState;
	struct State* westState;
	struct State* northState;
	struct State* southState;
}State;















