#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * @struct: with some members
 * 
 * return: always 0
 */

int printout();
/*
 * making use of a struct
 * data structure
 */
struct node
{
	char *name;
	char *facualty;
	char *dept;
	struct node *link;
}student_1,student_2,student_3,student_4;

int main()
{
	struct node *head;
	head= malloc(sizeof(struct node));
	
	/**
	 * for student_1
	 */
	student_1.link= NULL;
	student_1.name="okoroji confidence";
	student_1.facualty="SOES";
	student_1.dept="SVG";

	/**
	 * for student_2
	 */
	student_2.link= NULL;
	student_2.name="stanly njoku";
	student_2.facualty="SOES";
	student_2.dept="SVG";

 	/*
	 * for student_3
	 */
	student_3.link= NULL;
	student_3.name="emeka obi";
	student_3.facualty="SOH";
	student_3.dept="SLT";

	student_1.link=&student_2;
	student_2.link=&student_3;

	/*
	 * making a data structure
	 * for student_4
	 * using array
	 */
	char name[30];
	char facualty[10];
	char dept[10];

	/**
	 * we dont use the address of operator(&)
	 * when coping to an array using scanf
	 */
	printf("\tFEDERAL UNIVERSITY OF TECHNOLOGY OWERRI. \n\tFUTO ADMISSION BOARD 2022 FRESHERS:\n\n");
	printf("\tInput your data below\ndo this to be included in the list of admitted students:\n");
	printf("whats your name?\n");
	scanf("%s",name);
	printf("your facualty\n");
	scanf("%s",facualty);
	printf("your department\n");
	scanf("%s",dept);
	printout();
	printf("\nYour details:-\nname %s.\nFacualty %s.\nDepartment %s.\n",name,facualty,dept);
	return (0);
}

/*
 * function to print out
 * other students data
 */
int printout()
{
	printf("\tDetails of Admitted Students");

	printf("\nThe first student details:-\nName: %s.\nFacualty: %s.\nDepartment: %s.\n\n",student_1.name,student_1.facualty,student_1.dept);

	printf("The second student details:-\nName: %s.\nFacualty: %s.\nDepartment: %s.\n\n",student_2.name,student_2.facualty,student_2.dept);

	printf("The third student details:-\nName: %s.\nFacualty: %s.\nDepartment: %s.\n",student_3.name,student_3.facualty,student_3.dept);

	return (0);
}
