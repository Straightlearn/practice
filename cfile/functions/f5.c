#include <stdio.h>
#include <unistd.h>

/* this explains call be reference
 *
 */

int main()
{
    int radius;
    float area,perimeter;

    printf("This program calculates area and perimeter            of a cirle, using call by reference\n");
    sleep(2);
    printf("\nInput the radius of the circle");
    scanf("%d",radius);

    areap(radius,&area,&perimeter);
    printf("area of circle is: %f",area);
    printf("perimeter of circle is: %f",perimeter);
}

   areap(int r,float *a,float *p)
{
	*a = 3.14 * r * r;
	*p = 2 * 3.14 * r;
}
