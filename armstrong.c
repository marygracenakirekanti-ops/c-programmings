#include<stdio.h>
int main( )
{
	int n,d,c,sum=0,temp;
	printf("enter n value");
	scanf( "%d",&n);
	temp=n;
	while(n>0)
	{
		d=n%10;
		c=d*d*d;
		sum=sum+c;
		n=n/10;
	}
	if(sum==temp)
	printf("it is a armstrong");
	else
	printf( "it is not a armstrong");
	return 0;
	
}
