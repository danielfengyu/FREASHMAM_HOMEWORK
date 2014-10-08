#include<iostream>
using namespace std;

class BinaryTreeNode{
	friend class BinaryTree;
private:
	int element;
	BinaryTreeNode*leftChild;
	BinaryTreeNode*rightChild;
public:
	BinaryTreeNode(){};
	BinaryTreeNode(const int& ele){
		element=ele;
	}
	BinaryTreeNode(const int&ele,BinaryTreeNode*l,BinaryTreeNode*r){
		element=ele;
		leftChild=l;
		rightChild=r;
	}
	BinaryTreeNode *getLeftChild()const{cout<<leftChild->element<<endl;}
	BinaryTreeNode *getRightChild()const{cout<<leftChild->element<<endl;}
	void setLeftChild(BinaryTreeNode*l){
		element=l->element;
	//root=l;
		leftChild=l->leftChild;
		rightChild=l->rightChild;
	}
	void setRightChild(BinaryTreeNode*r){
		
		//root=r;
		element=r->element ;
		leftChild=r->leftChild;
		rightChild=r->rightChild;
	}
	int getValue()const{return element;};
	void setValue(const int& val){element=val;};
	bool isLeaf()const{
		if(leftChild==NULL&&rightChild==NULL)
			return true;
		else
			return false;
	}
};
class BinaryTree{
	private:
		BinaryTreeNode*root;
	public:
		BinaryTree(){root=NULL;};
		//~BinaryTree();
		bool isEmpty()const{
			return(root!=NULL?false:true);
		}
		int visit(BinaryTreeNode*root){return root->element;}
	int  getRoot()const{return root->element;}	
	int   getprent(BinaryTreeNode*current)const;
		int  getLeftSibling(BinaryTreeNode* current)const;
		int  getRightSibling(BinaryTreeNode* current)const;
		void breadthFirstOrder(BinaryTreeNode*root);
		void preOrder(BinaryTreeNode*root){
			if(root!=NULL)
			{
				visit(root);
				preOrder(root->leftChild);
				preOrder(root->rightChild);
			}
		}
		void inOrder(BinaryTreeNode*root){
			if(root!=NULL)
			{
			
				preOrder(root->leftChild);	
				visit(root);
				preOrder(root->rightChild);
			}
		}
		void postOrder(BinaryTreeNode*root){
				if(root!=NULL)
			{
			
				preOrder(root->leftChild);	
				
				preOrder(root->rightChild);
				visit(root);
			}
		}
		void levelOrder(BinaryTreeNode*root);
		void createBinaryTree(const int& info,BinaryTree &leftTree,BinaryTree &rightTree){
			root = new BinaryTreeNode(info,leftTree.root,rightTree.root);
			leftTree.root = rightTree.root = NULL;
		}
};
void main()
{
	BinaryTree BT;

}