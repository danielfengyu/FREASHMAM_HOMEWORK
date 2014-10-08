#include<iostream>
using namespace std;

struct tree
{
	int data;
	tree *left;
	tree *right;
};

tree *root=NULL;
tree *pTemp=NULL;

int count_node(tree *root)
{
	static int sum=0;
	if(NULL!=root)
	{
		++sum;
	//	cout<<root->data<<" ";

		count_node(root->left);
		count_node(root->right);
	}
	return sum;
}

void main()
{
	root=new tree;
	tree *a=new tree;
	tree *b=new tree;
	tree *a1=new tree;
	tree *a2=new tree;
	tree *b1=new tree;
	tree *b2=new tree;

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

	b->left=b1;
	b->right=b2;

	a1->left=NULL;
	a1->right=NULL;

	a2->left=NULL;
	a2->right=NULL;

	b1->left=NULL;
	b1->right=NULL;

	b2->left=NULL;
	b2->right=NULL;

	cout<<count_node(root)<<endl;
}

