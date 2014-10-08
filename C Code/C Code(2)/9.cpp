/*求并集*/
#include<stdio.h>
#define M 5
#define N 5
int main()
{
	int i,j,k;
	int A[N],B[M],C[M+N];
	printf("验证并集");
	printf("C=AUB\n");
	printf("输入集合A:\n");
	for(i=0;i<N;i++)
		scanf("%d",&A[i]);
	printf("输入集合B:\n");
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
	for(i=0;i<N;i++)
		C[i]=A[i];
	k=N;
	for(j=0;j<M;j++)
	{
		for(i=0;i<N;i++)
		{
			if(B[j] == A[i])
				break;
		}
		if(i == N)
		{
			C[k] = B[j];
			k++;
		}
	}
	printf("C={");
	for(i=0;i<k;i++)
		printf("%4d",C[i]);
	printf("}\n");
	return 0;
}