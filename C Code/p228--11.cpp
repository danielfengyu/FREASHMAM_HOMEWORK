#include<stdio.h>
#include<string.h>
int main()
{
	char array[10][50];
	char ArrayTemp[50];
	int i,min,j;
	printf("输入一个二维字符数组:");
	for(i=0;i<10;i++)
		scanf("%s",&array[i]);
	for(i=0;i<9;i++)
	{
		min=i;
		for(j=i+1;j<10;j++)
		{
			if(strcmp(array[min],array[j])>0)
				min=j;
		}
		if(i!=min)
		{
			strcpy(ArrayTemp,array[i]);
			strcpy(array[i],array[min]);
			strcpy(array[min],ArrayTemp);
		}
	}
	for(i=0;i<10;i++)
		puts(array[i]);
		return 0;
}


