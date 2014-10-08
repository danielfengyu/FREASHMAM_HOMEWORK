#include<iostream.h>
#include<stdlib.h>
#include<strstrea.h>
const int MaxVertexNum=20;
typedef int WeightType;
struct edgenode{
	int adjvex;
	WeightType weight;
	edgenode *next;

};
typedef edgenode*adjlist[MaxVertexNum];
void InitAdjoin(adjlist GL)
{
	for(int i=0;i<MaxVertexNum;i++)
		GL[i]=NULL;
}
void CreateAdjoin(adjlist GL,int n,char*s,int k1,int k2)
{
	istrstream sin(s);
	char c1,c2,c3;
	int i,j;
	WeightType w;
	edgenode *p;
	sin>>c1;
	if(k2==0)
	{
		do{
			sin>>c1>>i>>c2>>j>>c3;
			p=new edgenode;
			p->adjvex=j;
			p->weight =1;
			p->next=GL[i];
			GL[i]=p;
			if(k1==0)
			{
				p=new edgenode;
				p->adjvex=i;
				p->weight =1;
				p->next=GL[j];
				GL[j]=p;
			}
			sin>>c1;
		}while(c1==',');
		
	}
	else{
		do{
				sin>>c1>>i>>c2>>j>>c3>>w;
				p=new edgenode;
				p->adjvex=j;
				p->weight =w;
				p->next=GL[i];
				GL[i]=p;
				if(k1==0)
				{
					p=new edgenode;
					p->adjvex=i;
					p->weight =w;
					p->next=GL[j];
					GL[j]=p;
				}
				sin>>c1;
			}while(c1==',');
		}

}
void PrintAdjoin(adjlist GL,int n,int k1,int k2)
{
	int i,j;
	edgenode *p;
	cout<<"V={";
	for(i=0;i<n-1;i++)cout<<i<<',';
	cout<<n-1<<'}'<<endl;
	cout<<"E={";
	for(i=0;i<n;i++)
	{
		if(k2==0)
		{
			p=GL[i];
			while(p){
				j=p->adjvex;
				if(k1==0)
				{
					if(i<j)
						cout<<'('<<i<<','<<j<<')'<<',';
				}
				else
					cout<<'<'<<i<<','<<j<<'>'<<',';
				p->next;
			}
		}
		else{
			p=GL[i];
			while(p){
					j=p->adjvex;
					if(k1==0)
					{
						if(i<j)
							cout<<'('<<i<<','<<j<<')'<<p->weight<<',';
					}
					else
						cout<<'<'<<i<<','<<j<<'>'<<p->weight<<',';
					p->next;
			}
		}
	}
	cout<<'}'<<endl;
}
void Toposort(adjlist GL,int v[],int n)
{
	int i,j,k,top,m=0;
	edgenode *p;
	int *d=new int[n];
	for(i=0;i<n;i++)d[i]=0;
	for(i=0;i<n;i++)
	{
		p=GL[i];
		while(p!=NULL)
		{
			j=p->adjvex;
			d[j]++;
			p=p->next;
		}
	}
	top=-1;
	for(i=0;i<n;i++)
		if(d[i]==0){d[i]=top;top=i;}
		while(top!=-1){
			j=top;
			top=d[top];
			cout<<j<<' ';
			m++;
			p=GL[j];
			while(p!=NULL)
			{
				k=p->adjvex;
				d[k]--;
				if(d[k]==0)
				{
					d[k]=top;
					top=k;
				}
				p=p->next;
			}
		}
		cout<<endl;
		if(m<n)cout<<"The network has a cycle!"<<endl;
		delete []d;
}
void Cripath(adjlist GL,int n)
{
	int i,j,k;
	edgenode *p;
	int *v=new int [n];
	int *ve=new int [n];
	int *vl= new int [n];
	Toposort(GL,v,n);
	for(i=0;i<n;i++)ve[i]=0;
	for(i=0;i<n;i++)
	{
		j=v[i];
		p=GL[j];
		while(p!=NULL)
		{
			k=p->adjvex;
			if(ve[k]<ve[j]+p->weight)ve[k]=ve[j]+p->weight;
			p=p->next;

		}
	}
	for(i=0;i<n;i++)vl[i]=ve[n-1];
	for(i=n-1;i>=0;i--)
	{
		j=v[i];
		p=GL[j];
		while(p!=NULL)
		{
			k=p->adjvex;
			if(vl[j]>vl[k]-p->weight)vl[j]=vl[k]-p->weight;
			p=p->next;
		}
	}
	for(i=0;i<n;i++)
	{
		p=GL[i];
		while(p!=NULL)
		{
			j=p->adjvex;
			cout<<'<'<<i<<','<<j<<'>';
			cout<<ve[i]<<",";
			cout<<vl[j]-p->weight<<",";
			cout<<vl[j]-p->weight-ve[i]<<endl;
			p=p->next;
		}
	}
}
void main()
{
	int n,k1,k2;
	cout<<"输入待处理图的顶点数：";
	cin>>n;
	cout<<"输入图的有无向和有无权（0为无，非0为有）：";
	cin>>k1>>k2;
	adjlist gl;
	InitAdjoin(gl);
	cout<<"输入图的边集：";
	char *a=new char[100];
	cin>>a;
	CreateAdjoin(gl,n,a,k1,k2);
	Cripath(gl,n);
}