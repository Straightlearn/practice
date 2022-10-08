#include <stdio.h>
#include <string.h>
int main(){
	char name[20],colour[10],height[20],age[7],email[50],number[11],country[10],state[10];
	printf("      Confidence coding blog\n");
	printf("\n welcome to confidence coding blog.\nWho we are:\n Confidence Coding Blog, is a community of beginners software\n engineers.\nIts a medium for sharing of informations in regards to software\n development.\n\n");
	printf("APPLICATION TO BECOME A MEMBER OF CONFIDENCE CODING BLOG\nplease give us the following info");
	printf("\nwhat is your name?\n ");
	gets(name);
	printf("\nwhat is your age?\n ");
	gets(age);
	printf("\nwhat is your height?\n");
	gets(height);
	printf("\nname of country?\n ");
	gets(country);
	printf("\nname of state?\n ");
	gets(state);
	printf("\nphone number:\n");
	gets(number);
	printf("\nemail adress:\n");
	gets(email);
	printf("I am confidence the MD of Confidence Coding Blog,we are happy to hear from you.\nfor clarity you said\n your name is %s, %s years old, and that \nyou are from %s in %s.\nThis information we have gotten so far, will be used to process your application, to become a member of Confidence Blog.\nSo we believe you have provided us with correct information", name,age,state,country);
	printf("\nThank you %s for giving us the required informations, you will receive an email in the email address %s, thanks for your time🙂", name,email);
}
