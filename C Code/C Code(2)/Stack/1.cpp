#include<iostream>

using namespace std;
template<class T>

class linearlist

{

         public:

         linearlist(){};

         ~linearlist(){};

         virtual int size()const=0;

         virtual int length()const=0;

         virtual int search(const T &x)const=0;

         virtual int locate(int i)const=0;

         virtual bool getdata(int i,T &x)const=0;

         virtual void setdata(int i,T &x)=0;

         virtual bool insert(int i,const T &x)=0;

         virtual bool remove(int i,T &x)=0;

         virtual bool isempty()const=0;

         virtual bool isfull()=0;

    virtual void input()=0;

         virtual void output()=0;

          

};


#include<iostream.h>

#include<stdlib.h>

#include"linearlist.h"

const int defaultsize=100;

template <class T>

class seqlist:public linearlist<T>

{

         protected:

                   T *data;

                   int maxsize;

                   int last;

                   void resize(int newsize);

         public:

                   seqlist(int sz=defaultsize);

                   seqlist(seqlist<T>& L);

                   ~seqlist(){delete[] data;}

                   int size()const{return maxsize;}

                   int length()const{return last+1;}

                   int search(const T &x)const; //����const ����

                   int locate(int i)const;

                   bool getdata(int i,T& x)const

                   {if(i>0&&i<=last+1) {x=data[i-1];return true;}else return false;}

                   void setdata(int i,T &x)

                   {if(i>0&&i<=last+1) data[i-1]=x;}

                   bool insert(int i,const T& x);  //T &xǰ�治��const �����

                   bool remove(int i,T &x);

                   bool isempty()const{return (last==-1)?true:false;}

                   bool isfull(){return (last==maxsize-1)?true:false;}

                   void input(); //ʵ�ʿ�����ĸ�������������ֶ�1��

                   void output();

                   seqlist<T> operator=(seqlist<T>& L);

};

 

template<class T>

seqlist<T>::seqlist(int sz)

{

         if(sz>0)

         {

                   maxsize=sz;

                   last=-1;

                   data=new T[maxsize];

                   if(data==NULL)

                   {cerr<<"�洢�������"<<endl;exit(1);}

         }

}

template<class T>

seqlist<T>::seqlist(seqlist<T>& L)

{

         maxsize=L.size();

         last=L.length()-1;

         data=new T[maxsize];

         if(data==NULL)

         {cerr<<"�洢�������"<<endl;exit(1);}

         for(i=1;i<=last+1;i++)

                   data[i-1]=L.getdata(i);

}

template<class T>

void seqlist<T>::resize(int newsize)

{

         if(newsize<=0)

         {cerr<<"�洢�������"<<endl;exit(1);}

         if(newsize!=maxsize)

         {

                   T *newarray=new T[newsize];

                   if(newarray==Null)

                   {cerr<<"�洢�������"<<endl;exit(1);}

                   int n=last+1;

                   T *srcptr=data;

                   T *destptr=newattay;

                   while(n--) *destptr++=*srcptr++;

                   delete[] data;

                   data=newarray;

                   maxsize=newsize;

         }

}

template<class T>

int seqlist<T>::search(const T &x)const

{

         for(int i=0;i<=last;i++)

                   if(data[i]==x) return i+1;

         return 0;

}

template<class T>

int seqlist<T>::locate(int i)const

{

         if(i>=1&&i<=last+1) return i;

         else return 0;

}

template<class T>

bool seqlist<T>::insert(int i,const T& x)

{

         if(last==maxsize-1) return false;

         if(i<0||i>last+1) return false;

         for(int j=last;j>=i;j--)

                   data[j+1]=data[j];

         data[i]=x;

         last++;

         return true;

}

template<class T>

bool seqlist<T>::remove(int i,T &x)

{

         if(last==-1) return false;

         if(i<1||i>last+1) return false;

         x=data[i-1];

         for(int j=i;j<=last;j++)

                   data[j-1]=data[j];

         last--;

         return true;

}

template<class T>

void seqlist<T>::input()

{

         cout<<"��ʼ����˳������������Ԫ�صĸ�����";

         while(1)

         {

                   cin>>last;

                   if(last<=maxsize-1) break;

                   cout<<"��Ԫ�ظ����������󣬷�Χ���ܳ���"<<maxsize-1<<":";

         }

         for(int i=0;i<last;i++)

         {        cout<<i+1<<endl;

                   cin>>data[i];

                  

         }

         cout<<"������ϣ�"<<endl;

         last--;

}

template<class T>

void seqlist<T>::output()

{

         cout<<"˳���ǰԪ�����λ��Ϊ��"<<last<<endl;

         for(int i=0;i<=last;i++)

                   cout<<"#"<<i+1<<":"<<data[i]<<endl;

}



 //#include"seqlist.h"

void biao()

{

         cout<<"��������Ӧ��Ž��в�����"<<endl;

         cout<<"1�鿴���Ա���󳤶�(size)"<<endl

                   <<"2�鿴���ݳ���(length)"<<endl

                   <<"3��������(search)"<<endl

                   <<"4��λ����(locate)"<<endl

                   <<"5���ָ����������(getdata)"<<endl

                   <<"6�޸�ָ����������(setdata)"<<endl

                   <<"7��������(insert)"<<endl

                   <<"8ɾ��ָ������(remove)"<<endl

                   <<"9�жϱ������(isempty)"<<endl

                   <<"10�жϱ��Ƿ���(isfull)"<<endl

                   <<"11����˳���(input)"<<endl

                   <<"12���˳���(output)"<<endl

                   <<"0�˳�"<<endl

                   <<"-1��ʾĿ¼"<<endl;

}

void main()

{

         int n,i,x;

         seqlist<int> s(100);

         biao();

         cin>>n;

         while(n)

         {

                   switch(n)

                   {

                   case -1:biao();break;

                   case 1:cout<<"size="<<s.size()<<endl;break;

                   case 2:cout<<"length="<<s.length()<<endl;break;

                   case3:cout<<"����Ҫ���ҵ����ݣ�";cin>>i;cout<<"address="<<s.search(i)<<endl;break;

                   case 4:cout<<"����Ҫ���ҵ�λ�ã�";cin>>i;cout<<"locate="<<s.locate(i)<<endl;break;

                   case 5:cout<<"����Ҫ���������λ�ã�";cin>>i;s.getdata(i,x);cout<<"x="<<x<<endl;break;

                   case 6:cout<<"����Ҫ�޸ĵ�����λ�ã�";cin>>i;cout<<"����Ҫ�޸ĵ�����ֵ��";cin>>x;s.setdata(i,x);break;

                   case 7:cout<<"����Ҫ���������λ�ã�";cin>>i;cout<<"����Ҫ���������ֵ��";cin>>x;s.insert(i,x);break;

                   case 8:cout<<"����Ҫɾ��������λ�ã�";cin>>i;s.remove(i,x);cout<<"��ɾ��������ֵ="<<x<<endl;break;

                   case 9:s.isempty()?cout<<"��Ϊ��":cout<<"��Ϊ��";cout<<endl;break;

                   case 10:s.isfull()?cout<<"����":cout<<"��δ��";cout<<endl;break;

                   case 11:s.input();break;

                   case 12:s.output();break;

                   }

                   cout<<"�����ż���������";

                   cin>>n;

         }

         cout<<"������ɣ���������˳�...."<<endl;

} 

