#include<iostream>
void swap(int &x ,int &y);
using namespace std;
int main()
{
	int a,b;
	cout<<"����������:";
	cin>>a>>b;
	swap(a,b);
	cout<<a<<' '<<b<<endl;
	return 0;
}
void swap(int &x,int &y)
{
	int z;
	z=x;
	x=y;
	y=z;
}