#include<stdio.h>
int main()
{
	char cGrade;
	int iScore,iGrade;
	printf("���������0\n");
	printf("����ȼ���1\n");
	scanf("%d",&iScore);
	switch(iScore)
	{
	case 0:
		printf("����ɼ�(0--100)\n");
		scanf("%d",&iGrade);
		if(iGrade<0||iGrade>100)
		{
			printf("�ɼ���Ч\n");
		}
		else
		{
			if(iGrade>=85)
			{
				printf("�ȼ�ΪA\n");
			}
			else if(iGrade<85&&iGrade>=70)
			{
				printf("�ȼ�ΪB\n");
			}
			else if(iGrade<70&&iGrade>=60)
			{
				printf("�ȼ�ΪC\n");
			}
			else
			{
				printf("�ȼ�ΪD\n");
			}
		}
	case 1:
		printf("����ȼ�:\n");
		scanf("%c",&cGrade);
		if(cGrade='A')
		{
			printf("�ɼ���Ϊ85--100\n");
		}
		else if(cGrade='B')
		{
			printf("�ɼ���Ϊ70--84\n");
		}
		else if(cGrade='C')
		{
			printf("�ɼ���Ϊ60--69\n");
		}
		else if(cGrade='D')
		{
			printf("�ɼ���Ϊ0--60\n");
		}
	}
	return 0;
}
