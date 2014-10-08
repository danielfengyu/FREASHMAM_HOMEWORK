#include<fstream>
#include<iostream>
using namespace std;
int main(){

	ifstream cin("a.txt");
	int a,b;
	while(cin>>a>>b){
		cout<<a+b<<endl;

	}
	fflush(stdin);
	getchar();
	return 0;
}