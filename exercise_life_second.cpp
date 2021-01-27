#include<stdio.h>
#define SEC_PER_YEAR
int main(void)
{
	float second, year;
	printf("Enter how many years old you are:");
	scanf_s("%f", &year);
	second = year * SEC_PER_YEAR
	printf("You are :%.1f year old\n", year);
	printf("And you %e second old,too.\n", second);
	
	getchar();
	return 0;

}
