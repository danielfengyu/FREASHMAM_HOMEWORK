#include<stdio.h>
int main()
{
	int a,b,c,d;
	int number;
	printf("����һ����(0--10000):");
	scanf("%d",&number);
	if(number<0||number>10000)
	{	
		printf("�������\n");
	}
	else if(number==10000)
	{	
		printf("һ��\n");
	}
	else if(number==0)
		printf("��\n");
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
		printf("һǧ");break;
	case 2:
		printf("��ǧ");break;
	case 3:
		printf("��ǧ");break;
	case 4:
		printf("��ǧ");break;
	case 5:
		printf("��ǧ");break;
	case 6:
		printf("��ǧ");break;
	case 7:
	    printf("��ǧ");break;
	case 8:		
		printf("��ǧ");break;
	case 9:
		printf("��ǧ");break;
	}
switch(b)
	{
	case 0:
		printf(" ");break;
	case 1:
		printf("һ��");break;
	case 2:
		printf("����");break;
	case 3:
		printf("����");break;
	case 4:
		printf("�İ�");break;
	case 5:
		printf("���");break;
	case 6:
	    printf("����");break;
	case 7:		
		printf("�߰�");break;
	case 8:
		printf("�˰�");break;
	case 9:
		printf("�Ű�");break;
	}
switch(c)
	{
	case 0:
		printf(" ");break;
	case 1:
		printf("һʮ");break;
	case 2:
		printf("��ʮ");break;
	case 3:
		printf("��ʮ");break;
	case 4:
		printf("��ʮ");break;
	case 5:
		printf("��ʮ");break;
	case 6:
	    printf("��ʮ");break;
	case 7:		
		printf("��ʮ");break;
	case 8:
		printf("��ʮ");break;
	case 9:
		printf("��ʮ");break;
	}
switch(d)
	{
	case 0:
		printf(" ");break;
	case 1:
		printf("һ\n");break;
	case 2:
		printf("��\n");break;
	case 3:
		printf("��\n");break;
	case 4:
		printf("��\n");break;
	case 5:
		printf("��\n");break;
	case 6:
	    printf("��\n");break;
	case 7:		
		printf("��\n");break;
	case 8:
		printf("��\n");break;
	case 9:
		printf("��\n");break;
	}
	}
return 0;
}
