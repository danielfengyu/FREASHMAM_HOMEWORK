#include<iostream>
using namespace std;
template<class T>
class Stack
{
	public:
		void Clear();
		bool Push(const T &item);
		bool Pop(T&item);
		bool Top(T&item);
		bool IsEmpty();
		bool IsFull();

};
template<class T>
class ArrayStack:public Stack<T>
{
	public:
		int maxSize;
		int top;
		T*st;
	public:
		ArrayStack(int size)
		{
			maxSize=size;
			top=-1;
			st=new T[maxSize];
		}
		ArrayStack()
		{
			top=-1;
		}
		~ArrayStack()
		{
			delete [] st;

		}
		void Clear()
		{
			top=-1;
		}
		bool Push(const T item)
		{
			if(top==maxSize-1)
			{
				T*newSt=new T[maxSize*2];
				for(int n=0;n<=top;n++)
				{
					newSt[n]=st[n];
				}
				delete [] st;
				st=newSt;
				maxSize*=2;
				top=maxSize-1;
			}
			else
			{
				st[++top]=item;
				return true;
			}
		}
		void Pop(T item)

		{
			if(top==-1)
			{
				cout<<"It empty can not delete.";
				return '/0';
			}
			else
			{
				item=st[top--];
				cout<<item<<' ';
		//		return item;
			}
			cout<<endl;
		
		}
		bool Top(T &item)
		{
			if(top=-1)
			{
				cout<<"Stack is empty,you can't read the top element";
				return false;
			}
			else
			{
				item=st[top];
				return true;
			}
		}
};
void main()
{
	char item;
	int count=0;
ArrayStack <char> ST(10),ST1(10);
	cout<<"input 10 chars:";
	for(int i=0;i<10;i++)
	{
		cin>>item;
		ST. Push(item);
	}
/*	for(int j=0;j<5;j++)
	{
		ST.Pop(item);
	}
	for(int k=0;k<10;k++)
	{
		cout<<ST.st [k];
	}*/
	cout<<endl;
	for(int f=0;f<10;f++)
	{
		if(ST.st[f]=='('||ST.st[f]=='{' ||ST.st[f]=='[' )
		{
			ST1.Push(ST.st[f]);
			count++;
		}
		if(ST.st [f]==')'||ST.st [f]=='}'||ST.st [f]==']')
		{
			if(ST.st[f]!=ST.st[count])
			{
				cout<<"can not compare"<<endl;
			}
			else
			{
				item=ST.st[count--];
				
				
			}
		}
	}	

    
}