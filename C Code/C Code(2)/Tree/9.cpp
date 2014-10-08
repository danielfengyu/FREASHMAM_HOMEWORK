#include<iostream.h>
#include<stdlib.h>
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
bool FindSearchBinaryTree(SearchBinaryTreeNode*t,ElemType &item)//�ݹ����
{
	if(t==NULL)
		return false;
	else
	{
		if(item==t->data)
		{
			item=t->data;
			return true;
		}
		else if(item<t->data)
			return FindSearchBinaryTree(t->leftChild,item);
		else
			return FindSearchBinaryTree(t->rightChild,item);
	}
}
bool FindSearchBinaryTree1(SearchBinaryTreeNode*t,ElemType &item)//fei�ݹ����
{
	while(t!=NULL)
	{
		if(item==t->data)
		{
			item=t->data;
			return true;
		}
		else if(item<t->data)
			t=t->leftChild;
		else
			t=t->leftChild;
	}
	return false;
}
void Insert(SearchBinaryTreeNode*&t,const ElemType &item)//t����˵��Ϊ����
{
	if(t==NULL)
	{
		SearchBinaryTreeNode*p=new SearchBinaryTreeNode;
		p->data=item;
		p->leftChild=p->rightChild=NULL;
		t=p;

	}
	else if(item<t->data)
		Insert(t->leftChild,item);
	else
		Insert(t->rightChild,item);
}
void Insert1(SearchBinaryTreeNode*&t,const ElemType &item)
{
	SearchBinaryTreeNode*p=t,*parent=NULL;
	while(p!=NULL)
	{
		parent=p;
		if(item<p->data)
			p=p->leftChild;
		else
			p=p->rightChild;
	}
	SearchBinaryTreeNode*q=new SearchBinaryTreeNode;
	q->data=item;
	q->leftChild=q->rightChild=NULL;
	if(parent==NULL)
		t=q;
	else if(item < parent->data)
		parent->leftChild=q;
	else
		parent->rightChild=q;

}
void CreateSearchBinaryTree(SearchBinaryTreeNode*&t,const ElemType a[],int n)
{
	t=NULL;
	for(int i=0;i<n;i++)
		Insert1(t,a[i]);
}
bool DeleteSearchBinaryTree(SearchBinaryTreeNode*&t,const ElemType &item)
{
	if(t==NULL)
		return false;
	if(item < t->data)
		return DeleteSearchBinaryTree(t->leftChild,item);
	if(item > t->data)
		return DeleteSearchBinaryTree(t->rightChild,item);
		SearchBinaryTreeNode*temp=t;
	if(t->leftChild==NULL)
		{
			t=t->rightChild;
			delete temp;
			return true;
		}
	else if(t->rightChild ==NULL)
	{
		t=t->leftChild ;
		delete temp;
		return true;
	}
	else
	{
		if(t->leftChild->rightChild==NULL)
		{
			t->data=t->leftChild->data;
			return DeleteSearchBinaryTree(t->leftChild,t->leftChild->data);
		}
		else
		{
			SearchBinaryTreeNode*p1=t,*p2=t->leftChild;
			while(p2->rightChild!=NULL)
			{
				p1=p2;
				p2=p2->rightChild;

			}
			t->data=p2->data;
			return DeleteSearchBinaryTree(p1->rightChild,p2->data);
		}
	}

}
void InOrder(SearchBinaryTreeNode*t)
{
	if(t!=NULL)
	{
		InOrder(t->leftChild );
		cout<<t->data <<' ';
		InOrder(t->rightChild );
	}
}
void main()
{
	ElemType  x;
	SearchBinaryTreeNode*t;
	InitSearchBinaryTree(t);
	ElemType a[10];
	cout<<"����һ��10��Ԫ�ص����飺";
		for(int i=0;i<10;i++)
		{
			cin>>a[i];
		}
	CreateSearchBinaryTree(t, a, 10);
	PrintBinaryTree(t);
	cout<<endl;
	cout<<"������ȣ�";
	cout<<DepthBinaryTree(t)<<endl;
	cout<<"��α�����";
	LevelOrder(t);
	cout<<endl;
	cout<<"���������";
		InOrder(t);
	cout<<endl;
	cout<<"����һ�������ҵ���ֵ:";
	cin>>x;
	if(FindSearchBinaryTree(t,x))
		cout<<"����Ԫ��"<<x<<"�ɹ���"<<endl;
	else 
		cout<<"����Ԫ��"<<x<<"ʧ�ܣ�"<<endl;
	cout<<"����һ��������ڵ��ֵ��";
	cin>>x;
	Insert1(t,x);
	cout<<"����һ����ɾ������ֵ��";
	cin>>x;
	if(DeleteSearchBinaryTree(t,x))
		cout<<"ɾ��"<<x<<"�ɹ���"<<endl;
	else
		cout<<"ɾ��"<<x<<"ʧ�ܣ�"<<endl;
	cout<<"ɾ���������";
	PrintBinaryTree(t);
	cout<<endl;
	cout<<"��α���:";	
	LevelOrder(t);
	cout<<endl;
	cout<<"���������";
	InOrder(t);
	cout<<endl;
	ClearBinaryTree(t);

}