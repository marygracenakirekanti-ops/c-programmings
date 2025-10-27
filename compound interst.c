#include<stdio.h>
int main()
{
	float P,T,R,ci;
	printf("enter P,T,R,values");
	scanf("%f%f%f",&P,&T,&R);
	ci=P*( pow (1+R/100,T)-1);
	printf("ci value is %f",ci);
	return 0;
}
