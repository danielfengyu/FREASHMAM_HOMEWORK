#include<stdio.h>
int main()
{
	int Sum,Total;
	int i,m;
	Sum=1;
	Total=0;
	printf("输入m的值:");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		Sum*=i;
		Total+=Sum;
	}
	printf("和为:%d\n",Total);
	return 0;
}