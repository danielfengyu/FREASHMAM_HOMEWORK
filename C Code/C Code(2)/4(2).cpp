#include"stdio.h"
int main()
{
	int z, p,q;
	printf("��֤�߼����Ӵʡ���������");
	printf("\t");
	printf("z=p->q");
	printf("\n");
	while((p!=0&&p!=1)||(q!=0&&q!=1))
	{
		printf("please input p(0 or 1):p=");
		scanf("%d",&p);	
		printf("please input p(0 or 1):q=");
		scanf("%d",&q);
	}
	if(p==1&&q==0)
		z=0;
	else
		z=1;
	printf("z=%d\n",z);
	return 0;
}