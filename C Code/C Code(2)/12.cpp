/*��ѿ����˻�*/
#include<stdio.h>
#define M 5
#define N 5
int main()
{
	int i,j;
	int A[N],B[M],C[N+M];
	printf("��֤�ѿ����˻�");
	printf("C=AxB\n");
	printf("����һ������:");
	for(i=0;i<N;i++)
		scanf("%d",&A[i]);
	printf("������һ������:");
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
	printf("C={");
	{
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			printf("<%d,%d>,",A[i],B[j]);
	}
	printf("}\n");
	return 0;

}