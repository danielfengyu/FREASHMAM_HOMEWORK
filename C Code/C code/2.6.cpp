#include<iostream>
#include<cstring>
using namespace std;
class String 
{
public:
	String(const char*str=NULL);
	String ( const String &other ) ;
	~String ();
private:
	char * m_data;
};
String::String(const char * str)
{
	m_data= new char[strlen(str)+1];
	strcpy(m_data,str);
	cout<<m_data <<"construcing" <<endl;
}
String::String (const String & other)
{
	m_data= new char[strlen(other.m_data)+1];
	strcpy(m_data,other.m_data);
	cout<<m_data<<"copy destructing"<<endl;

}
String ::~String ()
{
    cout << m_data<<"destrucing "<<endl;
	delete[]m_data;
}
int main()
{
	char str[8]="my c++";
	String str1(str);
	String str2=str1;
	return 0;
}