/*Z=P->~Q^PVR�ĳ�����Ա�ʾ����*/
#include<stdio.h>
int main()
{
	int z,p,q,r;
	printf("��֤��ʽ��ʽ�ı�ʾ����");
	printf("\t");
	printf("Z=P->~Q^PVR");
	printf("\n");
	while((p!=0&&p!=1))
	{
		printf("please input p(0 or 1):p=");
		scanf("%d",&p);
	}
	while((q!=0&&q!=1))
	{
		printf("please input q(0 or 1):q=");
		scanf("%d",&q);
	}
	while((r!=0&&r!=1))
	{
		printf("please input r(0 or 1):r=");
		scanf("%d",&r);
	}
	if(p == 0||(!(q == 1)||p == 1&&r == 1))
		z=1;
	else
		z=0;
	printf("\t\tz=%d\n",z);
	return 0;
}