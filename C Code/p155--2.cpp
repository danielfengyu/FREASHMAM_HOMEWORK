#include<stdio.h>
#define N 5
#define M 5
int main()
{
   int Array1[N],Array2[M],i,j,k,Array3[N+M];
   k=0;
   printf("��������1:");
   for(i=0;i<N;i++)
   scanf("%d",&Array1[i]);
   printf("��������2:");
   for(j=0;j<M;j++)
	   scanf("%d",&Array2[j]);
   for(i=0,j=0;i<N&&j<M;)
	   if(Array1[i]<=Array2[j])
		   Array3[k++]=Array1[i++];
	   else
			Array3[k++]=Array2[j++];
	  if(i==N)/*a��Ԫ�ؿ���*/
	   for(;j<M;)
		   Array3[k++]=Array2[j++];
   else   /*b��Ԫ�ؿ���*/
	   for(;i<N;)
		   Array3[k++]=Array1[i++];
	   printf("�µ�����Ϊ:");
   for(i=0;i<N+M;i++)
     printf("%d ", Array3[i]);
   printf("\n");
   return 0;
}