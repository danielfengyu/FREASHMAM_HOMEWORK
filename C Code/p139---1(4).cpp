#include<stdio.h>
int main()
{
	int i,n;
	float sum,term,x;
	sum=1.0;
	term=1.0;
	printf("����x:\n");
	printf("����n:\n");
	scanf("%f %d",&x,&n);
	for(i=1;i<=n;i++)
	{
		term=term*(x/i);
		sum+=term;
	}
	printf("����ֵΪ:%f\n",sum);
	return 0;
}


