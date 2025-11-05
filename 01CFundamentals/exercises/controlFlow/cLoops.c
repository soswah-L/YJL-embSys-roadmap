#include <stdio.h>

int main (void){
    /* temporary storage for incoming numbers */
    int number;

    /* we will store the currently greatest number here */
    int max = -100000;

    /* get the first value */
    scanf ("%d", &number);

    /* if the number is not equal to -1 we will continue */
    while (number != -1) {

        /* is the number greater than max? */
        if (number > max)

            /* yes – update max */
            max = number;

        /* get next number */
            scanf ("%d", &number);

        }

    /* print the largest number */
    printf("The largest number is %d \n", max);


    /* count the numbers here */
    int Evens = 0, Odds = 0;

    /* store the incoming numbers here */
    int Number;

    /* read the first number */
    scanf("%d", &Number);

    /* 0 terminates execution */
    while(Number != 0) {
        /* check if the number is odd */
        if(Number % 2)
            /* increase the odd counter */
            Odds++;
        else
            /* increase the even counter */
            Evens++;
        /* read the next number */
        scanf("%d", &Number);
    }
    /* print results */
    printf("Even numbers: %d\n", Evens);
    printf("Odd numbers: %d\n", Odds);

    return 0;
}