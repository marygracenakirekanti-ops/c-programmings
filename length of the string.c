#include<stdio.h>
int main( )
{
	char s[20];
	int l;
	printf("enter string name");
	scanf("%s",&s);
	l=strlen(s);
	printf("length of the string");
	return 0;
}
#include<stdio.h>
int main( )
{
	char s[10];
	int l;
	printf("enter string name");
	scanf("%s",&s);
	for(i=0;s[i]='\0';i++);
	l=i;
	printf("length of the string=%d,l");
	return 0;
}
