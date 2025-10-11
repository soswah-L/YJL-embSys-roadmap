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

    i = 1;
    i++;
    printf("%d \n", i);

    /* Practice 8 */
    int fourValue = 2+2-1;
	int fiveValue = ++fourValue+1;
	printf("The value of four is: %d\n", fourValue);
	printf("The value of five is: %d\n", fiveValue);

    /* Practice 9 */
    float halfValue = 0.6 + 0.1;
	halfValue -= 0.2;
	
	float piValue = 0.14159265 - 3;
	piValue += 6;
	
	printf("The value of half is: %f\n", halfValue);
	printf("The value of Pi is: %f\n", piValue);

    /* Practice 10 */
    float tenValue = 2+3+4;
	tenValue++;
	float twelveValue = 2+2.5+2+3.5;
	twelveValue += 2;
	printf("The value of ten is: %f\n", tenValue);
	printf("The value of twelve is: %f\n", twelveValue);

    return 0;

}