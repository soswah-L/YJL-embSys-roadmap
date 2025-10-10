#include <stdio.h>

int main()
{
    int i, j;
    i = 1;
    j = i++; /* value first then increment value of i then print*/

    printf("%d %d \n", i, j);

    i = 1;
    j = ++i; /* increment first then take value of the result then print*/

    printf("%d %d \n", i, j);

    i = 4;
    j = 2 * i++;
    printf ("%d %d \n", i, j);

    i = 2 + --j;
    printf ("%d %d \n", i, j);

    return 0;

}