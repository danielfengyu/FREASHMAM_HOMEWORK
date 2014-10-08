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

                   int search(const T &x)const; //不加const 出错

                   int locate(int i)const;

                   bool getdata(int i,T& x)const

                   {if(i>0&&i<=last+1) {x=data[i-1];return true;}else return false;}

                   void setdata(int i,T &x)

                   {if(i>0&&i<=last+1) data[i-1]=x;}

                   bool insert(int i,const T& x);  //T &x前面不加const 会出错

                   bool remove(int i,T &x);

                   bool isempty()const{return (last==-1)?true:false;}

                   bool isfull(){return (last==maxsize-1)?true:false;}

                   void input(); //实际可输入的个数比输入的数字多1个

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

                   {cerr<<"存储分配错误！"<<endl;exit(1);}

         }

}

template<class T>

seqlist<T>::seqlist(seqlist<T>& L)

{

         maxsize=L.size();

         last=L.length()-1;

         data=new T[maxsize];

         if(data==NULL)

         {cerr<<"存储分配错误！"<<endl;exit(1);}

         for(i=1;i<=last+1;i++)

                   data[i-1]=L.getdata(i);

}

template<class T>

void seqlist<T>::resize(int newsize)

{

         if(newsize<=0)

         {cerr<<"存储分配错误！"<<endl;exit(1);}

         if(newsize!=maxsize)

         {

                   T *newarray=new T[newsize];

                   if(newarray==Null)

                   {cerr<<"存储分配错误！"<<endl;exit(1);}

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

         cout<<"开始建立顺序表，请输入表中元素的个数：";

         while(1)

         {

                   cin>>last;

                   if(last<=maxsize-1) break;

                   cout<<"表元素个数输入有误，范围不能超过"<<maxsize-1<<":";

         }

         for(int i=0;i<last;i++)

         {        cout<<i+1<<endl;

                   cin>>data[i];

                  

         }

         cout<<"创建完毕！"<<endl;

         last--;

}

template<class T>

void seqlist<T>::output()

{

         cout<<"顺序表当前元素最后位置为："<<last<<endl;

         for(int i=0;i<=last;i++)

                   cout<<"#"<<i+1<<":"<<data[i]<<endl;

}



 //#include"seqlist.h"

void biao()

{

         cout<<"请输入相应序号进行操作："<<endl;

         cout<<"1查看线性表最大长度(size)"<<endl

                   <<"2查看数据长度(length)"<<endl

                   <<"3查找数据(search)"<<endl

                   <<"4定位数据(locate)"<<endl

                   <<"5输出指定数据内容(getdata)"<<endl

                   <<"6修改指定数据内容(setdata)"<<endl

                   <<"7插入数据(insert)"<<endl

                   <<"8删除指定数据(remove)"<<endl

                   <<"9判断表数否空(isempty)"<<endl

                   <<"10判断表是否满(isfull)"<<endl

                   <<"11创建顺序表(input)"<<endl

                   <<"12输出顺序表(output)"<<endl

                   <<"0退出"<<endl

                   <<"-1显示目录"<<endl;

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

                   case3:cout<<"输入要查找的数据：";cin>>i;cout<<"address="<<s.search(i)<<endl;break;

                   case 4:cout<<"输入要查找的位置：";cin>>i;cout<<"locate="<<s.locate(i)<<endl;break;

                   case 5:cout<<"输入要输出的数据位置：";cin>>i;s.getdata(i,x);cout<<"x="<<x<<endl;break;

                   case 6:cout<<"输入要修改的数据位置：";cin>>i;cout<<"输入要修改的数据值：";cin>>x;s.setdata(i,x);break;

                   case 7:cout<<"输入要插入的数据位置：";cin>>i;cout<<"输入要插入的数据值：";cin>>x;s.insert(i,x);break;

                   case 8:cout<<"输入要删除的数据位置：";cin>>i;s.remove(i,x);cout<<"你删除的数据值="<<x<<endl;break;

                   case 9:s.isempty()?cout<<"表为空":cout<<"表不为空";cout<<endl;break;

                   case 10:s.isfull()?cout<<"表满":cout<<"表未满";cout<<endl;break;

                   case 11:s.input();break;

                   case 12:s.output();break;

                   }

                   cout<<"输入编号继续操作：";

                   cin>>n;

         }

         cout<<"测试完成，按任意键退出...."<<endl;

} 

