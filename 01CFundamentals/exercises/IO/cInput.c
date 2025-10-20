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
    
    printf("\nEnter your first value: ");
    scanf("%f", &val1);
    printf("\nEnter your second value: ");
    scanf("%f", &val2);
    
    printf("\n\nValue A: %g", val1);
    printf("\nValue B: %g", val2);
    printf("\n%f + %f = %f.", val1, val2, val1 + val2);
    printf("\n%f - %f = %f.", val1, val2, val1 - val2);
    printf("\n%f * %f = %f.\n", val1, val2, val1 * val2);

    /* Practice 3 */
    int day, month;
	puts("day:");
	scanf("%d", &day);
	puts("month:");
	scanf("%d", &month);
	int dayOfYear = 0;
	if (month > 1)
		dayOfYear += 31;
	if (month > 2)
		dayOfYear += 29;
	if (month > 3)
		dayOfYear += 31;
	if (month > 4)
		dayOfYear += 30;
	if (month > 5)
		dayOfYear += 31;
	if (month > 6)
		dayOfYear += 30;
	if (month > 7)
		dayOfYear += 31;
	if (month > 8)
		dayOfYear += 31;
	if (month > 9)
		dayOfYear += 30;
	if (month > 10)
		dayOfYear += 31;
	if (month > 11)
		dayOfYear += 30;
	dayOfYear += day;
	printf("The day of the year : %d.\n", dayOfYear);

    /* Practice 4 */
    
    printf("Enter the day of the week (1-7): ");
    scanf ("%d", &day);
    
    if (day > 0 && day <= 7){    
        if (day == 1){
            printf("The day of the week is: Monday");
        };
        if (day == 2){
            printf("The day of the week is: Tuesday");
        }
        if (day == 3){
            printf("The day of the week is: Wednesday");
        }
        if (day == 4){
            printf ("The day of the week is: Thursday");
        }
        if (day == 5){
            printf ("The day of the week is: Friday");
        };
        if (day == 6){
            printf ("The day of the week is: Saturday");
        }
        if (day == 7){
            printf ("The day of the week is: Sunday");
        }
    }
    
    if (day <= 0){
        printf ("\nThere is no such day: %d. Input value must be from 1 to 7.", day);
    }
    if (day > 7){
        printf ("\nInvalid input. Please enter a number between 1 and 7.");
    }

    /* Practice 5 */
    int day, mos, yr, dayr;
	dayr = 0;
	
	printf("Enter day:\n");
	scanf("%d", &day);
	printf("Enter month:\n");
	scanf("%d", &mos);
	printf("Enter year:\n");
	scanf("%d", &yr);

	/* because you may not know the else instruction yet, 
	   this simple formula will help you to check if a year is a leap year */
	/*	if (yr % 400 == 0){
			if (mos > 1)
			    dayr += 31;
			if (mos > 2)
			    dayr += 29;
			if (mos > 3)
			    dayr += 31;
			if (mos > 4)
			    dayr += 30;
			if (mos > 5)
			    dayr += 31;
			if (mos > 6)
			    dayr += 30;
			if (mos > 7)
			    dayr += 31;
			if (mos > 8)
			    dayr += 31;
			if (mos > 9)
			    dayr += 30;
			if (mos > 10)
			    dayr += 31;
			if (mos > 11)
			    dayr += 30;
			    
		    dayr += day;
		    printf("Day of the year: %d\n", dayr);
		    printf("%d is a leap year", yr);
		}*/
		
		if (yr % 4 != 0){
			if (mos > 1)
			    dayr += 31;
			if (mos > 2)
			    dayr += 28;
			if (mos > 3)
			    dayr += 31;
			if (mos > 4)
			    dayr += 30;
			if (mos > 5)
			    dayr += 31;
			if (mos > 6)
			    dayr += 30;
			if (mos > 7)
			    dayr += 31;
			if (mos > 8)
			    dayr += 31;
			if (mos > 9)
			    dayr += 30;
			if (mos > 10)
			    dayr += 31;
			if (mos > 11)
			    dayr += 30;
			
			dayr += day;
		    printf("Day of the year: %d\n", dayr);
		    printf("%d is not a leap year", yr);    
		}	    
		else if (yr % 4 == 0){
			if (mos > 1){
			    dayr += 31;}
			if (mos > 2)
			    dayr += 29;
			if (mos > 3)
			    dayr += 31;
			if (mos > 4)
			    dayr += 30;
			if (mos > 5)
			    dayr += 31;
			if (mos > 6)
			    dayr += 30;
			if (mos > 7)
			    dayr += 31;
			if (mos > 8)
			    dayr += 31;
			if (mos > 9)
			    dayr += 30;
			if (mos > 10)
			    dayr += 31;
			if (mos > 11)
			    dayr += 30;
			    
		    dayr += day;
		    printf("Day of the year: %d\n", dayr);
		    printf("%d is a leap year", yr);
		}	
    return 0;
}