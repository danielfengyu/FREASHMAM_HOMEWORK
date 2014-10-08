#include<stdio.h>
int main()
{
	char c;
	printf("ÊäÈë×Ö·û:\n");
		scanf("%c",&c);
	if(c>=48&&c<=57)
		printf("Êý×Ö\n");
	else if(c>=65&&c<=90)
		printf("´óÐ´×ÖÄ¸\n");
	else if(c>=97&&c<=122)
		printf("Ð¡Ð´×ÖÄ¸\n");
	else
		printf("ÆäËû×Ö·û\n");
	return 0;
}
