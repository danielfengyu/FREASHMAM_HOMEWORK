#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc,char*argv[]){
	vector<string> v;
	v.push_back("Daniel");
	v.push_back("Mike");
	v.push_back("Tom");
	cout<<v[0]<<endl;
	cout<<v[1]<<endl;
	cout<<v[0][0]<<endl;

	return 0;
}