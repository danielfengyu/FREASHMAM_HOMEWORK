#include<stdio.h>
#include<string.h>
int main()
{
	int i,m;
	char array[30],temp='\0';
	printf("ÊäÈëÒ»¸ö×Ö·û´®:");
	scanf("%s",array);
	m=strlen(array);
	for(i=0;i<m/2;i++)
	{
		temp=array[i];
		array[i]=array[m-1-i];
		array[m-1-i]=temp;
	}
	puts(array);
	return 0;
}
