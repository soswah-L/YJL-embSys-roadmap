#include <stdio.h>

int main(void){
    int num1, num2, ans;
	
	while(num2 != 0){
        
	    scanf("\n%d\n", &num1);
	    scanf("%d", &num2);

        if (num1 == 99 && num2 == 0){
	        printf ("Sum: %d\nFinish.\n\n", num1 + num2);
        }
        else{
            printf("Sum: %d\n\n", num1 + num2);
        }
	}
return 0;
}