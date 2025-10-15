#include <stdio.h>

int main()
{
    printf("Hello cold world! \n %%");

    int i, j;
    j = 22;
    i = 31;
    printf("%d %x %o", i, i, i);
    printf("\n %f \n", i);

    /* Common Mistakes */
    printf("\n%d %d %d", i, j);
    printf("\n%d", i, j);
    printf("\n%d %d %d", 'A', ' ', 'a');
    printf("\n%d", i*2);

    char c;
    c = '?';
    printf("\n%d\n\n", c);

    /* Practice 1 */
    int day = 20;
	int month = 2;
	int year = 2016;
	printf("%04d-%02d-%02d - YYYY-MM-DD format - ISO 8601\n", year, month, day);
	printf("%02d-%02d-%04d - MM-DD-YYYY format\n", month, day, year);
	printf("%02d-%02d-%04d - DD-MM-YYYY format\n", day, month, year);
	printf("%d-%d-%d - D-M-Y format\n\n", day, month, year);

    /* Practice 2 */
    float studentAYear1 = 4.2;
	float studentAYear2 = 4.5;
	float studentAYear3 = 4.2;
	
	float studentBYear1 = 4.3;
	float studentBYear2 = 4.4;
	float studentBYear3 = 4.7;
	
	float studentCYear1 = 4.3;
	float studentCYear2 = 4.8;
	float studentCYear3 = 4.9;
	
	printf("Student name 1stYGrade 2ndYGrade 3rdYGrade Avg\n");
	
	printf("StudentA   %6.2f   %7.2f   %7.2f    %7.2f\n", 
	studentAYear1, studentAYear2, studentAYear3, 
	(studentAYear1 + studentAYear2 + studentAYear3) / 3);
	
	printf("StudentB   %6.2f   %7.2f   %7.2f    %7.2f\n", 
	studentBYear1, studentBYear2, studentBYear3, 
	(studentBYear1 + studentBYear2 + studentBYear3) / 3);
	
	printf("StudentC   %6.2f   %7.2f   %7.2f    %7.2f\n\n", 
	studentCYear1, studentCYear2, studentCYear3, 
	(studentCYear1 + studentCYear2 + studentCYear3) / 3);
    
    /* Practice 3 */
    printf("      ^\n    /   \\\n  /       \\\n<          >\n  \\       /\n    \\   /\n      v");
    
    
    return 0;

}