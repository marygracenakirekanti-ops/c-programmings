#include<stdio.h>
int main( )
{
	char s[20];
	printf("enter string name");
	gets(s);
	printf("lower string is=%s",strlwr(s));
	return 0;
}
