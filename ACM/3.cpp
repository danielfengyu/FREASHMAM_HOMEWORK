#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc,char*argv[]){
	vector<int> v;
	v.push_back(2);
	v.push_back (7);
	v.push_back(9);
	//cout<<v[0]<<endl;
	v.insert(v.begin(),10);
	v.insert(v.begin()+3,11);
	v.insert(v.end(),100);
	vector<int>::iterator it;
	v.erase(v.begin());
	reverse(v.begin(),v.end());
	//v.erase(v.begin(),v.begin()+1);
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<v.size()<<endl;
	v.clear();
	cout<<v.size()<<endl;
	reverse(v.begin(),v.end());
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	return 0;
}