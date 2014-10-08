#include<stdio.h>
int main()
{
	int i,n,m,M;
	for(i=1;i<5;i++)
	{
		for(n=1;n<5;n++)
		{
			for(m=1;m<5;m++)
			{
				M=i*100+n*10+m;
				if(n==i||m==i||m==n|m==n==i)
					printf(" \n");
				printf("%d\n",M);
			}
		}
	}
	return 0;
}