/*�ж�R�Ƿ�Ϊ�ȼ۹�ϵ*/
#include<stdio.h>
#include<string.h>
#define N 4
int M[N][N];
int p13(int M[N][N]);
int p14(int M[N][N]);
int main()
{
	int i,j,f;
	printf("�ж�R�Ƿ�Ϊ�ȼ۹�ϵ\n");
	printf("����Ԫ��Ϊ1��0�Ķ�ά����:");
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			scanf("%d",&M[i][j]);
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
				printf("%4d",M[i][j]);
			printf("\n");
		}
		f=p13(M);
		if(f == 0)
		{
			printf("��ϵR���ǵȼ۹�ϵ\n");
			goto end;
		}
		printf("��ϵR�ǵȼ۹�ϵ\n");
end:
		return 0;
}
int p13(int M[N][N])
{
	int i,j;
	int f=1,e=1;
	for(i=0;i<N;i++)
	{
		if(M[i][i]!=1)
		{
			e=0;
			break;
		}
	}
	if(e ==1)
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
				if(M[i][j]!=M[j][i])
				{
					f =0;
					break;
				}
				break;
		}
		else
			f=0;
		if(f == 1)
			printf("��ϵR���Է��ġ��ԳƵ�\n");
		else if(e == 0)
			printf("��ϵR�����Է���\n");
		else
			printf("��ϵR���ǶԳƵ�\n");
		return f;
}
int p14(int M[N][N])
{
	int i,j,k;
	int f;
	f=0;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			if(M[i][j]==1)
				continue;
			else
				for(k=0;k<N;k++)
				if(M[i][k]*M[k][i] == 0)
					continue;
				else
				{
					printf("��ϵR���ǿɴ��ݵ�\n");
					goto end;
				}
				f=1;
				printf("��ϵR�ǿɴ��ݵ�\n");
end:
				return f;
}