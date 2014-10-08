#include<stdio.h>
int main()
{
	char cGrade;
	int iScore,iGrade;
	printf("输入分数按0\n");
	printf("输入等级按1\n");
	scanf("%d",&iScore);
	switch(iScore)
	{
	case 0:
		printf("输入成绩(0--100)\n");
		scanf("%d",&iGrade);
		if(iGrade<0||iGrade>100)
		{
			printf("成绩无效\n");
		}
		else
		{
			if(iGrade>=85)
			{
				printf("等级为A\n");
			}
			else if(iGrade<85&&iGrade>=70)
			{
				printf("等级为B\n");
			}
			else if(iGrade<70&&iGrade>=60)
			{
				printf("等级为C\n");
			}
			else
			{
				printf("等级为D\n");
			}
		}
	case 1:
		printf("输入等级:\n");
		scanf("%c",&cGrade);
		if(cGrade='A')
		{
			printf("成绩段为85--100\n");
		}
		else if(cGrade='B')
		{
			printf("成绩段为70--84\n");
		}
		else if(cGrade='C')
		{
			printf("成绩段为60--69\n");
		}
		else if(cGrade='D')
		{
			printf("成绩段为0--60\n");
		}
	}
	return 0;
}
