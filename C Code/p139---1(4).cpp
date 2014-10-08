#include<stdio.h>
int main()
{
	int i,n;
	float sum,term,x;
	sum=1.0;
	term=1.0;
	printf("输入x:\n");
	printf("输入n:\n");
	scanf("%f %d",&x,&n);
	for(i=1;i<=n;i++)
	{
		term=term*(x/i);
		sum+=term;
	}
	printf("所求值为:%f\n",sum);
	return 0;
}


