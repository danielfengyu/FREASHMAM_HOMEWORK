#include<iostream>
using namespace std;
typedef int ElemType;
struct SearchBinaryTreeNode{
	ElemType data;
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
				cout<<"栈空间太小，请增加Maxsize的值!"<<endl;
				exit(1);
			}
			top++;
			s[top]=p;
			k=1;
			break;
		case ')':
			if(top==-1)
			{
				cout<<"二叉树广义表字符串错！"<<endl;
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
bool FindBinaryTree(SearchBinaryTreeNode*t,ElemType &x)
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
SertchBinaryTreeNode*CreateHuffman(ElemType a[],int n)
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
	for(i=0;i<n;i++)
	{
		int k1=-1;
	}
}