#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
template <class T> 
struct BiNode {  
	BiNode<T> *rchild,*lchild;
	T data;                  
 };
template <class T> 
class BiTree {  
	template <class T>  
	friend ostream & operator << (ostream &os ,BiTree<T> &bt); 
public:  
	BiTree();
	BiTree(int m){};
	BiTree(T ary[],int num,T none);
	//~BiTree();
	void inorder();
	 void postorder();
	void levelorder();
	int  count();
	int deepth();
	void display(ostream &os);
	void LevelNum();
	void PreOrder();
	void PostOrder();
	void creat();
 T leastCommanAncestor(T va, T vb);
protected: 
	bool empty() ;
	void visit(BiNode<T>*root){
		cout<<root-> data;
	}
	bool CompleteBinaryTree(BiNode<T>*root){
		root=root->lchild;
		lchild=root->lchild;
		rchid=root->rchild;
		if(lroot==NUll&&rchild!=NUll)
			return false;
        CompleteBinaryTree(root->lchild);
		return true;
	}
	void creat(BiNode <T>* &root);
	void release(BiNode<T>* &root);
	BiNode<T> * Build(T ary[],int num,T none,int idx);
	void PreOrder(BiNode<T>* root);
	void PostOrder(BiNode<T>* root);
	void LevelNum(BiNode<T>* root);
	void preorder(BiNode<T>* root);
	void inorder(BiNode<T>* root);
	void postorder(BiNode<T>* root);
	void levelorder(BiNode<T>*root);
	int count(BiNode<T>* root);
	int depth(BiNode<T>* root);
	void display(ostream& os,BiNode<T>* root,int dep);
	static bool leastCommanAncestor(BiNode<T> *root, T va, T vb, BiNode<T>*&result, BiNode<T>* parrent);
private: 
	BiNode<T> *rootptr;
	bool isRight;
};
template <class T> 
 void BiTree<T>::creat() {  
	 creat(rootptr); 
 }
 template <class T> 
	 void BiTree<T>::creat(BiNode<T> * & root) {  
	 T item;  
	 cin>>item;  
	 if(item=='#') 
		 root=NULL;  
	 else  { 
		 root=new BiNode<T>;   
		 root->data=item;   
		 creat(root->lchild);   
		 creat(root->rchild);  
	 }
 }
 template <class T> 
	 void BiTree<T>::PreOrder() { 
	 PreOrder(rootptr); 
} 
 template <class T> 
	 void BiTree<T>::PreOrder(BiNode<T>* root) { 
	 stack <BiNode<T> *> s; 
	 BiNode<T>*pointer=root;
	 while(!s.empty()||pointer)  {   
		 if(pointer)   {    
			 visit(pointer);   
			 if(pointer->rchild!=NULL)  
				s.push(pointer->rchild);
			 pointer=pointer->lchild;
		}   
		 else  {    
			 pointer=s.top();    
			 s.pop();      
		 }  
	 }
 }
template <class T> 
 bool BiTree<T>::empty() {  
	 return(rootptr==NULL?true;false); 
 }

 
 void main()
 {
	BiTree<char> Tree(1);
	cout<<"输入一个二叉树的前序遍历:"<<endl;
	cout<<"(以#作为分支结束)"<<endl;
	Tree.creat ();
	Tree.PreOrder()  ;
	cout<<endl;
 }