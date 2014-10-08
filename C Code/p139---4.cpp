#include<stdio.h>
#define N 19
int main()
{
	long f0,f1;
	int i;
	for(i=1,f0=0,f1=1;i<N;i++)
	{
		printf("%-10ld%-10ld",f0,f1);
		f0=f0+f1;
		f1=f1+f0;
		if(i%8==0)
			printf("\n");
	}
	return 0;
}

