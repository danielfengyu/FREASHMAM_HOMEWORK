/*�жϹ�ϵR�Ƿ�Ϊ�Է���ϵ���Գƹ�ϵ*/
#include<stdio.h>
#define N 4
int main()
{
	int i,j;
	int f=1,e=1;
	int M[N][N];
	printf("�жϹ�ϵR�Ƿ�Ϊ�Է���ϵ���Գƹ�ϵ\n");
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			scanf("%d",&M[i][j]);
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
				printf("%4d",M[i][j]);
			printf("\n");
		}
		for(i=0;i<N;i++)
		{
			if(M[i][j]!=1)
			{
				e=0;
				break;
			}
		}
		if(e==1)
			for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
				if(M[i][j]!=M[j][i])
				{
					f=0;
					break;
				}
				break;
		}
			else
				f=0;
			if(f == 1)
			printf("��ϵR���Է��ġ��ԳƵ�\n");
			else if(e==0)
				printf("��ϵR�����Է���\n");
			else
				printf("��ϵR���ǶԳƵ�\n");
			return 0;
}