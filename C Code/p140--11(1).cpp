#include<stdio.h>
#define N 20
int main()
{
	int i,j;
	for(i=0;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			if(j>=N-i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
		return 0;
}