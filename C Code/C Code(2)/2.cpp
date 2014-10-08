#include<stack>
#include<iostream>
using namespace std;

struct binTree
{
	int data;
	binTree *lchild;
	binTree *rchild;
};

binTree *root=NULL;

binTree *search(binTree*root,const int key)
{
	stack<binTree*>s;
	while(NULL!=root || !s.empty())
	{
		if(NULL!=root)
		{
			s.push(root);
			root=root->lchild;
		}
		else
		{
			root=s.top();
			s.pop();
			if(key==root->data)
				return root;
			root=root->rchild;
		}
	}
	return root;
}

int main()
{
	root=new binTree;
	root->data=100;
	
	binTree *a=new binTree;
	binTree *b=new binTree;
	binTree *a1=new binTree;
	binTree *a2=new binTree;
	binTree *b1=new binTree;
	binTree *b2=new binTree;
	
	a->data=200;
	b->data=300;
	a1->data=400;
	a2->data=500;
	b1->data=600;
	b2->data=700;
	
	root->lchild=a;
	root->rchild=b;
	
	a->lchild=a1;
	a->rchild=a2;
	
	b->lchild=b1;
	b->rchild=b2;
	
	a1->lchild=NULL;
	a1->rchild=NULL;
	
	a2->lchild=NULL;
	a2->rchild=NULL;
	
	b1->lchild=NULL;
	b1->rchild=NULL;
	
	b2->lchild=NULL;
	b2->rchild=NULL;
	
	binTree *pTemp=NULL;
	int n;
	cout<<"输入要查找的数：";
	cin>>n;
	pTemp=search(root,n);
	if(NULL==pTemp)
		cout<<"not find"<<endl;
	else
		cout<<pTemp->data<<endl;

	pTemp=search(root,76);
	if(NULL==pTemp)
		cout<<"not find"<<endl;
	else
		cout<<pTemp->data<<endl;

	return 0;
}
