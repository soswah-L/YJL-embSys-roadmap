#include <stdio.h>

int main()
{
    /* Practice 1 */
    printf("The value of six is: %d \n", 16-0-10);
    
    /* Practice 2 */
    int x = 10; /*declaration of x to be used on the second print*/
    printf("The value of seven is: %d \n", 0007); /*hexadecimal*/
    printf("The value of eight is: %d \n", (8000*x - 7992*x)/x);

    /* Practice 3 */
    printf("The value of nine is: %d \n", 0x9);
	printf("The value of ten is: %d \n", 0xA);

    /* Practice 4 */
	printf("The value of twenty-one is: %d \n", 0025);
	printf("The value of twenty-two is: %d \n", 0x16);
	printf("The value of sixty-two is: %d \n", 0x3E);
	printf("The value of seventy-four is: %d \n", 0x4A);

    /* Practice 5 */
    int simpleVariable = 10;
	printf("The value of ten is: %d \n", simpleVariable);

    /* Practice 6 */
    int sec60 = 60;
	int min60 = 60;
	printf("One hour is %d seconds\n", sec60 * min60);

    int ip_Part1 = 127;
	int ip_Part2 = 0;
	int ip_Part3 = 0;
	int ip_Part4 = 1;

	printf("Localhost IP is %d.%d.%d.%d\n", ip_Part1, ip_Part2, ip_Part3, ip_Part4);

    /*Practice 7*/
    int daysInCurrentFebruary = 28;
	int daysInJanuary  	   	= 31;
	int daysInFebruary = daysInCurrentFebruary;
	int daysInMarch 		= 31;
	int daysInApril 		= 30;
	int daysInMay 			= 31;
	int daysInJune 			= 30;
	int daysInJuly 			= 31;
	int daysInAugust        = 31;
	int daysInSeptember 	= 3*10;
	int daysInOctober 		= 3+28;
	int daysInNovember 		= 3*10;
	int daysInDecember 		= 3+28;
	int daysInFirstHalf = daysInJanuary + daysInFebruary + daysInMarch 
	    + daysInApril + daysInMay + daysInJune;
	int daysInSecondHalf = daysInJuly + daysInAugust + daysInSeptember 
		+ daysInOctober + daysInNovember + daysInDecember;
	printf("Days in the first half of the current year: %d\n", daysInFirstHalf);
	printf("Days in the second half of the current year: %d\n", daysInSecondHalf);
	printf("Days in the current year: %d\n", daysInFirstHalf + daysInSecondHalf);

    int v=10800; /* 3*60*60 */
  
    int min3sec=3*60; /* This is a variable to hold the value of 3 minutes in seconds */

    int min6sec=6*60; /* This is a variable to hold the value of 6 minutes in seconds */
  
    float pi=3.141526; /* This is the value of pi */
  
    
    printf(" There are %d seconds in 3 hours.\n", v);
    printf(" There are %d seconds in 3 minutes.\n", min3sec);
    printf(" There are %d seconds in 5 minutes.\n", min6sec);
  
  
      /*here we should print the v value, but a programmer didn't have time to write the code.
      However, he/she likes writing long, well formatted comments*/

	/* Practice 11 */
	int tenValue = 3 * 8 % 14;
	int twentyValue = 2 * tenValue / 10 * 10;
	printf("The value of ten is: %d\n", tenValue);
	printf("The value of twenty is: %d\n", twentyValue);

	int i = 100;
	int j = -i;

	printf("%d", j);

	return 0;
}