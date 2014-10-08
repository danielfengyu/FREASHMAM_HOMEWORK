#include<stdio.h>
int main()
{
	int length;
	char Array[]="mother";
	int strlen(char*pc);
	length=strlen(Array);
	printf("%d\n",length);
	return 0;
}
int strlen(char*pc)
{
	int i=0;
	while(*pc!='\0')
	{
		pc++;
		i++;
	}
		return i;
}
