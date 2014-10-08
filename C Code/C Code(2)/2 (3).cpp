#include<iostream>
using namespace std;
template <class T>
class LinkList
{
	private:
		LinkNode<T>*head,tail;
		LinkNode<T>*prevPtr,*currPtr;
		int position;
	public:
		LinkList();
		~LinkList();
		LinkNode<T>*setPos(int pos);//初始指针的位置
		bool insertPos(const int i,const T value);//在指定位置插入指针
		bool deletePos(const int i);//删除指定位置的结点
		LinkNode<T>*setPos(int pos);
};
template <class T>
class LinkNode
{
	public:
		T data;//数据域
		LinkNode<T>*link;//指向后继结点的指针
		LinkNode(const T&el,LinkNode<T>*ptr=0){//构造函数
		data=el;
		link=ptr;
		}
};
template<class T>
LinkNode<T>*LinkList<T>::setPos (int pos){
if(pos==-1)//i为-1则定位到头结点
return head;
int count=0;
LinkNode<T>*p=head->link;
while(p!=NULL&&count<pos)
{
     p=p->link;
	 count++;
}
return p;//指向第i个结点，当链表长度小于i时返回NULL
}
template<class T>
bool LinkList<T>::insertPos (const int i,const T value)
{
	LinkNode <T>*p,*q;
	if(p=setPos(i-1)==NULL)//p是第i个结点的前驱
	{
		cout<<"插入不允许"<<endl;
		return false;

	}
	q=new LinkNode <T>(value,p->link);
		p->link=q;
		if(p==tail)//在表尾进行插入制作
			tail=q;
		return true;
}
template<class T>
bool LinkList<T>::deletePos (const int i)

{
	LinkNode<T>*p,q;
	if((p=setPos(i-1))==NULL || p==tail)//待删除点不自在
	{
		cut<<"非法删除点"<<endl;
		return false;

	}
	q=p->link;//q为真正的待删除点
	if(q==tail)//删除点为表尾，修改尾指针
	{
		tail=p;
		p->link=NULL;
		delete q;
	}
	else if(q!=NULL)//删除结点q，并修改指针
	{
		p->link=q->link;
		delete q;

	}
	return true;
}
int main()
{
	int num,num1;
	cout<<"输入数据的个数:";
	cin>>num;
	for(int i=0;i++;i<num)
	{
	    LinkNode<int>*setPos (0);
		cin>>num1;	
		LinkNode(const T&num1,LinkNode<int>*ptr=0);

	}
return 0;
}
