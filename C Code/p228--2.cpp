#include<stdio.h>
int *max(int array[],int n);
int *max(int array1[],int n)
{
	int i,temp;
	for(i=1;i<n;i++)
	{
		if(array1[0]>array1[i])
		{
			temp=array1[i];
			array1[i]=array1[0];
			array1[0]=temp;
		}
	}
		return &array1[0];
	
}
int main()
{
	int m;
	int array[5]={1,2,3,4,5,};
	m=*max(array,5);
	printf("%d\n",m);
	return 0;
}