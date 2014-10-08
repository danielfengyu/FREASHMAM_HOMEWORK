#include<iostream.h>
#include<stdlib.h>
#include<strstrea.h>
typedef int VertexType;
typedef int WeightType;
const int MaxedgeNum=100;
const int MaxValue=1000;
const int MaxVertexNum=10;
struct edge{
	int fromvex;
	int endvex;
	WeightType weight;
};
typedef edge edgeset[MaxedgeNum];
typedef int adjmatrix[MaxVertexNum][MaxVertexNum];
void Prim(adjmatrix GA,edgeset CT,int n)
{
	int i,j,k,min,t,m,w;
	for(i=0;i<n-1;i++)
	{
		CT[i].fromvex=0;
		CT[i].endvex=i+1;
		CT[i].weight=GA[0][i+1];
	}
	for(k=1;k<n;k++)
	{
		min=MaxValue;
		m=k-1;
		for(j=k-1;j<n-1;j++)
			if(CT[j].weight<min)
			{
				min=CT[j].weight;
				m=j;
			}
			edge temp=CT[k-1];
			CT[k-1]=CT[m];
			CT[m]=temp;
			j=CT[k-1].endvex;
			for(i=k;i<n-1;i++)
			{
				t=CT[i].endvex;
				w=GA[j][t];
				if(w<CT[i].weight){
					CT[i].weight=w;
					CT[i].fromvex=j;
				}
			}
	}
}
void Kruskal(edgeset GE,edgeset CT,int n)
{
	int i,j;
	bool **s = new bool*[n];
	for(i=0;i<n;i++)
		s[i]=new bool[n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(i==j)s[i][j]=true;
			else s[i][j]=false;
	}
	int k=1;
	int d=0;
	int m1,m2;
	while(k<n)
	{
		for(i=0;i<n;i++)
		{
			if(s[i][GE[d].fromvex]==true)m1=i;
			if(s[i][GE[d].endvex]==true )m2=i;
		}
		if(m1!=m2)
		{
		
			CT[k-1]=GE[d];
			k++;
			for(j=0;j<n;j++)
			{
				s[m1][j]=s[m1][j] ||s[m2][j];
				s[m2][j]=false;
			}
		}
		d++;
	}
	for(i=0;i<n;i++)delete []s[i];
	delete []s;
}
void InitArray(edgeset GE)
{
	for(int i=0;i<MaxedgeNum;i++)
	{
		GE[i].fromvex=GE[i].endvex=-1;
		GE[i].weight = MaxValue;
	}
}
void CreateArray(edgeset GE,int n,char *s,int k)
{
	istrstream sin(s);
	char c1,c2,c3;
	int i,j,c;
	WeightType w;
	sin>>c1;
	if(k==0)
	{
		do{
			sin>>c1>>i>>c2>>j>>c3;
			GE[c].fromvex=i;
			GE[c].endvex=j;
			GE[c].weight=1;
			c++;
			sin>>c1;

		}while(c1==',');
	}
	else{
		do{
			sin>>c1>>i>>c2>>j>>c3>>w;
			GE[c].fromvex=i;
			GE[c].endvex=j;
			GE[c].weight=w;
			c++;
			sin>>c1;
		}while(c1==',');
	}
}
void PrintArray(edgeset GE,int n,int k1,int k2)
{
	int i;
	cout<<"V={";
	for(i=0;i<n-1;i++)cout<<i<<',';
	cout<<n-1<<'}'<<endl;
	cout<<"E={";
	i=-1;
	while(GE[++i].fromvex!=-1){
		if(k2==0){
			if(k1==0)
				cout<<'('<<GE[i].fromvex<<','<<GE[i].endvex<<')'<<',';
			else
				cout<<'<'<<GE[i].fromvex<<','<<GE[i].endvex<<'>'<<',';
		}
		else{
			if(k1==0){
				cout<<'('<<GE[i].fromvex<<','<<GE[i].endvex;
				cout<<')'<<GE[i].weight<<',';
			}
			else{
				cout<<'<'<<GE[i].fromvex<<','<<GE[i].endvex<<'>'<<GE[i].weight<<',';
			}
		}
	}
	cout<<'}'<<endl;
}
void Dijkstra(adjmatrix GA,int dist[],edgenode *path[],int i,int n)
{
	int j,k,w,m;
	bool *s=new bool[n];
	for(j=0;j<n;j++)
	{
		if(j==i)s[j]=true;
		else
			s[j]=false;
		dist[j]=GA[i][j];
		if(dist[j]<MaxValue && j!=i)
		{
			edgenode *p1=new edgenode;
			edgenode *p2=new edgenode;
			p1->adjvex =i;p2->adjvex =j;p2->next =NULL;
			p1->next =p2;path[j]=p1;
		}
		else
			path[j]=NULL;
	}
	for(k=1;k<n-2;k++)
	{
		w=MaxValue;
		m=i;
		for(j=0;j<n;j++)
			if(s[j]==false && dist[j]<w)
			{
				w=dist[j];
				m=j;
			}
			if(m!=i)s[m]=true;
			else break;
			for(j=0;j<n;j++)
				if(s[j]==false && dist[m]+GA[m][j]<dist[j])
				{
					dist[j]=dist[m]+GA[m][j];
					PATH(path,m,j);
				}
	}
}
void PATH(edgenode *path,int m,int j)
{
	edgenode*p,*q,*s;
	p=path[j];
	while(p!=NULL)
	{
		path[j]=p->next ;
		delete p;
		p=path[j];
	}
	p=path[m];
	while(p!=NULL)
	{
		q=new edgenode;
		q->adjvex=p->adjvex ;
		if(path[j]==NULL)path[j]=q;
		else
			s->next=q;
		s=q;
		p=p->next ;
	}
	q=new edgenode;
	q->adjvex=j;
	q->next=NULL;
	s->next=q;
}
void main()
{

}