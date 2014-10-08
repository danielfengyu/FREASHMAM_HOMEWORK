#include<iostream>
void swap(int &x ,int &y);
using namespace std;
int main()
{
	int a,b;
	cout<<"输入两个数:";
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