#include<stdio.h>
int main()
{
	int i;
	int Prime(int);
	for(i=2;i<=200;i++)
	{
		Prime(i);
	
	}
	printf("\n");
	return 0;
}
int Prime(int i)
{
	int j;
	if(i==2)
		printf("%5d",i);
	else
		for(j=2;j<i;j++)
		{
			if(i%j==0) break;
		}
		if(i==j)
			printf("%5d",i);
		return i;
}