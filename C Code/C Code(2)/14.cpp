/*判断R是否为等价关系*/
#include<stdio.h>
#include<string.h>
#define N 4
int M[N][N];
int p13(int M[N][N]);
int p14(int M[N][N]);
int main()
{
	int i,j,f;
	printf("判断R是否为等价关系\n");
	printf("输入元素为1或0的二维数组:");
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
			printf("关系R不是等价关系\n");
			goto end;
		}
		printf("关系R是等价关系\n");
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
			printf("关系R是自反的、对称的\n");
		else if(e == 0)
			printf("关系R不是自反的\n");
		else
			printf("关系R不是对称的\n");
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
					printf("关系R不是可传递的\n");
					goto end;
				}
				f=1;
				printf("关系R是可传递的\n");
end:
				return f;
}