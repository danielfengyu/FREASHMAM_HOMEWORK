#include<iostream>
using namespace std;
class Node
{
private:
	int member;
	
public:
	Node (int member=0);
	~Node ();
	static int count;
};
int Node::count=100;
Node::Node(int member):member(member){
count++;
cout <<count<<endl<<member<<endl;
}
Node::~Node()
{
	count--;
	cout<<count<<endl;
}
int main()
{
	int a,b,c;
	cout<<"input 3 members:";
	cin>>a>>b>>c;
	Node num(a);
	Node num1(b);
	Node num2(c);
	return 0;

}


