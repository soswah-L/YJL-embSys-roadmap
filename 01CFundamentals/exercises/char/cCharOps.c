#include <stdio.h>

int main()
{
    /* Practice 1 */
    printf("Diff beetween '%c' and '%c' is : %d\n", 'c', 'a', 'c' - 'a');
	printf("Diff beetween '%c' and '%c' is : %d\n", 'a', 'c', 'a' - 'c');

    /* Practice 2 */
    char firstLetter = 'A';
	char firstSmallLetter = 'a';
	char lastLetter = 'Z';
	char lastSmallLetter = 'z';
	printf("Upper case letters beetween (and with) '%c' and '%c' is : %d\n", 
		lastLetter, firstLetter, lastLetter - firstLetter + 1);
	printf("Lower case letters beetween (and with) '%c' and '%c' is : %d\n\n", 
		lastSmallLetter, firstSmallLetter, lastSmallLetter - firstSmallLetter + 1);
    
    /* Practice 3 */
    char zero = '0';

    printf("\'%c\' - \'%c\' is: %d \n", '1', zero, '1' - zero);
    printf("\'%c\' - \'%c\' is: %d \n", '2', zero, '2' - zero);
    printf("\'%c\' - \'%c\' is: %d \n", '3', zero, '3' - zero);
    printf("\'%c\' - \'%c\' is: %d \n", '4', zero, '4' - zero);
    printf("\'%c\' - \'%c\' is: %d \n", '5', zero, '5' - zero);
    printf("\'%c\' - \'%c\' is: %d \n", '6', zero, '6' - zero);
    printf("\'%c\' - \'%c\' is: %d \n", '7', zero, '7' - zero);
    printf("\'%c\' - \'%c\' is: %d \n", '8', zero, '8' - zero);
    printf("\'%c\' - \'%c\' is: %d \n", '9', zero, '9' - zero);
    printf("\'%c\' - \'%c\' is: %d \n", '0', zero, zero - zero);

    return 0;
}