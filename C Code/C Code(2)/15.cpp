#include<stdio.h>
#define N 4
int main()
{
	int i,j;
	int M[N*(N+1)/2];
	printf("��ȼ۹�ϵ\n");
	for(i=1;i<=N*(N+1)/2;i++)
		scanf("%d",&M[i]);
	for(j=1;j<=N;j++)
	{
		for(j=1;j<=N;j++)
		{
			if(i<j)
				printf("%4d",M[j*(j-1)/2+i]);
			else  
				printf("%4d",M[i*(i-1)/2+j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("����������ȼ۹�ϵR���ɵĵȼ���Ϊ:");
	for(j=1;j<=N;j++)
	{
		if(M[j*(j+1)/2]=0)
			continue;
		else
			printf("\n");
		printf("%4d",j);
		for(i=j+1;i<=N;i++)
		{
			if(M[i*(i-1)/2+j] == 0)
				continue;
			else
				printf(",%4d",i);
			M[i*(i+1)/2]=0;
		
		}
	}
	return 0;
}