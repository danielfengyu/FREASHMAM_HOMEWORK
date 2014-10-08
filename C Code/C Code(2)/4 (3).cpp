#include<iostream.h>
#include<stdlib.h>
#include<strstrea.h>
#include<string.h>
typedef int VertexType;
typedef int WeightType;
const int MaxVertexNum=10;
const WeightType MaxValue=1000;
typedef int adjmatrix[MaxVertexNum][MaxVertexNum];
typedef VertexType vexlist[MaxVertexNum];
void Floyed(adjmatrix GA,adjmatrix A,int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			A[i][j]=GA[i][j];
		for(k=0;k<n;k++)
			for(i=0;i<n;i++)
				for(j=0;j<n;j++)
				{
					if(i==k || j==k || i==j)continue;
					if(A[i][k]+A[k][j]<A[i][j])
						A[i][j]=A[i][k]+A[k][j];
				}
}
void InitMatrix(adjmatrix GA,int k)
{
	int i,j;
	for(i=0;i<MaxVertexNum;i++)
		for(j=0;j<MaxVertexNum;j++)
			if(i==j)GA[i][j]=0;
			else if (k)GA[i][j]=MaxValue;
			else GA[i][j]=0;
}
void CreateMatrix(adjmatrix GA,int n,char *s,int k1,int k2)
{
	istrstream sin(s);
	char c1,c2,c3;
	int i,j;
	WeightType w;
	sin>>c1;
	if(k1==0 && k2==0)
		do{
			sin>>c1>>i>>c2>>j>>c3;
			GA[i][j]=GA[j][i]=1;
			sin>>c1;
			if(c1==')')break;
		}while(1);
		else if(k1==0 && k2!=0)
		do{
				sin>>c1>>i>>c2>>j>>c3>>w;
			GA[i][j]=GA[j][i]=w;
			sin>>c1;
			if(c1==')')break;
		}while(1);
		else if(k1!=0 && k2==0)
			do{
				sin>>c1>>i>>c2>>j>>c3;
			GA[i][j]=1;
			sin>>c1;
			if(c1==')')break;
		}while(1);
			else if(k1!=0 && k2!=0)
			do{
				sin>>c1>>i>>c2>>j>>c3>>w;
			GA[i][j]=w;
			sin>>c1;
			if(c1==')')break;
		}while(1);
}
void PrintMatrix(adjmatrix GA,int n,int k1,int k2)
{
	int i,j;
	cout<<"V={";
	for(i=0;i<n-1;i++)cout<<i<<',';
	cout<<n-1<<'}'<<endl;
	cout<<"E={";
	if(k2==0){
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(GA[i][j]==1)
					if(k1==0){
						if(i<j)
							cout<<'('<<i<<','<<j<<')'<<',';
					}
					else
						cout<<'<'<<i<<','<<j<<'>'<<',';
	}
	else{
			for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(GA[i][j]!=0 && GA[i][j]!=MaxValue)
					if(k1==0){
						if(i<j)
							cout<<'('<<i<<','<<j<<')'<<GA[i][j]<<',';
					}
					else
						cout<<'<'<<i<<','<<j<<'>'<<GA[i][j]<<',';
	}
	cout<<'}'<<endl;

}
void bfsMatrix(adjmatrix GA,int i,int n,bool *visited)
{
	const int MaxSize=30;
	int queue[MaxSize]={0};
	int front=0,rear=0;
	cout<<i<<',';
	visited[i]=true;
	queue[++rear]=i;
	while(front!=rear)
	{
		front = (front+1)%MaxSize;
		int k=queue[front];
		for(int j=0;j<n;j++)
		{
			if(GA[k][j]!=0 && GA[k][j]!=MaxValue && !visited[j])
			{
				cout<<j<<' ';
				visited[j]=true;
				rear=(rear+1)%MaxSize;
				queue[rear]=j;

			}//if end
		}//for end
	}//while end
}//end
void dfsMatrix(adjmatrix GA,int i,int n,bool *visited)
{
	cout<<i<<',';
	visited[i]=true;
	for(int j=0;j<n;j++)
	if(GA[i][j]!=0 && GA[i][j]!=MaxValue && !visited[j])
		dfsMatrix(GA,j,n,visited);
}//end
void main()
{
	int n,k1,k2;
	cout<<"输入待处理的图像顶点:";
	cin>>n;
	cout<<"输入图的有无向和有无权，选择（0为无，非0为有）：";
	cin>>k1>>k2;
	adjmatrix ga;
	InitMatrix(ga,k2);
	cout<<"输入图像的边集:"<<endl;
	char * a=new char[100];
	strcpy(a,"{<0,1>1,<0,3>4,<1,2>9,<1,3>2,<2,0>3,<2,1>5,}");
	strcat(a,"{<2,3>8,<3,2>6,}");
	CreateMatrix(ga,n,a,k1,k2);
	cout<<"以二元组形式输出邻接矩阵ga:"<<endl;
	PrintMatrix(ga,n,k1,k2);
	adjmatrix gb;
	InitMatrix(gb,k2);
	Floyed(ga,gb,n);
	cout<<"以二元组的形式输出邻接矩阵:"<<endl;
	PrintMatrix(gb,n,k1,k2);
}
