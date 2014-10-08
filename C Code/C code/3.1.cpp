#include <iostream.h>
 class Myclass 
{
 public:
  Myclass (int a,int b) { x=a;y=b;}
  void copy(Myclass & my);
	void print( )
	{ cout<<"x="<<x<<endl;
	  cout<<"y="<<y<<endl;
	} 
	private:
	int x,y;
};
 void Myclass::copy (Myclass&my)
 {
	 int a,b;
	 a=my.x;
	 x=a;
	 b=my.y;
	 y=b;
 }
	
 void main()
 {  
	 Myclass my(10,20),t(30,40);
	 cout<<"before copy:"<<endl;
     my.print( );
	 cout<<"after copy:"<<endl;
	my. copy(t);
	my.print( );
}