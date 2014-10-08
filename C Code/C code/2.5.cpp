#include<iostream>
using namespace std;
class A
{
private:
	int *a;
public:
	A ();
	~A();
	void inputNumber();
	void outputNumber();

};
A::A()
{
	a=new int[10];
}
A::~A()
{
	delete[]a;
}
void A::inputNumber ()
{
	int i=0;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
}
void A::outputNumber ()
{
	int i;
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
	A num;
	num.inputNumber();
	num.outputNumber ();
		return 0;
}