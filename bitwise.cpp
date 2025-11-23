#include<stdio.h>
int main( )
{
	int x,y,a,b;
	printf("enter x&y values");
	scanf("%d%d",&x,&y);
	a=x&y;
	printf("bitwise and=%d",a);
	b=x;!!y;
	printf("bitwise or=%d",b);
	return 0;
}
