#include<stdio.h>
int main()
{
	int a,b,c,d;
	int number;
	printf("输入一个数(0--10000):");
	scanf("%d",&number);
	if(number<0||number>10000)
	{	
		printf("输入错误\n");
	}
	else if(number==10000)
	{	
		printf("一万\n");
	}
	else if(number==0)
		printf("零\n");
	else if(number<10000)
	{
	a=number/1000;
	b=number/100%10;
	c=number/10%10;
	d=number%10;
	
	switch(a)
	{
	case 0:
		printf(" ");break;
	case 1:
		printf("一千");break;
	case 2:
		printf("两千");break;
	case 3:
		printf("三千");break;
	case 4:
		printf("四千");break;
	case 5:
		printf("五千");break;
	case 6:
		printf("六千");break;
	case 7:
	    printf("七千");break;
	case 8:		
		printf("八千");break;
	case 9:
		printf("九千");break;
	}
switch(b)
	{
	case 0:
		printf(" ");break;
	case 1:
		printf("一百");break;
	case 2:
		printf("两百");break;
	case 3:
		printf("三百");break;
	case 4:
		printf("四百");break;
	case 5:
		printf("五百");break;
	case 6:
	    printf("六百");break;
	case 7:		
		printf("七百");break;
	case 8:
		printf("八百");break;
	case 9:
		printf("九百");break;
	}
switch(c)
	{
	case 0:
		printf(" ");break;
	case 1:
		printf("一十");break;
	case 2:
		printf("二十");break;
	case 3:
		printf("三十");break;
	case 4:
		printf("四十");break;
	case 5:
		printf("五十");break;
	case 6:
	    printf("六十");break;
	case 7:		
		printf("七十");break;
	case 8:
		printf("八十");break;
	case 9:
		printf("九十");break;
	}
switch(d)
	{
	case 0:
		printf(" ");break;
	case 1:
		printf("一\n");break;
	case 2:
		printf("二\n");break;
	case 3:
		printf("三\n");break;
	case 4:
		printf("四\n");break;
	case 5:
		printf("五\n");break;
	case 6:
	    printf("六\n");break;
	case 7:		
		printf("七\n");break;
	case 8:
		printf("八\n");break;
	case 9:
		printf("九\n");break;
	}
	}
return 0;
}
