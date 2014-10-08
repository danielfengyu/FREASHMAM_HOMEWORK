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
int Node::count=0;
Node::Node(int member):member(member){
	count =member;
count++;
cout <<count<<member<<endl;
}
Node::~Node()
{
	count=member;
	count--;
	cout<<count<<endl;
}
int main()
{
	Node num(3);
	num.~Node();
	return 0;

}


