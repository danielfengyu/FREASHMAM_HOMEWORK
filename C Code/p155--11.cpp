#include<stdio.h>
int main()
{
    int  array[3][3],Array[3],i,j;
	printf("����һ����ά����:");
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
       printf("��%d����%d��ż��\n",i+1,Array[i]);  
    return 0;
}