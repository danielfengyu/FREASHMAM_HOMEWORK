#include<stdio.h>
#define N 5
#define M 5
int main()
{
   int Array1[N],Array2[M],i,j,k,Array3[N+M];
   k=0;
   printf("输入数组1:");
   for(i=0;i<N;i++)
   scanf("%d",&Array1[i]);
   printf("输入数组2:");
   for(j=0;j<M;j++)
	   scanf("%d",&Array2[j]);
   for(i=0,j=0;i<N&&j<M;)
	   if(Array1[i]<=Array2[j])
		   Array3[k++]=Array1[i++];
	   else
			Array3[k++]=Array2[j++];
	  if(i==N)/*a中元素空了*/
	   for(;j<M;)
		   Array3[k++]=Array2[j++];
   else   /*b中元素空了*/
	   for(;i<N;)
		   Array3[k++]=Array1[i++];
	   printf("新的数组为:");
   for(i=0;i<N+M;i++)
     printf("%d ", Array3[i]);
   printf("\n");
   return 0;
}