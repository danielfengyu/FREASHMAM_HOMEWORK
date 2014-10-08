#include<iostream>
using namespace std;
template<class T>
class BinaryTreeNode{
	friend class BinaryTree<T>;
private:
	T element;
	BinaryTreeNode<T>*leftChild;
	BinaryTreeNode<T>*rightChild;
public:
	BinaryTreeNode();
	BinaryTreeNode(const T& ele){
		element=ele;
	}
	BinaryTreeNode(const T&ele,BinaryTreeNode<T>*l,BinaryTreeNode<T>*r){
		element=ele;
		leftChild=l;
		rightChild=r;
	}
	BinaryTreeNode<T>*getLeftChild()const{cout<<leftChild->element<<endl;}
	BinaryTreeNode<T>*getRightChild()const{cout<<reftChild->element<<endl;}
	void setLeftChild(BinaryTreeNode*l){
		T data;
		root=l;
		leftChild=l->leftChild;
		rightChild=l->rightChild;
	}
	void setRightChild(BinaryTreeNode*r){
			T data;
		root=r;
		leftChild=r->leftChild;
		rightChild=r->rightChild;
	}
	T getValue()const{return element;};
	void setValue(const T& val){element=val;};
	bool isLeaf()const{
		if(root!=NULL&&leftChild=NULL&&rightChild=NULL)
			return true;
		else
			return false;
	}
};
template <class T>
class BinaryTree{
	private:
		BinaryTreeNode<T>*root;
	public:
		BinaryTree(T data[]){	createBinaryTree(root,element,1);}
		~BinaryTree();
		bool isEmpty()const{
			return(root!=NULL?false:true);
		}
		T visit(BinaryTreeNode<T>*root){return element;}
		BinaryTreenode<T>*getRoot()const;	
		BinaryTreenode<T>*getprent(BinaryTreeNode<T>*current)const;
		BinaryTreenode<T>*getLeftSibling(BinaryTreeNode<T>*current)const;
		BinaryTreenode<T>*getRightSibling(BinaryTreeNode<T>*current)const;
		void breadthFirstOrder(BinaryTreeNode<T>*root);
		void preOrder(BinaryTreeNode<T>*root){
			if(root!=NULL)
			{
				visit(root);
				preOrder(root->leftChild);
				preOrder(root->reftChild);
			}
		}
		void inOrder(BinaryTreeNode<T>*root){
			if(root!=NULL)
			{
			
				preOrder(root->leftChild);	
				visit(root);
				preOrder(root->reftChild);
			}
		}
		void postOrder(BinaryTreeNode<T>*root){
				if(root!=NULL)
			{
			
				preOrder(root->leftChild);	
				
				preOrder(root->reftChild);
				visit(root);
			}
		}
		void levelOrder(BinaryTreeNode<T>*root);
		void createBinaryTree(BinaryTreeNode<T>*root1,T data[],int i){
			if(a[i-1]!=0)
			{
				root1=new BinaryTreeNode<T>;
				root1->element=a[i-1];
				root1->leftChild=root1->rightChild=NULL;
				createBinaryTree(root1->leftChild,a,2*i);
				createBinaryTree(root1->reftChild,a,2*i+1);
			}
		}
};
void main()
{

}