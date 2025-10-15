#include <stdio.h>

int main()
{
    printf("Hello cold world! \n %%");

    int i, j;
    j = 22;
    i = 31;
    printf("%d %x %o", i, i, i);
    printf("\n %f \n", i);

    /* Common Mistakes */
    printf("\n%d %d %d", i, j);
    printf("\n%d", i, j);
    
    char c;
    c = '?';
    printf("\n%d", c);

    /* Practice 1 */



    return 0;

}