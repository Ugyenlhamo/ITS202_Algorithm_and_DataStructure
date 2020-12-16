#include <stdio.h>
struct student
{
	char name[30];
   	int age;
   	float weight;
};

int main()
{
    struct  student *stdPtr;
    struct student student1;
    stdPtr = &student1;   

    printf("***********************************************\n");
    printf("Enter Name: ");
    scanf("%s", student1.name);

    printf("Enter age: ");
    scanf("%d", &stdPtr->age);

    printf("Enter weight: ");
    scanf("%f", &stdPtr->weight);

    printf("\n");
    printf("********************************************\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", stdPtr->age);
    printf("weight: %f\n", stdPtr->weight);

    return 0;
}

//Structure Containing Pointer(s)
#include <stdio.h>
struct student
{
    char *name;
    int age;
    char *course;
};
int main()
{
    struct student stu = { "ugyen", 20, "BSc.IT"};
    struct student *ptr_stu = &stu;

    printf("***************************************\n");
    printf("Name: %s\n", ptr_stu->name);
    printf("Age: %d\n", ptr_stu->age);
    printf("Course: %s\n", ptr_stu->course);
    return 0;
}

//Passing Structure to Fuction
#include <stdio.h>
#include <string.h>
struct student 
{
    char name[20];
    int age;
    char course[20];
};
void display(struct student record)
{
	printf("*********************************\n");
    printf(" Name: %s \n", record.name);
    printf(" Age: %d \n", record.age);
    printf(" Course: %s\n", record.course);
}
int main() 
{
    struct student record;  
    strcpy(record.name, "ugyen");
	record.age = 20;
	strcpy(record.course, "BSc.IT");
    display(record);
    return 0;
}

//Returning a structure from a Function
#include<stdio.h>
struct student{
	char name[50];
	int age;
	char course[20];
};
struct student display(){
	struct student std;
	printf("**************************************\n");
	printf("Name: ");
	scanf("%s",std.name);

	printf("Age: ");
	scanf("%d",&std.age);

	printf("Course: ");
	scanf("%s", std.course);
	printf("\n");
	return std;
}
int main(){
	struct student record;
	record = display();

	printf("***************************************\n");
	printf("Name :%s\n",record.name);
	printf("Age :%d\n",record.age);
	printf("Course: %s\n", record.course);
	return 0;
}