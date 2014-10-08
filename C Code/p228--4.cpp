#include<stdio.h>
#define N 5
int main()
{
	int i,j,n;
	float score[N][3];
	float courseAverage[N];
	float average(float(*p)[3]);
	printf("输入每个人的成绩:");
	for(i=0;i<N;i++)
		for(j=0;j<3;j++)
		scanf("%f",&score[i][j]);
		for(i=0;i<N;i++)
		{
			courseAverage[i]=average(score+i);
		printf("%f\t",courseAverage[i]);
		}
		for(i=0;i<N-1;i++)
		for(j=0;j<N-i-1;j++)
			if(courseAverage[j]>courseAverage[j+1])
			{
				n=courseAverage[j];
				courseAverage[j]=courseAverage[j+1];
				courseAverage[j+1]=n;
			}
			for(i=0;i<N;i++)
			printf("%d",courseAverage[i]);

		return 0;
}
float average(float(*p)[3])
{
	int i;
	float sum=0;
	for(i=0;i<3;i++)
		sum+=*(*p+i);
		return sum/3.0;
}





