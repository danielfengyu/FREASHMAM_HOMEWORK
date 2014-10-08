#include<stdio.h>
#define N 5
int main()
{
	int M,H,i;
	int Array[N];
	int add(int Array1[5],int M);
	printf("输入数组:");
	for(i=0;i<N;i++)
	scanf("%d",&Array[i]);
	H=add(Array,5);
	printf("数组和为:%d\n",H);
	return 0;


}
int add(int Array1[],int M)
{
	int i,sum;
	i=M;
	if(i>1)
		sum=Array1[M-1]+add(Array1,M-1);
	else
		sum=Array1[0];
	return sum;
}



