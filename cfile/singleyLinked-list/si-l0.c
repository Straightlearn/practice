#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int printallbooks();
int printbook1();
int printbook2();
int printbook3();
int printbook4();
struct books 
{
	char *name;
	char *color;
	int pages;
	int price;
        struct books *links;
}*head,*book1,*book2,*book3,*book4;

int main()
{
	int m;
	
	head=malloc(sizeof(struct books));
	book1=malloc(sizeof(struct books));
	book2=malloc(sizeof(struct books));
	book3=malloc(sizeof(struct books));
	book4=malloc(sizeof(struct books));
	
	/**
	 * linking the nodes together
	 */
	head->links=book1;
	book1->links=book2;
	book2->links=book3;
	book3->links=book4;
	book4->links=NULL;
	

	//for book 1
	book1->name="calculus";
	book1->price= 6000.00;
	book1->pages= 60;
	book1->color="black";
	
	//for book 2
	book2->name="GST-102";
	book2->price= 3000.00;
	book2->pages= 40;
	book2->color="Red";
	
	//for book 3
	book3->name="Asusu-Igbo";
	book3->price= 2500.00;
	book3->pages= 30;
	book3->color="yellow";
	
	//for book 4
	book4->name="engine-drawing";
	book4->price= 1500.00;
	book4->pages= 20;
	book4->color="blue";

	printf("\n\n======================================================");
	printf("\nList of first semester textbooks: cost, pages and \ntheir color.\n");
	printf("======================================================\n\n");
	printf("Choose An Option To Display Book Details.\n");
	printf("[1] For Book 1.\n[2] For Book 2.\n[3] For book 3.\n[4] For book 4.\n[5] print all books in the list.\n[0] End program\n\n"); 
	scanf("%d",&m);

	
		while(1){
		if(m==1)
		{
		   printbook1();
		   sleep(9);
		   main();
		}
		else if(m==2)
		{
		   printbook2();
		   sleep(9);
		   main();
		}
		else if(m==3)
		{
		   printbook3();
		   sleep(9);
		   main();
		}
		else if(m==4)
		{
		   printbook4();
		   sleep(9);
		   main();
		}
		else if(m==5)
		{
		   printallbooks();
		   sleep(9);
		   main();
		}
		else if(m==0){
		   printf("\n------------------------------------------------------\n");
		   printf("This program was created by Okoroji Confidence u.(aka straightlearn)\n");
		   sleep(4);
		   printf("\nProgram ended!\n");
		   printf("------------------------------------------------------\n");
		   exit(0);}
		else if(m<0 || m>5){
		
		printf("Opps , thats not right option number!\n");
		sleep(2);
		printf("please input a valid number.\n");
		sleep(4);
		  main(); }
	}	
		
		
}

int printallbooks()
{
	printbook1();
	printbook2();
	printbook3();
	printbook4();
	return (0);
}

int printbook1()
{
	printf("\tFor book 1.\n");
	printf("Name: %s.\n",book1->name);
	printf("Price: %i.\n",book1->price);
	printf("Color: %s.\n",book1->color);
	printf("Pages: %d.\n\n",book1->pages);
	return (0);

}

int printbook2()
{
	printf("\tFor book 2.\n");
	printf("Name: %s.\n",book2->name);
	printf("Price: %i.\n",book2->price);
	printf("Color: %s.\n",book2->color);
	printf("Pages: %d.\n\n",book2->pages);
	return (0);	
}

int printbook3()
{
	printf("\tFor book 3.\n");
	printf("Name: %s.\n",book3->name);
	printf("Price: %i.\n",book3->price);
	printf("Color: %s.\n",book3->color);
	printf("Pages: %d.\n\n",book3->pages);
	return (0);
}

int printbook4()
{
	printf("\tFor book 4.\n");
	printf("Name: %s.\n",book4->name);
	printf("Price: %i.\n",book4->price);
	printf("Color: %s.\n",book4->color);
	printf("Pages: %d.\n\n",book4->pages);
	return (0);
}
		
		
		




	


