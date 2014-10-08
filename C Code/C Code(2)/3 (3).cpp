#include<stdio.h>
int main()
{
	int z,p,q;
	printf("验证逻辑连接词‘析取’");
	printf("\t");
	printf("z=pvq");
	printf("\n");
	while((p!=0&&p!=1)||(q!=0&&q!=1))
	{
		printf("please input p(0 or 1):p=");
		scanf("%d",&p);
		printf("please input p(0 or 1):q=");
		scanf("%d",&q);
	}
	if((p==1)||(q==1))
		z=1;
	else
		z=0;
	printf("z=%d\n",z);
	return 0;
}