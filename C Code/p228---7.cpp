#include<stdio.h>
int main()
{
	char str1[]="father";
	char str2[]="mother";
	char*pc1,*pc2;
	pc1=str1,pc2=str2;
void link(char*pc1,char*pc2);
	link(str1,str2);
	return 0;
} void link(char*pc1,char*pc2)
{ int i,j;
	char str[13];
	for(i=0;i<7;i++)
		str[i]=pc1[i];i=6;
	for(j=0;j<7;j++,i++)
		str[i]=pc2[j];
		for(i=0;i<13;i++)
			printf ("%c",str[i]);
			printf("\n");
}