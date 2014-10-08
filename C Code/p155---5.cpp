#include<stdio.h>
int main()
{
	int Number[97];
	int i,j;
	for(i=3;i<100;i++)
	{
		Number[i]=i+1;
		for(j=2;j<Number[i];j++)
		{
			if(Number[i]%i==0)  goto Lable;
		}
			printf("%d\n",Number[i]);
		
Lable:
		;
	}
	return 0;
}

