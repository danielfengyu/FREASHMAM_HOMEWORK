#include<stdio.h>
int main()
{
	int year,month,day;
	printf("�����꣬�£���:");
	scanf("%d %d %d",&year,&month,&day);
	if(year%100!=0&&year%4==0||year%400==0)
	{
		if(month==2&&day==29)
			printf("ǰһ��Ϊ%d��2��28�պ�һ��Ϊ%d��3��1��\n",year,year);
		else if(month==3&&day==1)
			printf("ǰһ��Ϊ%d��2��29�պ�һ��Ϊ%d��3��2��\n",year,year);
	}
	else if(month==4&&day==1||month==6&&day==1||month==9&&day==1||month==11&&day==1)
			printf("ǰһ��Ϊ%d��%d��31�պ�һ��Ϊ%d��%d��2��\n",year,month-1,year,month);
	else if(month==4&&day==30||month==6&&day==30||month==9&&day==30||month==11&&day==30)
			printf("ǰһ��Ϊ%d��%d��29�պ�һ��Ϊ%d��%d��1��\n",year,month,year,month+1);
	else if(month==5&&day==1||month==7&&day==1||month==10&&day==1||month==12&&day==1)
			printf("ǰһ��Ϊ%d��%d��30�պ�һ��Ϊ%d��%d��2��\n",year,month-1,year,month);
	else if(month==5&&day==31||month==7&&day==31||month==10&&day==31||month==12&&day==31)
			printf("ǰһ��Ϊ%d��%d��30�պ�һ��Ϊ%d��%d��1��\n",year,month,year,month+1);
	else if(month==1&&day==1)
			printf("ǰһ��Ϊ%d��12��31�պ�һ��Ϊ%d��1��2��\n",year-1,year);
	else if(month==1&&day==31)
			printf("ǰһ��Ϊ%d��1��30�պ�һ��Ϊ%d��2��1��\n",year,year);
	else if(month==12&&day==31)
			printf("ǰһ��Ϊ%d��12��30�պ�һ��Ϊ%d��1��1��\n",year,year+1);
	else
			printf("ǰһ��Ϊ%d��%d��%d�պ�һ��Ϊ%d��%d��%d��\n",year,month,day-1,year,month,day+1);
	return 0;
}



