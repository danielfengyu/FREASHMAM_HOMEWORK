#include<stdio.h>
int main()
{
	char c;
	printf("�����ַ�:\n");
		scanf("%c",&c);
	if(c>=48&&c<=57)
		printf("����\n");
	else if(c>=65&&c<=90)
		printf("��д��ĸ\n");
	else if(c>=97&&c<=122)
		printf("Сд��ĸ\n");
	else
		printf("�����ַ�\n");
	return 0;
}
