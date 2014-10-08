#include<stdio.h>
#define N 4
int main()
{
	int a[N];
	int i,z;
	printf("构造任意公式的真值表");
	printf("\n");
	for(i=1;i<=4;i++)
	{
		a[i]=0;
		printf("a[%4d]=0",i);
	}
sign:
	if(!(a[1]==1||a[2]==1)&&((a[1]==1||a[3]==1)||a[4]==1))
		z=1;
	else
		z=0;
	for(i=N;i>=1;i--)
	{
		printf("%4d",a[i]);
	}
	printf("  |%4d\n",z);
	i=1;
sing:
	a[i]=a[i]+1;
	if(a[i]<2)
		goto sign;
	else
		a[i]=0;
	i++;
	if(i<=4)
		goto sing;
	return 0;


}