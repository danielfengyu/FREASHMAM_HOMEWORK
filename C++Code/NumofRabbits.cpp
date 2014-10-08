#include<stdio.h>
int main()
{
	long f1,f2;
	f1=f2=1;
	for(int i=1;i<=10;i++)
	{
		printf("%12ld\t%12ld",f1,f2);
		if(i%4==0)
			printf("\n");
		f1=f1+f2;
		f2=f1+f2;
	}
	//system("pause");
	return 0;
}