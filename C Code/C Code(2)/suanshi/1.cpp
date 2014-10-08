#include<iostream>
#include<stdio.h>
using namespace std;

const int SZ=1000;
char   symb(char &symb1,char &symb2);//�Ƚϲ����������ȼ��ĺ���
double oprt(double &a,double &b,char &op);//��������ĺ���

template<class T>
class Stack
{
	public:	
		Stack(int MaxSize=100);
		~Stack(){delete []stack;}
		bool IsEmpty()const{return top==-1;}
		bool IsFull()const{return top==MaxTop;}
		T Top()const;//����ջ��Ԫ��
		Stack<T> &push(const T &x);
		Stack<T> &pop(T &x);
        friend istream &operator>>(istream &,char &); //�������������
	private:
		int top;
		int MaxTop;
		T *stack;
};

template<class T>
Stack<T>::Stack(int MaxSize)
{
	MaxTop=MaxSize-1;
	stack= new T[MaxSize];
	top=-1;
}

template<class T>
T Stack<T>::Top()const//����ջ��Ԫ��
{  return stack[top];  }

template<class T>
Stack<T> &Stack<T>::push(const T &x)
{
	if(!IsFull())
		top++;
	stack[top]=x;
	return *this;
}

template<class T>
Stack<T> &Stack<T>::pop(T &x)
{
	if(!IsEmpty())
		x=stack[top--];
	return *this;
}

istream &operator>>(istream &in,char &)
{
	char exp[SZ];
	in.getline(exp,SZ,'#');
		return in;
}

bool IsData(char ch)
{
 return (((ch>='0'&&ch<='9')||ch=='.')&&(ch!='#'))?true:false;
}

bool IsSym(char ch)
{
 return (ch=='+'||ch=='-'||ch=='*'||ch=='/')?true:false;
}

char symb(char &symb1,char &symb2)//�Ƚϲ����������ȼ��ĺ���
{
	char r[7][7]={{'>','>','<','<','<','>','>'},
				  {'>','>','<','<','<','>','>'},
				  {'>','>','>','>','<','>','>'},
				  {'>','>','>','>','<','>','>'},
				  {'<','<','<','<','<','=',' '},
				  {'>','>','>','>',' ','>','>'},
				  {'<','<','<','<','<',' ','='}};//��Ų��������ȹ�ϵ������
	char ch[2];//�������������������
	int  in[2];//��Ų�����ת�����ɵ����
	ch[0]=symb1;
	ch[1]=symb2;
	for(int i=0;i<2;i++)
	{
		switch(ch[i])
		{
		case'+':in[i]=0;break;
		case'-':in[i]=1;break;			
		case'*':in[i]=2;break;
		case'/':in[i]=3;break;
		case'(':in[i]=4;break;		
		case')':in[i]=5;break;
		case'#':in[i]=6;
		};
	}
		return r[in[0]][in[1]];
}
double oprt(double &a,double &b,char &op)//��������ĺ���
{
	double result=0.0;
	switch(op)
	{
	case'+':result=a+b;break;
	case'-':result=a-b;break;
	case'*':result=a*b;break;
	case'/':
		if(b==0)
		{
			cout<<"���ܳ���0!"<<endl;
			system("pause");
		}
		else
		{
			result=a/b;
			break;
		}
	};
	return result;
}
double Calculate(char exp[SZ],double& sum)//����
{	
	char ch,sym,op;	
	char temp[SZ];
	int tag(0);
	double a(0.0),b(0.0),c(0.0);

	Stack<char>soprt;//������ջ
	Stack<double>spond;//������ջ

	soprt.push('=');
    int i(0),j(0),k(0);
	while(exp[i])
	{
		if(IsData(exp[i]))
		{
			k=i-1;
			temp[j++]=exp[i++];
			temp[j]='\0';
		}
		else
		{	
           if(j!=0)
			{
			   if((k==1)&&(exp[k-1]=='-'))
			   {
				   double t=-atof(temp);
				   spond.push(t);
				   soprt.pop(op);
			   }
			   else if((k!=1)&&(exp[k-1]=='-')&&(exp[k-2]=='('))
			   {
				   double t=-atof(temp);
				   spond.push(t);
				   soprt.pop(op);
			   }
			   else
			   {
				   spond.push(atof(temp));
			   }			
			}
			j=0;
			ch=soprt.Top();
			switch(symb(ch,exp[i]))
			{
			case'<':
				soprt.push(exp[i]);
				i++;
				break;
			case'=':
				soprt.pop(sym);
				i++;
				break;
			case'>':
				soprt.pop(op);
                spond.pop(b);
				spond.pop(a);
				spond.push(oprt(a,b,op));
			}
		}
	}
		sum=spond.Top();
	  if(!soprt.IsEmpty())
	  {
		  cout<<"�ж���������!"<<endl;
		  system("pause");
	  }
	  else
		return sum;
	   cout<<endl;
	
}
int main()
{
  char buffer[SZ];
  double sum=0.0;
  cout.precision(12);
  cout<<"       ------------------------ע��--------------------------------------"<<endl<<endl;
  cout<<"  �벻Ҫ������������������������������Ϊ�㣬����������������ȷ�ļ����� !"<<endl<<endl;
  cout<<"  ����������Ҫ����ı��ʽ(�ԡ�#����Ϊ������־) :"<<endl<<endl;
  while(cin>>(buffer))  //���� 
    { 
	    cout<<endl;
	    cout<<"   ������Ϊ��  ";
		cout<<Calculate(buffer,sum)<<endl;//��������
		cout<<"    "<<endl;
    }
  return 0;
}
