#include<stdio.h>
int main()
{
    int  array[3][3],Array[3],i,j;
	printf("输入一个二维数组:");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&array[i][j]);
    for(i=0;i<3;i++)
	{  
        Array[i]=0;            
        for(j=0;j<3;j++)
		  if(array[i][j]%2==0)
			  Array[i]++;  
    }  
    for(i=0;i<3;i++)  
       printf("第%d行有%d个偶数\n",i+1,Array[i]);  
    return 0;
}