#include<stdio.h>
int main()
{
	int Sum,Total;
	int i,m;
	Sum=1;
	Total=0;
	printf("����m��ֵ:");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		Sum*=i;
		Total+=Sum;
	}
	printf("��Ϊ:%d\n",Total);
	return 0;
}