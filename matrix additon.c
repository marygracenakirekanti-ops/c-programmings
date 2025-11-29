#include<stdio.h>
int main( )
{
	int A[10][10],B[10][10],C[10][10],r,c,i,j;
	printf("enter rows&columns sizes");
	scanf("%d%d",&r,&c);
	printf("enter A matrix value");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter B matrix value");
	for(j=0;j<r;j++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;j<r;j++)
	{
		for(j=0;j<c;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	printf("Result matrix is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
