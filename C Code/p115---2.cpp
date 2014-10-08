#include<stdio.h>
int main()
{
	float G,H,t;
	printf("输入体重和身高:\n");
	scanf("%f %f",&G,&H);
	t=G/(H*H);
	if(t<18)
		printf("偏廋\n");
	else if(t>=18&&t<=25)
		printf("正常体重\n");
	else if(t>25&&t<27)
		printf("体重超重\n");
	else
		printf("肥胖\n");
	return 0;
}