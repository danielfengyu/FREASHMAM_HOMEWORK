#include<iostream>
using namespace std;
void main()
{
	int **array;
	array=new int*[3];
	int i,j,sum;
	int max,min;
	for(i=0;i<3;i++)
		array[i]=new int[3];
	cout<<"输入数组:";
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			cin>>array[i][j];
		sum=0;
		max=array[0][0];
		min=array[0][0];
		for(i=0;i<3;i++)
			for(j=0;j<3;j++)
			{
				
				sum+=array[i][j];
				max=array[0][0];
				if(max<=array[i][j])
					max=array[i][j];
				if(min>=array[i][j])
					min=array[i][j];
			}
			cout<<"和为:"<<sum<<endl;
			cout<<"最大值为:"<<max<<endl;
			cout<<"最小值为:"<<min<<endl;
	
}