#include<iostream>
#include<stack>
using namespace std;

struct tree
{
	int data;
	tree*left;
	tree*right;
};

tree*root=NULL;

void root_left_right(tree* root)//前序遍历
{
	stack<tree*>s;
	while((NULL!=root)||!s.empty())
	{
		if(NULL!=root)
		{
			cout<<root->data<<" ";
			s.push(root);
			root=root->left;
		}
		else
		{
			root=s.top();
			s.pop();
			root=root->right;
		}
	}
}

void left_root_right(tree* root)//中序遍历
{
	stack<tree*>s;
	while((NULL!=root)||!s.empty())
	{
		if(NULL!=root)
		{
			s.push(root);
			root=root->left;
		}
		else
		{
			root=s.top();
			cout<<root->data<<" ";
			s.pop();
			root=root->right;
		}
	}
}

int main()
{
	root=new tree;
	tree*a=new tree;
	tree*b=new tree;
	tree*a1=new tree;
	tree*a2=new tree;
	tree*b1=new tree;
	tree*b2=new tree;
	
	root->data=100;
	a->data=200;
	b->data=300;
	a1->data=400;
	a2->data=500;
	b1->data=600;
	b2->data=700;
	
	root->left=a;
	root->right=b;
	
	a->left=a1;
	a->right=a2;
	//	a->right=NULL;

	
	b->left=b1;
	b->right=b2;
	//	b->right=NULL;

	
	a1->left=NULL;
	a1->right=NULL;
	
	b1->left=NULL;
	b1->right=NULL;
	
	b2->left=NULL;
	b2->right=NULL;
	
	a2->left=NULL;
	a2->right=NULL;
	cout<<"前序遍历：";
	root_left_right(root);
	cout<<endl;
	cout<<"中序遍历：";
	left_root_right(root);
	cout<<endl;
	
	return 0;
}

