#include<stdio.h>
#define N 3
int main()
{
	int i,j,row,col,col_flag,max,Arr[N][N];
	printf("����һ����ά����:");
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			scanf("%d",&Arr[i][j]);
    for(row=0;row<N;row++)
	{
		max=Arr[row][0];
		col_flag=0;
        for(col=1;col<N;col++)
			if(Arr[row][col]>max)
			{
			    max=Arr[row][col];
				col_flag=col;
			}
		for(i=0;i<N;i++)
		{
		    if(Arr[i][col_flag]<max)
			break;
		}
        if(i==N)
			printf("���㣺%d����%d�У���%d�С�\n",Arr[row][col_flag],row+1,col_flag+1);
		
	} 
}