#include<stdio.h>
int main( )
{
	int a[100],i,n;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array name");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++);
	{
		printf("%d",a[i]);
	}
	return 0;
}
