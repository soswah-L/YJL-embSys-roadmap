#include <stdio.h>

int main()
{
    /* Practice 1*/
	float score;
    int final;

	scanf("%f", &score);
	final = score;
	
	if (final == 1){
	    printf("Very bad\n");
	}
	else if (final == 2){
	    printf("Bad\n");
	}
	else if (final == 3){
	    printf("Neutral\n");
	}
	else if (final == 4){
	    printf("Good\n");
	}
	else if (final == 5){
	    printf("Very good\n");
	}
	else{
	}

    /* Practice 2 */
    float notExactFive;
	float notExactNumber;
	int exactFive;
	int roundedNumber, check;
	
	scanf("%f\n", &notExactFive);
	scanf("%f", &notExactNumber);
	
	check = notExactNumber;
	
	if (notExactNumber - check >= 0.5)
	{
		roundedNumber = notExactNumber + 1;
	}
	else
	{
		roundedNumber = notExactNumber;
	}
	exactFive = notExactFive;
	printf("Five is: %d\n", exactFive);
	printf("Rounded: %d\n", roundedNumber);
	
	return 0;
}