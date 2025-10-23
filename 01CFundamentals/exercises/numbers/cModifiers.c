#include <stdio.h>

int main(void){

    short Counter;
    Counter = 32768;
    printf("%d\n", Counter);

    long long big;
    big = 9223372036854775807;
    printf("%d\n", big);

    unsigned pos;
    pos = Counter + Counter - Counter;
    printf("%d", pos);

    /* Practice 1 */
    /* 192.168.1.1 gives a correct output but the not tallied with
    the expected output. The same thing goes with the solution code
    
    int ipAddressPart1, ipAddressPart2, ipAddressPart3, ipAddressPart4;
	scanf("%d", &ipAddressPart1);
	scanf("%d", &ipAddressPart2);
	scanf("%d", &ipAddressPart3);
	scanf("%d", &ipAddressPart4);
	if (ipAddressPart1 >= 0 && ipAddressPart1 <= 255 && 
		ipAddressPart2 >= 0 && ipAddressPart2 <= 255 &&
		ipAddressPart3 >= 0 && ipAddressPart3 <= 255 &&
		ipAddressPart4 >= 0 && ipAddressPart4 <= 255)
	{
		unsigned long int ipAddress32Bit = 0;
		ipAddress32Bit += ipAddressPart1 * 256 * 256 * 256;
		ipAddress32Bit += ipAddressPart2 * 256 * 256;
		ipAddress32Bit += ipAddressPart3 * 256;
		ipAddress32Bit += ipAddressPart4;
		printf("Human readable IP address is: %d.%d.%d.%d\n", ipAddressPart1, ipAddressPart2, ipAddressPart3, ipAddressPart4);
		printf("IP address as a 32-bit number : %lu\n", ipAddress32Bit);
	}
	else
		puts("Incorect IP Address."); */
    int p1, p2, p3, p4;
    unsigned long bit32;
    bit32 = 0;
    
    scanf("%d \n", &p1);
    scanf("%d \n", &p2);
    scanf("%d \n", &p3);
    scanf("%d", &p4);
    
    if (p1 <= 255 && p2 <= 255 && p3 <= 255 && p4 <= 255){
        if (p1 >= 0 && p2 >= 0 && p3 >= 0 && p4 >= 0){
            bit32 = (p1*(256*256*256))+(p2*(256*256))+(p3*256)+(p4*1);
            printf("Human-readable IP address is: %d.%d.%d.%d\n", p1, p2, p3, p4);
            printf("IP address as a 32-bit number: %lu\n", bit32);
        }
        else{
            printf("Incorrect IP Address.\n");
        }
    }    
    else{    
        printf("Incorrect IP Address.\n");
    }



    return 0;
}