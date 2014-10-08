#include<stdio.h>
#define N 5
int main()
{
	int num[N];
	int i,j;
	printf("ÊäÈëÊı×é:\n");
	for(i=0;i<N;i++)
		scanf("%d",&num[i]);
	for(i=0;i<N-1;i++)
	{
		if(num[i]!=-1)
		{
			for(j=i+1;j<N;j++)
			{
				if(num[j]==num[i])
					num[j]=-1;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		if(num[i]!=-1)
		{
			printf("%d",num[i]);
		}
		else
			printf(" ");
		
	}
		printf("\n");
	return 0;
}


