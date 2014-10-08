#include<iostream>
#include<stack>
using namespace std;

/*====================================
(��һ���ʱ��ʱ��)
2009.02.23 14:58 
�״ΰ��Լ����뷨
�ɹ�ʵ����ͨ���ʽ����׺���ʽ��ת��
www.OK2002.com
====================================*/

bool is_op(const char ch)
{
	return ('+'==ch || '-'==ch || '*'==ch || '/'==ch);
}

bool is_letter(const char ch)
{
	return ('a'<=ch && 'z'>=ch);
}

int op(const char ch)
{
	switch(ch)
	{
	case '+':return 1;
	case '-':return 1;
	case '*':return 2;
	case '/':return 2;
	case '#':return 0;
	default:return -1;
	}
}

void main()
{
	char *pp=NULL;
	stack<char>s,ss,sss;
	char *pKey="a*b+(c-d/e)*f";
	char *p=pKey;
	ss.push('#');
	cout<<pKey<<endl;
	while('\0'!=*p)
	{
		//cout<<"________"<<*p<<endl;

		if(is_letter(*p))
			s.push(*p);
		else if(is_op(*p))
		{
			if(!ss.empty() && op(ss.top()) > op(*p) )
			{
				s.push(ss.top());
				ss.pop();
				ss.push(*p);
			}
			else
				ss.push(*p);
		}
		else if('('==*p)
			ss.push(*p);
		else if(')'==*p)
		{
			while(!ss.empty() && '('!=ss.top())
			{
				s.push(ss.top());
				ss.pop();
			}
		//	cout<<"this:"<<ss.top()<<endl;

			ss.pop();//ɾ��'('

		}
		else
		{
			cout<<"δ֪"<<endl;
			return;
		}
		++p;
	}

	while(!ss.empty())
	{
		if('#'!=ss.top())
			s.push(ss.top());
		ss.pop();
	}

	while(!s.empty())
	{
		sss.push(s.top());
		s.pop();
	}
	
	while(!sss.empty())
	{
		cout<<sss.top();
		sss.pop();
	}

	cout<<endl;
	cout<<"ab*cde/-f*+";
	cout<<endl;
}
