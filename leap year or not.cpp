#include<stdio.h>
int main( )
{
	int y;
	printf("enter the year to check");
	if((year%400==0)||((year%4==0)&&(year%100!==0)));
	printf("it is a leap year");
	else
	printf("it is a non leap year");
	return 0;
}
