#include <stdio.h>
#include <stdarg.h>
int max(int start, ...)
{
	int *p;
	va_list ptr;
	p=&ptr;
	int sum=0;
	va_start(ptr,start);
	
	for(int i=0;i<start;i++)
	{
		sum += va_arg(ptr,int);
	
	va_end(ptr);
	};
	printf("%i",*p);
	
	return sum;
}

int main()
{
	int num[50];
	int total;
	int sum;
	int m,k=0,y=1,l=1;
	printf("\tA Simple Calculator To Sum Up Any Given Numbers:\v");
	printf(" MODE OF CALCULATION.\n");
	printf(" How many numbers do you want to sum up?\n");
	scanf("%d",&total);
	printf("the numbers must be %d in total.\n\v",total);
	for(int p=0;p<total;p++){
	printf(" input the number[%i] to be added .\n",y);
	scanf("%i",&num[m]);
	m++,y++;
	}
	for(int p=0;p<total;p++){	
	printf(" the number[%i] is %i\n",l,num[k]);	  k++,l++;
	}
	for(int p=0;p<total;p++){
		sum = max(total,&num[k]);
		k++;
	}
	printf("Their sum is %i",sum);
	return (0);
}
