#include<stdio.h>
int main()
{
	int m,i;
	printf("����һ����:");
	scanf("%d",&m);
	printf("%d=",m);
	for(i=2;i<m;i++)
	{
		if(m%i==0)
		{
			printf("%d*",i);
			m=m/i;
			--i;
		}
	}
	printf("%d\n",m);
	return 0;
}

