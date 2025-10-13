#include <stdio.h>

int main()
{
    int x = 1;

    if(x = 1) printf("It's equal to 1!\n");
    printf("It's really not tho\n\n");

    if(x = 1){
        printf("It's equal to 1!\n");
        printf("It's really not tho");
    }

    /* Practice 1 */
    int a = 10;
	if (a > 9)
		puts("First condition is true");
	if (a == 9)
		puts("Second condition is true");
	if (a == 9 + 1)
		puts("Third condition is true");

    /* Practice 2 */
    int n = -5;
	if(n<0){
	    printf("The absolute value of %d is %d", n, n * -1);
	}
	printf("\nThe value of n is %d", n);

    /* Practice 3 */
    int dayOfWeek = 1;
	if(dayOfWeek == 1){
	    printf("The day of the week is: Monday");
	}

	
    return 0;

}