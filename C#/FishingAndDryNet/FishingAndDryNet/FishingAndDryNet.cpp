// FishingAndDryNet.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

struct time{
int year;
int month;
int day;
time setCurrentTime(int year,int month,int day){	
	time currTime;
	currTime.year=year;
	currTime.month =month;
	currTime.day =day;
	return currTime; 
 }
time setFutureTime(int year,int month,int day){	
	time futrTime;
	futrTime.year=year;
	futrTime.month =month;
	futrTime.day =day;
	return futrTime;
 }
};
int lengthDay()
{
	int days=0,y,m,d;
	int count=0;
	int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	time currTime,futrTime;
	printf("输入年、月、日：");
	scanf("%d-%d-%d",&y,&m,&d);
	currTime.setCurrentTime (y,m,d);
	printf("\n输入年、月、日：");
	scanf("%d-%d-%d",&y,&m,&d);
	futrTime.setFutureTime (y,m,d);
	for(int i=currTime.year ;i<=futrTime.year ;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
			count++;
	}
	days=(futrTime.year -currTime.year )*365+count;
	if((futrTime.year %4==0&&futrTime.year %100!=0)||(futrTime.year %400==0))
	{
		if(futrTime.month <2){
			days=days+futrTime.day;
		}
		else
		{
			for(int i=0;i<futrTime.month-1 ;i++)
			{
				days=days+mon[i];
			}
			days=days+1+futrTime.day;
		}
	}
	else
	{
		if(futrTime.month <2){
			days=days+futrTime.day;
		}
		else
		{
			for(int i=0;i<futrTime.month-1 ;i++)
			{
				days=days+mon[i];
			}
			
		}
	}
	days=days+futrTime.day;
	if((currTime.year %4==0&&currTime.year %100!=0)||(currTime.year %400==0))
	{
		if(currTime.month <2){
			days=days-currTime.day ;
		}
		else
		{
			for(int i=0;i<currTime.month-1 ;i++)
			{
				days=days-mon[i];
			}
			days=days-1-currTime.day;
		}
	}
	else
	{
		if(currTime.month <2){
			days=days-currTime.day;
		}
		else
		{
			for(int i=0;i<currTime.month-1 ;i++)
			{
				days=days-mon[i];
			}
		}
	}
	days=days-currTime.day;
	
	return days;
}


int main()
{
	int days=lengthDay();
	if(days%5==4||days%5==0)
	{
		printf("兄弟，你又在晒网了！");
	}
	else
	{
		printf("兄弟，你又在打渔了！");
	}
		
	
	return 0;
}

