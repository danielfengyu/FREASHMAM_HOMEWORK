#include<stdio.h>
int main()
{
	int i,k,temp;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int*pi;
	printf("输入一个数:");
	scanf("%d",&k);
	pi=&a[k];
	pi++;
	for(i=k;i<10;i++,++pi)
	{
		a[i]=*pi;	
	}

	for(i=0;i<9;i++)
	printf("%d ",a[i]);
	return 0;
}