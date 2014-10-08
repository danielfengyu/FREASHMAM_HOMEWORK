//#ifndef _ _SIMPLE_LK_LIST_WITHOUT_FIRST_NODE_H_ _
#define _ _SIMPLE_LK_LIST_WITHOUT_FIRST_NODE_H_ _
#include<iostream>
//#include"utility.h"
using namespace std;
//无头结点的简单线性表指针
template<class T>
class SimpleLinkListWithoutHeadNode
{
	protected:
		Node<T>*first;
		Node<T>*GetElemptr(int position)const;
		void Init();
	public:
		SimpleLinkListWithoutHeadNode();
		virtual~SimpleLinkListWithoutHeadNode();
		int Length()const;
		bool Empty()const;
		void Clear();
		void Traverse(void(*Vist)(T&));
		StatusCode GetElem(int position,T&e)const;
		StatusCode SetElem(int position,const T&e);
		StatusCode Delete(int position,T&e);
		StatusCode Insert(int position,const T&e);
		SimpleLinkListWithoutHeadNode(const SimpleLinkListWithoutHeadNode<T>&copy);
		SimpleLinkListWithoutHeadNode<T>& operator=(const 	SimpleLinkListWithoutHeadNode<T>&copy);

};
template <class T>
class Node
{
	public:
		T data;
		Node<T>*tmpPtr,next;
		Node(const T&el,Node<T>*ptr=0)
		{
			data=el;
			temPtr=ptr;
		}
};
template<class T>
Node<T>*SimpleLinkListWithoutHeadNode<T>::GetElemptr(int position)const
{
	Node<T>tmpPtr=first;
	int curPosition=1;
	while(tmpPtr!=NULL&&curPosition<position)
	{
		tmpPtr=tmpPtr->next;
		curPosition++;
	}
	if(tmpPtr!=NULL&&curPosition==position)
	{
		return tmpPtr;	
	}
	else
	{
		return NULL;
	}
}
template<class T>
void SimpleLinkListWithoutHeadNode<T>::Init ()
{
	first=NULL;
}
template<class T>
 SimpleLinkListWithoutHeadNode<T>:: SimpleLinkListWithoutHeadNode()
{
	Init();
}
template<class T>
 SimpleLinkListWithoutHeadNode<T>:: ~SimpleLinkListWithoutHeadNode()
{
	Clear();
} 
template<class T>
int SimpleLinkListWithoutHeadNode<T>::Length ()const
{
	first=NULL;
}
template<class T>
void SimpleLinkListWithoutHeadNode<T>::Init ()
{
	int count=0;
	for(Node<T>*tmpPtr=first;tmpPtr!=NULL;tmpPtr=tmpPtr->next)
	{
		count++;
	}
	return count;
}
template<class T>
bool SimpleLinkListWithoutHeadNode<T>::Empty ()const
{
	return first==NULL;
}
template<class T>
void SimpleLinkListWithoutHeadNode<T>::Clear ()const
{
	T temElem;
	while(Length()>0)
	{
		Delete(1,temElem);

	}
}
template<class T>
void SimpleLinkListWithoutHeadNode<T>::Traverse (void(*Visit)(ElemType&))const
{
	for (Node<T>*tmpPtr=first;tmpPtr!=NULL;tmpPtr=tmpPtr->next)
	{
		(*Visit)(tmpPtr->data);
	}
}
template<class T>
StatusCode SimpleLinkListWithoutHeadNode<T>::GetElem (int position,T&e)const
{
    if(position<1 || position>Length())
	{
		return NOT_PRESENT;
	}
	else
	{
		Node<T>*tmpPtr;
		temPtr=GetElemPtr(position);
		e=tmpPtr->data;
		return ENTRY_FOUND;
	}
}
template<class T>
StatusCode SimpleLinkListWithoutHeadNode<T>::SetElem (int position,const T&e)
{
	if(position<1||position>Length())
	{
		return RANGE_ERROR;
	}
	else
	{
		Node<T>*tmpPtr;
		tmpPtr=GetElemPtr(position);
		tmpPtr->data=e;
		return SUCCESS;
	}
}
template<class T>
StatusCode SimpleLinkListWithoutHeadNode<T>::Delete(int position, T&e)
{
	if(position<1||position>Length())
	{
		return RANGE_ERROR;
	}
	else
	{
		Node<T>*tmpPtr;
	    if(position>1)
		{
			tmpPtr=GetElem(position-1);
			Node<T>*nextPtr=tmpPtr->next;
			tmpPtr->next=nextPtr->next;
			e=nextPtr->data;
			delete nextPtr;
		}
		else
		{
			tmpPtr=first;
			first=first->next;
			delete tmpPtr;
		}
		return SUCCESS;
	}
}
template<class T>
StatusCode SimpleLinkListWithoutHeadNode<T>::Insert (int position,const T&e)
{
	if(position<1||position>Length()+1)
	{
		return RANGE_ERROR;
	}
	else
	{
		Node<T>*temPtr;
		if(position>1)
		{
			Node<T>*tmpPtr=GetElemPtr(position-1)；
				newPtr=new Node<T>(e,tmpPtr->next);
			tmpPtr->next=newPtr;

		}
		else 
		{
			newPtr=new Node<T>(e,first);
			first=newPtr;
		}
		return SUCCESS;
	}
}
template <class T>	
SimpleLinkListWithoutHeadNode<T>::SimpleLinkListWithoutHeadNode(const SimpleLinkListWithoutHeadNode<T>&copy)
{
	int copyLength=copy.Length();
	T e;
	Init();
	for(int curPosition=1;curPosition<=copyLength;curPosition++)
	{
		copy.GetElem(curPosition,e);
		Insert(Length()+1,e);
	}
}
template <class T>	
SimpleLinkListWithoutHeadNode<T>&SimpleLinkListWithoutHeadNode<T>::operator =(const SimpleLinkListWithoutHeadNode<T>&copy)
{
	if(&copy!=this)
	{
        int copyLength=copy.Lemgth();
		T e;
		Clear();
	for(int curPosition=1;curPosition<=copyLength;curPosition++)
	{
		copy.GetElem(curPosition,e);
		Insert(Length()+1,e);
	}
	}
	return this;
}
int main()
{
	char c='0';
	SimpleLinkListWithoutHeadNode<int>la,lb;
	int e;
	int position;
	while(c!='7')
	{
		cout<<endl<<"1.生成线性表.";
		cout<<endl<<"2.显示线性表.";
		cout<<endl<<"3.检索线性表.";
		cout<<endl<<"4.设置元素.";
		cout<<endl<<"5.删除元素.";
		cout<<endl<<"6.插入元素.";
		cout<<endl<<"7.退出.";
		cout<<endl<<"选择功能(1~7):";
		cin>>c;
		switch(c)
		{
		case '1':
			cout<<endl<<"输入e(e=0时退出):";
			cin>>e;
			while(e!=0)
			{
				la.Insert(la.Length()+1,e);
				cin>>e;
			}
			break;
		case '2':
			lb=la;
			lb.Traverse (Write<int>);
			break;
		case '3':
			cout<<endl<<"输入元素位置:";
			cin>>position;
			if(la.GetElem(position,e)==NOT_PRESENT)
				cout<<"元素不存在."<<endl;
			else
				cout<<"元素:"<<e<<endl;
			break;
		case '4':
			cout<<endl<<"输入位置:";
			cin>>position;
			cout<<endl<<"输入元素值:";
			cin>>e;
			if(la.SetElem(position,e)==RANGE_ERROR)
				cout<<"设置范围错."<<endl;
			else
				cout<<"设置成功.";
			break;
		case '5':
			cout<<endl<<"输入位置:";
			cin>>position;
			if(la.Delete(position,e)==RANGE_ERROR)
				cout<<"位置范围错."<<endl;
			else
				cout<<"被删除元素值:"<<e<<endl;
			break;
		case '6':
			cout<<endl<<"输入位置:";
			cin>>position;
			cout<<endl<<"输入元素值:";
			cin>>e;
			if(la.Insert(position,e)==RANGE_ERROR)
				cout<<"位置范围错."<<endl;
			else
				cout<<"插入成功:"<<e<<endl;
			break;
		}
	}
	system("PAUSE");
	return 0;

}
