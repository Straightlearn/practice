#include <stdio.h>
#include <string.h>
#include <unistd.h>


int main()
{
	int a,b;
	char name[90];
	
	printf("input your name ");
	scanf("%s", &name);
	sleep(1);
	printf("hi %s just input a number 🤤: ",name);
	scanf("%d", &a);
	printf("\n");
	printf(" Are ");
	sleep(2);
	printf(" You");
	sleep(2);
	printf(" Ready");
	sleep(2);
	printf(" To");
}
