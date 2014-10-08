#include<stdio.h>
int main()
{
	int z,p;
	printf("验证逻辑连接词‘否定’");
	printf("\t");
	printf("z=!p");
	printf("\n");
	while(p!=0 && p!=1)
	{
		printf("please input p(0 or 1):p=");
		scanf("%d",&p);

	}
	if(p==0)
		z=1;
	else
		z=0;
	printf("z=%d\n",z);
	return 0;
}