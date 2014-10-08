#include<stdio.h>
int main()
{
	int i;
	void perfectNum(int i);
	for(i=2;i<1000;i++)
	perfectNum(i);
		return 0;
}
void perfectNum(int i)
{
	int n, sum=0;
	for(n=1;n<i;n++)
	{
		if(i%n==0)
		{
			sum=sum+n;
		}
	}
		if(sum==i)
			printf("%d\n",sum);
		 
}
