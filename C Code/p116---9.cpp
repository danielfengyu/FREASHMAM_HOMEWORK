#include<stdio.h>
int main()
{
	int year,month,day;
	printf("输入年，月，日:");
	scanf("%d %d %d",&year,&month,&day);
	if(year%100!=0&&year%4==0||year%400==0)
	{
		if(month==2&&day==29)
			printf("前一天为%d年2月28日后一天为%d年3月1日\n",year,year);
		else if(month==3&&day==1)
			printf("前一天为%d年2月29日后一天为%d年3月2日\n",year,year);
	}
	else if(month==4&&day==1||month==6&&day==1||month==9&&day==1||month==11&&day==1)
			printf("前一天为%d年%d月31日后一天为%d年%d月2日\n",year,month-1,year,month);
	else if(month==4&&day==30||month==6&&day==30||month==9&&day==30||month==11&&day==30)
			printf("前一天为%d年%d月29日后一天为%d年%d月1日\n",year,month,year,month+1);
	else if(month==5&&day==1||month==7&&day==1||month==10&&day==1||month==12&&day==1)
			printf("前一天为%d年%d月30日后一天为%d年%d月2日\n",year,month-1,year,month);
	else if(month==5&&day==31||month==7&&day==31||month==10&&day==31||month==12&&day==31)
			printf("前一天为%d年%d月30日后一天为%d年%d月1日\n",year,month,year,month+1);
	else if(month==1&&day==1)
			printf("前一天为%d年12月31日后一天为%d年1月2日\n",year-1,year);
	else if(month==1&&day==31)
			printf("前一天为%d年1月30日后一天为%d年2月1日\n",year,year);
	else if(month==12&&day==31)
			printf("前一天为%d年12月30日后一天为%d年1月1日\n",year,year+1);
	else
			printf("前一天为%d年%d月%d日后一天为%d年%d月%d日\n",year,month,day-1,year,month,day+1);
	return 0;
}



