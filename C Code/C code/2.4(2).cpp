#include <iostream>
using  namespace std;
class Fushu
{
private:
	int a;
	int b;
public:
	void setA(int m);
	void setB(int n);
	void add(Fushu &A);
	void sub(Fushu &A);
	void disp();
};
void Fushu::setA(int m)
{
	a=m;
}
void Fushu::setB(int n)
{
	b=n;
}
void Fushu::add(Fushu &A)
{
	a=A.a+a;
	b=A.b+b;

}
void Fushu::sub(Fushu &A)
{
	a=A.a-a;
	b=A.b-b;
}
void Fushu::disp()
{
	cout<<a<<"+"<<b<<"i"<<endl;
}
int main()
{
	Fushu num1,num2;
	int x,y,o,p;
	cout<<"����һ������:";
		cin>>x;
	cout<<"+";
	cin>>y;
	cout<<"i";	
	cout<<"������һ������:";
		cin>>o;
	cout<<"+";
	cin>>p;
	cout<<"i"<<endl;
	num1.setA(x);
	num1.setB(y);
	num2.setA(o);
	num2.setB(p);
	cout<<"��Ϊ:";
	num1.add(num2);
	num1.disp();
	cout<<"��Ϊ:";
	num1.sub(num2);
	num1.disp();
	return 0;

}