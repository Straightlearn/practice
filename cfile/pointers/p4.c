#include <stdio.h>

/* in normal practice we use a pointer of a type
 * to point at a variable of the same type as the 
 * pointer. the example below is just an illustration
 *
 */

int main()
{
    char c,*cc;
    int i;
    long l;
    float f;

    c = 'z';
    i = 15 ;
    l = 77777;
    f = 3.14;
    cc = &c;
    printf("\nc=[%c] cc=[%u]\n", *cc , cc);
    cc = &i;
    printf("\ni=[%d] cc=[%u]\n", *cc , cc);
    cc = &l;
    printf("\nl=[%ld] cc=[%u]\n",*cc , cc);
    cc = &f;
    printf("\nf=[%f] cc=[%u]\n" ,*cc , cc);
}
