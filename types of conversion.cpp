#include<stdio.h>
int main( )
{
	int x=5,y=2;
	float c,d;
	c=x/y;
	printf("implict c value=%f",c);
	d=(float)x/y;
	printf("\n explict d value=%f",d);
	return 0;
}
