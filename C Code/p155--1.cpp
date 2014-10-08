#include<stdio.h>
#define  N 10
int main()
{
	int i,j,M;
	int sum=0;
	int number[N];
	printf("输入数组:\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&number[i]);
	}
	for(i=0;i<N;i++)
	{
		sum+=number[i];
	}
	M=sum/N;
	printf("比平均值大的有:");
	for(i=0;i<N;i++)
	{
		number[i];
		if(number[i]>M)
			printf("%-5d",number[i]);
	}
	printf("\n");
	return 0;
}

