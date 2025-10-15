#include <stdio.h>
#include <math.h>

int main(){

    int MaxSheep, value, square;
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
    }

    return 0;
}