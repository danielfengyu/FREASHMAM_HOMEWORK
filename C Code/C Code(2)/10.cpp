/*���㽻��*/
#include<stdio.h>
#define M 5
#define N 5
int main()
{
	int i,j,k;
	int A[N],B[M],C[N+M];
	printf("��֤����");
	printf("C=AnB\n");
	printf("���뼯��A:");
	for(i=0;i<N;i++)
		scanf("%d",&A[i]);
	printf("���뼯��B:");
	for(i=0;i<M;i++)
		scanf("%d",&B[i]);
	printf("A[N]={");
	for(i=0;i<N;i++)
		printf("%4d",A[i]);
	printf("}\n");
	printf("B[M]={");
	for(i=0;i<M;i++)
		printf("%4d",B[i]);
	printf("}\n");
	k=0;
	for(j=0;j<M;j++)
	{
		for(i=0;i<N;i++)
		{
			if(B[j] == A[i])
			{
				C[k]=B[j];
				k++;
				break;
			}

		}
	}
	printf("C={");
	for(i=0;i<k;i++)
		printf("%4d",C[i]);
	printf("}\n");
	return 0;
}		



