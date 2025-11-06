#include <stdio.h>

int main()
{
    int num, count, count2;
    
    scanf("%d", &num);
    
    if (num > 20){
        num = 20;
    }

    count=num;
    
	do{
        if (num <= 0){
	        printf("*#\n");
            break;
        }
        else{
            printf("*#\n");
            count--; 
            count2 = num - count;    
            if (count != 0){
                do{
                    printf("*#");
                    count2--;
                } while(count2 != 0);
            }
        }
	}
	while(count != 0);

	return 0;
}