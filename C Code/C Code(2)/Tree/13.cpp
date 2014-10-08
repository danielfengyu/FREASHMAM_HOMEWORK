#include<stdio.h>
#include<string.h>
#define N 50
#define M 2*N-1
typedef struct{
	char data[5];
	int weight;
	int parent;
	int leftchild;
	int rightchild;
}HuffmanTreeNode;
typedef struct{
	char cd[N];
	int start;
}HuffmanCode;
void CreateHuffman(HuffmanTreeNode ht[],int n)
{
	int i,k,leftnode,rightnode;
	int min1,min2;
	for(i=0;i<2*n-1;i++)
		ht[i].parent=ht[i].leftchild=ht[i].rightchild=-1;
	for(i=n;i<2*n-1;i++)
	{
		min1=min2=32767;
		leftnode=rightnode=-1;//
		for(k=0;k<i-1;k++)
			if(ht[k].parent==-1)
			{
				if(ht[k].weight<min1)
				{
					min2=min1;
					rightnode=leftnode;
					min1=ht[k].weight;
					leftnode=k;
				}
				else if(ht[k].weight<min2)
				{
					min2=ht[k].weight;
					rightnode=k;
				}
			}
			ht[leftnode].parent=i;
			ht[rightnode].parent=i;
			ht[i].weight=ht[leftnode].weight+ht[rightnode].weight;
			ht[i].leftchild=leftnode;
			ht[i].rightchild=rightnode;
	}
}
void CreateHuffmanCode(HuffmanTreeNode ht[],HuffmanCode hcd[],int n)
{
	int i,f,c;
	HuffmanCode hc;
	for(i=0;i<n;i++)
	{
		hc.start=n;
		c=i;
		f=ht[i].parent;
		while(f!=-1)
		{
			if(ht[f].leftchild==c)
			{
				hc.cd[hc.start--]='0';
			}
			else
			{
				hc.cd[hc.start--]='1';	
			}
			c=f;
			f=ht[f].parent;
		}
		hc.start++;
		hcd[i]=hc;
	}
}
void DisplyHuffmanCode(HuffmanTreeNode ht[],HuffmanCode hcd[],int n)
{
	int i,k;
	int sum=0,m=0,j;
	printf("输出huffman编码：\n");
	for(i=0;i<n;i++)
	{
		j=0;
		printf("  %s:\t",ht[i].data);
		for(k=hcd[i].start;k<=n;k++)
		{
			printf("%c",hcd[i].cd[k]);
			j++;
		}
		m+=ht[i].weight;
		sum+=ht[i].weight*j;
		printf("\n");
	}
	printf("\n平均长度=%g\n",1.0*sum/m);
}
void main(){
	int n=15,i;
	char *str[]={"The","of","a","to","and","in","that","he","is","at","on","for","His","are","be"};
	int fnum[]={1192,667,541,518,462,450,242,195,190,181,174,157,138,124,123};
	HuffmanTreeNode ht[M];
	HuffmanCode hcd[N];
	for(i=0;i<n;i++)
	{
		strcpy(ht[i].data,str[i]);
		ht[i].weight =fnum[i];

	}
	printf("\n");
	CreateHuffman( ht,n);
	CreateHuffmanCode(ht,hcd,n);
	DisplyHuffmanCode(ht, hcd,n);
	printf("\n");
}
