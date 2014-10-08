#include<iostream.h>
#include<stdlib.h>
#include<strstrea.h>
typedef int VertexType;//定义顶点值的类型
typedef int WeightType;//定义边上权值的类型
const int MaxVertexNum=10;//定义图的最多顶点数
const WeightType MaxValue=1000;//定义无边上的特定权值
typedef VertexType vexlist[MaxVertexNum];//定义vetexlist为存储顶点信息的数组类型
typedef int adjmatrix[MaxVertexNum][MaxVertexNum];//定义adjmtrix为存储邻接矩阵的数组类型
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
	cout<<i<<' ';
	visited[i]=true;
	for(int j=0;j<n;j++)
	if(GA[i][j]!=0 && GA[i][j]!=MaxValue && !visited[j])
		dfsMatrix(GA,j,n,visited);
}//end
void main()
{
	int i,n,k1,k2;
	cout<<"输入待处理图的顶点数：";
	cin>>n;
	cout<<"输入图的有无向有无权选择（0为无非0为有）:";
	cin>>k1>>k2;
	bool *visited=new bool[n];
	adjmatrix ga;
	InitMatrix(ga,k2);
	cout<<"输入图的边集:";
	char *a =new char[100];
	cin>>a;
	CreateMatrix(ga,n,a,k1,k2);
	cout<<"按图的邻接矩阵得到的深度优先遍历序列:"<<endl;
	for(i=0;i<n;i++)visited[i]=false;
	dfsMatrix(ga,0,n,visited);
	cout<<endl;
	cout<<"按图的邻接矩阵得到德尔广度优先遍历序列:"<<endl;	
	for(i=0;i<n;i++)visited[i]=false;
	bfsMatrix(ga,0,n,visited);
	cout<<endl;
	PrintMatrix(ga,n,k1,k2);
}