#include<stdio.h>
#define N 10
int main()
{
	char cH[N];
	int number0,number1,number2,number3;
	number0=0;
	number1=0;
	number2=0;
	number3=0;
	int i;
	printf("�����ַ�����:");
	for(i=0;i<N;i++)
		scanf("%c",&cH[i]);
	for(i=0;i<N;i++)
	{
		if(cH[i]>=65&&cH[i]<=90||cH[i]>=97&&cH[i]<=122)
			number1++;
		else if(cH[i]>=48&&cH[i]<=57)
			number1++;
		else if(cH[i]==32)
			number2++;
		else
			number3++;
	}
	printf("��ĸ����%d\n,���ָ���%d\n,�ո����%d\n,�����ַ�%d\n",number0,number1,number2,number3);

	return 0;
}


