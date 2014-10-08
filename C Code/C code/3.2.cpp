//设计一个类，实现两个复数的四则运算。实现加减乘除功能的函数用友元函数实现。
#include<iostream>
using namespace std;
class Fushu
{
private:
	int a,b;
public:
	Fushu (int a,int b);
	friend void add(Fushu num1,Fushu num2);
	friend void sub(Fushu num1,Fushu num2 );
	friend void mul(Fushu num1,Fushu num2);
	friend void div(Fushu num1,Fushu num2);
	void disp();
};
Fushu::Fushu (int a=0,int b=0):a(a),b(b){}
void add(Fushu num1,Fushu num2)
{

	a=num1.a+num2.a;
	b=num1.b+num2.b;
}
void sub(Fushu num1,Fushu num2)
{
	a=num1.a-num2.a;
	b=num1.b-num2.b;
}
void mul(Fushu num1,Fushu num2)
{
	a=num1.a*num2.a+(-1)*num1.b*num2.b;
	b=num1.a*num2.b+num1.b*num2.a;
}
void div(Fushu num1,Fushu num2)
{
	a=(num1.a*num2.a+num1.b*num2.b)/(num2.a*num2.a+num2.b*num2.b*(-1));
	b=(num1.a*num2.b*(-1)+num1.b*num2.a)/(num2.a*num2.a+num2.b*num2.b*(-1));
}
void Fushu ::disp()
{
	cout<<a<<"+"<<b<<"i"<<endl;
} 
int main ()
{
	Fushu num1(1,2);
	Fushu num2(3,4);
	add(num1,num2);
	num1.disp ();
	return 0;
}


