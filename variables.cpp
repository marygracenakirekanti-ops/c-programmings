#include<stdio.h>
int main( )
{
    int x,y,and,or;
	printf("enter x&y values");
	scanf("%d%d",&x,&y);
	and=x&y;
	printf("bitwise and=%d",and);
	or=x:y;
	printf(" bitwise or=%d",or);
	return 0;
}
