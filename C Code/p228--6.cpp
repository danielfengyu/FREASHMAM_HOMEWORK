#include<stdio.h>
int main ()
{
	char cArr1[20];
	char cArr2[10];
	char * strc(char *pc1, char *pc2);
	char*pcarr2;
	pcarr2=cArr2;
	
	pcarr2="father";
	strc(cArr1,pcarr2);
	return 0;
}
char * strc(char * pc1,char * pc2)
{
	int i=0;
	while(pc2[i]!='\0')
	{
		pc1[i]=pc2[i];
		i++;
	}
	pc1[i]='\0';
	puts(pc1);
	return pc1;
}
