#include <iostream>
using namespace std;
void main()
{
	int n,i;
	double m=1;
	cin>>n;
	for(i=n;i--;i>0)
	{
		m*=(365-i)/365.0;
	}
	cout<<m<<endl;
}
