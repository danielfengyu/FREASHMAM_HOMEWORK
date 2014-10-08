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
void ClearBinaryTree(SearchBinaryTreeNode*&t)//必须要用引用，否则删除的是其另外开辟的一个空间；其实没有彻底删除
{
	if(t!=NULL)
	{
		ClearBinaryTree(t->leftChild);	
		ClearBinaryTree(t->leftChild);
		delete t;
		t=NULL;
	}
}
bool FindSearchBinaryTree(SearchBinaryTreeNode*t,ElemType &item)//递归查找
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
bool FindSearchBinaryTree1(SearchBinaryTreeNode*t,ElemType &item)//fei递归查找
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
void Insert(SearchBinaryTreeNode*&t,const ElemType &item)//t必须说明为引用
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
	cout<<"输入一个10个元素的数组：";
		for(int i=0;i<10;i++)
		{
			cin>>a[i];
		}
	CreateSearchBinaryTree(t, a, 10);
	PrintBinaryTree(t);
	cout<<endl;
	cout<<"树的深度：";
	cout<<DepthBinaryTree(t)<<endl;
	cout<<"层次遍历：";
	LevelOrder(t);
	cout<<endl;
	cout<<"中序遍历：";
		InOrder(t);
	cout<<endl;
	cout<<"输入一个待查找的数值:";
	cin>>x;
	if(FindSearchBinaryTree(t,x))
		cout<<"查找元素"<<x<<"成功！"<<endl;
	else 
		cout<<"查找元素"<<x<<"失败！"<<endl;
	cout<<"输入一个待插入节点的值：";
	cin>>x;
	Insert1(t,x);
	cout<<"输入一个待删除结点的值：";
	cin>>x;
	if(DeleteSearchBinaryTree(t,x))
		cout<<"删除"<<x<<"成功！"<<endl;
	else
		cout<<"删除"<<x<<"失败！"<<endl;
	cout<<"删除后的树：";
	PrintBinaryTree(t);
	cout<<endl;
	cout<<"层次遍历:";	
	LevelOrder(t);
	cout<<endl;
	cout<<"中序遍历：";
	InOrder(t);
	cout<<endl;
	ClearBinaryTree(t);

}