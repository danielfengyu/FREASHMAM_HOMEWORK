#include<stdio.h>
#define N 12
#define M 4
int main()
{
	int num1[N];
	int num2[M];
	int i,j;
	printf("ÊäÈëÊı×é:\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&num1[i]);
	}
	for(i=0;i<M;i++)
	{
		num2[i]=num1[N-M+i];
	}
	for(j=N-M-1;j>=0;j--)
	{
		num1[j+M]=num1[j];
	}
	for(i=0;i<M;i++)
	{
		num1[i]=num2[i];
	}
	for(i=0;i<N;i++)
	{
		printf("%d",num1[i]);
		printf(" ");
	}
	printf("\n");
	return 0;
}