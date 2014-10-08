#include<stdio.h>
#define N 5
#define M 5
int main()
{
	int i,j,k;
	int A[N],B[M],C[N+M];
	printf("验证差集");
	printf("C=A-B\n");
	printf("输入集合A:");
	for(i=0;i<N;i++)
		scanf("%d",&A[i]);
	printf("输入集合B:");
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
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(A[i] == B[j])
				break;
		}
		if(j == M)
		{
			C[k]=A[i];
			k++;
		}
	}
	printf("C={");
	for(i=0;i<k;i++)
		printf("%4d",C[i]);
	printf("}\n");
	return 0;
}