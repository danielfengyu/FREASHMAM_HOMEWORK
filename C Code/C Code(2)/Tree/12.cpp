#include<iostream.h>
#include<stdlib.h>

typedef int  Elemtype;
struct SearchBinaryTreeNode{
	Elemtype data;
	SearchBinaryTreeNode*leftChild;
	SearchBinaryTreeNode*rightChild;
};
void LevelOrder(SearchBinaryTreeNode*t)
{
	const int MaxSize=30;
	SearchBinaryTreeNode*q[MaxSize];
	int front=0,rear=0;
	SearchBinaryTreeNode*p;
	if(t!=NULL)
	{
		rear=(rear+1)%MaxSize;
		q[rear]=t;

	}
	while(front!=rear)
	{
		front=(front+1)%MaxSize;
		p=q[front];
		cout<<p->data<<' ';
		if(p->leftChild!=NULL)
		{
			rear=(rear+1)%MaxSize;
			q[rear]=p->leftChild;
		}
		if(p->rightChild!=NULL)
		{
			rear=(rear+1)%MaxSize;
			q[rear]=p->rightChild;
		}
	}
}
void InitSearchBinaryTree(SearchBinaryTreeNode*&t)
{
	t=NULL;
}
void CreateBinaryTree(SearchBinaryTreeNode*&t,char*a)
{
	const int MaxSize=30;
	SearchBinaryTreeNode*s[MaxSize];
	int top=-1;
	t=NULL;
	SearchBinaryTreeNode*p;
	int k;
	int i=0;
	while(a[i])
	{
		switch(a[i]){
		case ' ':break;
		case '(':
			if(top==MaxSize-1)
			{
				cout<<"ջ�ռ�̫С��������Maxsize��ֵ!"<<endl;
				exit(1);
			}
			top++;
			s[top]=p;
			k=1;
			break;
		case ')':
			if(top==-1)
			{
				cout<<"������������ַ�����"<<endl;
				exit(1);
			}
			top--;

			break;
		case ',':k=2;break;
		default:
			p=new SearchBinaryTreeNode;
			p->data=a[i];p->leftChild=p->rightChild=NULL;
			if(t==NULL)
				t=p;
			else{
				if(k==1)
					s[top]->leftChild=p;
				else
					s[top]->rightChild=p;
			}
		}
		i++;
	}
}
bool EmptyTree(SearchBinaryTreeNode*t)
{
	if( t=NULL)
		return true;
	else
		return false;
}
int DepthBinaryTree(SearchBinaryTreeNode*t)
{
	if(t==NULL)
	{
		return 0;
	}

	else{
		int depth1=DepthBinaryTree(t->leftChild);
		int depth2=DepthBinaryTree(t->rightChild);
		if(depth1>depth2)
			return depth1+1;
		else
			return depth2+1;
	}
}
bool FindBinaryTree(SearchBinaryTreeNode*t,Elemtype &x)
{
	if(t==NULL)return false;
	else{
		if(t->data==x)
		{
			x=t->data;
			return true;
		}
		else
		{
			if(FindBinaryTree(t->leftChild,x))
				return true;
			if(FindBinaryTree(t->rightChild,x))
				return true;
			return false;
		}
	}
}
void PrintBinaryTree(SearchBinaryTreeNode*t){
	if(t!=NULL)
	{
		cout<<t->data;
		if(t->leftChild!=NULL || t->rightChild!=NULL)
		{
			cout<<'(';
			PrintBinaryTree(t->leftChild);
			if(t->rightChild!=NULL)
				cout<<',';
			PrintBinaryTree(t->rightChild);
			cout<<')';
		}
	}
}
SearchBinaryTreeNode*CreateHuffman(Elemtype a[],int n)
{
	SearchBinaryTreeNode**b,*q;
	b=new SearchBinaryTreeNode*[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		b[i]=new SearchBinaryTreeNode;
		b[i]->data =a[i];
		b[i]->leftChild =b[i]->rightChild =NULL;

	}
	for(i=1;i<n;i++)
	{
		int k1=-1,k2;
		for(j=0;j<n;j++)
		{
			if(b[j]!=NULL && k1==-1){k1=j;continue;}
			if(b[j]!=NULL){k2=j;break;}
		}
		for(j=k2;j<n;j++)
		{
			if(b[j]!=NULL){
				if(b[j]->data<b[k1]->data){k2=k1;k1=j;}
				else if(b[j]->data<b[k2]->data)k2=j;
			}
		}
		q=new SearchBinaryTreeNode;
		q->data=b[k1]->data+b[k2]->data;
		q->leftChild=b[k1];
		q->rightChild=b[k2];
		b[k1]=q;
		b[k2]=NULL;
	}
	delete [] b;
	return q;
}
Elemtype WeightPathLength(SearchBinaryTreeNode*t,int length)
{
	if(t==NULL)return 0;
	else{
		if(t->leftChild==NULL && t->rightChild==NULL){
			return t->data*length;
		}
		else{
			return WeightPathLength(t->leftChild,length+1)+WeightPathLength(t->rightChild,length+1);
		}
	}
}
void HuffmanCoding(SearchBinaryTreeNode*t,int length)
{
	static int a[10];
	if(t!=NULL){
		if(t->leftChild==NULL && t->rightChild==NULL){
			cout<<"���ȨֵΪ"<<t->data<<"�ı��룺";
			for(int i=0;i<length;i++)cout<<a[i]<<' ';
			cout<<endl;
		}
		else{
			a[length]=0;
			HuffmanCoding(t->leftChild, length+1);
			a[length]=1;
			HuffmanCoding(t->rightChild, length+1);
		}
	}
}
void ClearBinaryTree(SearchBinaryTreeNode*&t)//����Ҫ�����ã�����ɾ�����������⿪�ٵ�һ���ռ䣻��ʵû�г���ɾ��
{
	if(t!=NULL)
	{
		ClearBinaryTree(t->leftChild);	
		ClearBinaryTree(t->leftChild);
		delete t;
		t=NULL;
	}
}

void main()
{
	int n,i;
	SearchBinaryTreeNode*t=NULL;
	cout<<"����������huffman���д�ȨҶ�ӽ���Ȩֵn:";
	cin>>n;
	Elemtype *a=new Elemtype[n];
	cout<<"����"<<n<<"������ֵ��ΪȨֵ:";
	for(i=0;i<n;i++)
		cin>>a[i];
	t=CreateHuffman(a,n);
	cout<<"�Թ������ʽ���huffman��:";
	PrintBinaryTree(t);
	cout<<endl;
	cout<<"huffman����Ȩ:";
	cout<<WeightPathLength(t,0)<<endl;
	cout<<"����ÿ��Ҷ�ӽ���huffman����:"<<endl;
	HuffmanCoding(t,0);
	ClearBinaryTree(t);
}
