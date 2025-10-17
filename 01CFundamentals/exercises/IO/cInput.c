#include <stdio.h>
#include <math.h>

int main(){

    /*int MaxSheep, value, square;
    float value1, squareroot;

    scanf("%d", &MaxSheep);
    printf("You counted a total of %d sheeps!\n\n", MaxSheep);

    printf("Give me a number and I will square it!\n");
    scanf("%d", &value);
    square = value * value;
    printf("You've given me: %d\n", value);
    printf("The squared value is: %d\n\n", square);

    printf("Give me a number and I will find its square root:\n");
    scanf("%f", &value1);
    if(value1 >= 0.0) {
        squareroot = sqrt(value1);
        printf("You have given me: %f\n", value1);
        printf("The sqaure root is: %f\n", squareroot);
    }*/

    /* Practice 1 */
    int days;
    float piVal;
    
    printf("How many days in the week: ");
    scanf("%d", &days);

    printf("The value of Pi to two points: ");
    scanf("%f", &piVal);

    printf("\nThere are %d days in the week.\n", days);
    printf("Pi value is %f", piVal);

    /* Practice 2 */
        float val1, val2;
    
    printf("Enter your first value: ");
    scanf("%f", &val1);
    printf("\nEnter your second value: ");
    scanf("%f", &val2);
    
    printf("\n\nValue A: %g", val1);
    printf("\nValue B: %g", val2);
    printf("\n%f + %f = %f.", val1, val2, val1 + val2);
    printf("\n%f - %f = %f.", val1, val2, val1 - val2);
    printf("\n%f * %f = %f.", val1, val2, val1 * val2);

    return 0;
}