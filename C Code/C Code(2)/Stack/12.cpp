#include<iostream>
using namespace std;
/*template<class T>
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
	private:
		int maxsize;
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
		void Push(const T item)
		{
			if(top=maxSize-1)
			{
				cout<<"stack is full.";
				
			}
			else
			{
				st[++top]=item;
				
			}
		}
		void Pop(T&item)
		{
			if(top==-1)
			{
				cout<<"It empty can not delete."
				
			}
			else
			{
				if(top!=-1)
				{
					item=st[top--];
					cout<<st[top];
				}
			}
		}
};*/
void multiply(int item,int num)
	{	

		if(item/num >0)
		{
			multiply(item/num,num);
			cout<<item%num;
		}
		else
		cout<<item;
			
	} 
int main()
{
	int b,c;
	cout<<"input a number:";
	cin>>b;
	cout<<"choice the jinzhi you want to use(2~9):";
	cin>>c;
	cout<<"生成的"<<c<<"进制数为:";
	multiply(b,c);
	cout<<endl;
	return 0;
}