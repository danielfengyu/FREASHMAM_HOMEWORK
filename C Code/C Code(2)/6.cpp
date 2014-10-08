#include<stdio.h>
int main()
{
	int z,p,q, r;
	printf("验证合式公式的表示方法");
	printf("\t");
	printf("z=!p^(qvr)");
	printf("\n");
	while((p!=0&&p!=1))
	{
		printf("Please input p(0 or 1):p=");
		scanf("%d",&p);
	}
	while((q!=0&&q!=1))
	{
		printf("Please input q(0 or 1):q=");
		scanf("%d",&q);
	}
	while((r!=0&&r!=1))
	{
		printf("Please input r(0 or 1):r=");
		scanf("%d",&r);
	}
	if(!(p==1)&&(q==1||r==1))
		z=1;
	else
		z=0;
	printf("z=%d\n",z);
	return 0;
}