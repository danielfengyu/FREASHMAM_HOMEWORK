#include<iostream>
template <class T> 
enum ORDER_MODE 
{ 
	 ORDER_MODE_PREV = 0, 
	 ORDER_MODE_MID, 
	 ORDER_MODE_POST 
};
  struct BinaryNode 
{ 
     T                element; 
     BinaryNode        *left; 
     BinaryNode        *right;
     BinaryNode(const T& theElement,  BinaryNode *lt,  BinaryNode *rt):element(theElement), left(lt),  right(rt)  {}; 
};
template <class T>  
class BinarySearchTree  
 { 
	  private: 
	     BinaryNode<T>            *m_root;
	  public:  
	     BinarySearchTree(); 
	    BinarySearchTree(const BinarySearchTree& rhs);  
	    ~BinarySearchTree();
	     const T& findMin() const; 
	     const T& findMax() const; 
	     bool contains(const T& x) const;
	    void printTree(ORDER_MODE eOrderMode = ORDER_MODE_PREV) const;
	     void makeEmpty(); 
	     void insert(const T& x);
	     void remove(const T& x);
	  private: 
	     //��Ϊ���ķ����õ��˺ܶ�ݹ飬 ��������������Ҫ�������µ�˽�г�Ա���� 
		 void insert(const T& x, BinaryNode<T>* &t) ; 
	     void remove(const T& x, BinaryNode<T>* &t) ; 
	     BinaryNode<T>* findMin( BinaryNode<T>* t) const; 
	     BinaryNode<T>* findMax( BinaryNode<T>* t) const; 
	     bool contains(const T& x, const BinaryNode<T>* t) const; 
	     void makeEmpty(BinaryNode<T>* t);
         void printTreeInPrev(BinaryNode<T>* t) const; 
         void printTreeInMid(BinaryNode<T>* t)const; 
         void printTreeInPost(BinaryNode<T>* t)const; 
}; 
template <class T> 
  bool  BinarySearchTree<T>::contains(const T& x) const 
 { 
     return contains(x, m_root); 
 }
 template <class T> 
  bool BinarySearchTree<T>::contains(const T& x, const BinaryNode<T>* t) const 
 {
     ��������Լ�
 }
template <class T> 
 BinarySearchTree<T>::BinarySearchTree() 
 { 
     m_root = NULL; 
 }
 template <class T> 
 BinarySearchTree<T>:: BinarySearchTree(const BinarySearchTree& rhs) 
 { 
     m_root = rhs.m_root; 
 }
 template <class T> 
 BinarySearchTree<T>:: ~BinarySearchTree() 
 { 
     makeEmpty(); 
 }
// return true if the x is found in the tree 
  template <class T> 
  bool  BinarySearchTree<T>::contains(const T& x) const 
 { 
     return contains(x, m_root); 
 }
 template <class T> 
  bool BinarySearchTree<T>::contains(const T& x, const BinaryNode<T>* t) const 
 { 
     if (!t) 
         return false; 
     else if (x < t->element) 
         return contains(x, t->left); 
     else if (x > t->element) 
         return contains(x, t->right); 
     else 
         return true; 
 }
template <class T> 
  void  BinarySearchTree<T>::makeEmpty() 
 { 
     makeEmpty(m_root); 
 }
 template <class T> 
 void  BinarySearchTree<T>::makeEmpty(BinaryNode<T>* &t) 
 { 
     if (t) 
     { 
         makeEmpty(t->left); 
         makeEmpty(t->right); 
         delete t; 
     } 
     t = NULL; 
 }
template <class T> 
 BinaryNode<T>* BinarySearchTree<T>::findMax( BinaryNode<T>* t) const 
 { 
     //��������һ���ص��������Ҷ��ֵ�ȸ��ڵ�С�� ����Ҷ�ıȸ��ڵ�Ĵ� 
     if (t != NULL) 
         while (t->right != NULL) 
             t = t->right; 
     return t; 
 }
 template <class T> 
 BinaryNode<T>* BinarySearchTree<T>::findMin( BinaryNode<T>* t) const 
 { 
     //��������һ���ص��������Ҷ��ֵ�ȸ��ڵ�С�� ����Ҷ�ıȸ��ڵ�Ĵ� 
     if (!t) 
         return NULL; 
     if (t->left == NULL) 
         return t; 
     else 
         return findMin(t->left); 
 }
template <class T> 
 BinaryNode<T>* BinarySearchTree<T>::findMax( BinaryNode<T>* t) const 
 { 
     //��������һ���ص��������Ҷ��ֵ�ȸ��ڵ�С�� ����Ҷ�ıȸ��ڵ�Ĵ� 
     if (t != NULL) 
         while (t->right != NULL) 
             t = t->right; 
     return t; 
 }
 template <class T> 
 BinaryNode<T>* BinarySearchTree<T>::findMin( BinaryNode<T>* t) const 
 { 
     //��������һ���ص��������Ҷ��ֵ�ȸ��ڵ�С�� ����Ҷ�ıȸ��ڵ�Ĵ� 
     if (!t) 
         return NULL; 
     if (t->left == NULL) 
         return t; 
     else 
         return findMin(t->left); 
 }
template <class T> 
 void BinarySearchTree<T>::remove(const T& x, BinaryNode<T>* &t) 
 { 
     if (t == NULL) 
         return; 
     if (x < t->element) 
         remove(x, t->left); 
     else if (x > t->element) 
         remove (x, t->right); 
     else // now == 
     { 
         if (t->left != NULL && 
             t->right != NULL)//two child 
         { 
             t->element = findMin(t->right)->element; 
             remove(t->element, t->right); 
         } 
         else 
         { 
             BinaryNode<T> *oldNode = t; 
             t = (t->left != NULL) ? t->left : t->right; 
             delete oldNode; 
         } 
     } 
}
 //Print tree
  template <class T>
  void BinarySearchTree<T>::printTree(ORDER_MODE eOrderMode /*= ORDER_MODE_PREV*/) const
 {
     if (ORDER_MODE_PREV == eOrderMode)
          printTreeInPrev(m_root);
     else if (ORDER_MODE_MID == eOrderMode)
          printTreeInMid(m_root);
     else if (ORDER_MODE_POST == eOrderMode)
          printTreeInPost(m_root);
     else 
         ;//do nothing
  }
 template <class T>
  void BinarySearchTree<T>::printTreeInPrev(BinaryNode<T>* t) const
 {
     if (t)
     {
         cout << t->element;
         printTreeInPrev(t->left);
         printTreeInPrev(t->right);
     }
 }
 template <class T>
  void BinarySearchTree<T>::printTreeInMid(BinaryNode<T>* t) const
 {
     if (t)
     {
         printTreeInPrev(t->left);
         cout << t->element;
         printTreeInPrev(t->right);
     }
 }
 template <class T>
  void BinarySearchTree<T>::printTreeInPost(BinaryNode<T>* t) const
 {
     if (t)
     {
         printTreeInPost(t->left);
         printTreeInPost(t->right);
         cout << t->element;
     }
 }
 
int main(int argc, _TCHAR* argv[])
 {
     BinarySearchTree<int> binaryTree;
     binaryTree.insert(5);
     binaryTree.insert(1);
     binaryTree.insert(2);
     binaryTree.insert(3);
     binaryTree.insert(6);
     binaryTree.insert(8);
     bool b = binaryTree.contains(1);
     int x = binaryTree.findMin();
     cout << b << " "<< x <<endl;
     x = binaryTree.findMax();
     cout << x <<endl;
     binaryTree.remove(2);
     binaryTree.printTree(ORDER_MODE_PREV);
     cout <<endl;
     binaryTree.printTree(ORDER_MODE_MID);
     cout <<endl;
     binaryTree.printTree(ORDER_MODE_POST);
     cout <<endl;
     return 0;
 }
