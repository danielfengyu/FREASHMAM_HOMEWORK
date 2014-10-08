#define ShowDetail
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P18_2
{
    class Program
    {
        static void Main(string[] args)
        {
            int n;
            do{
                Console .Write ("请输入1~50之间的一个数：");
            }
            while(!int.TryParse (Console .ReadLine (),out n)||n<1||n>50);
            if(n==1)
            {
                Console .WriteLine ("FB(1)=1");
                return;
            }
            long x=1,y=2,tmp;
#if(ShowDetail)
            {
                for(int i=1;i<n-1;i++)
            {
                tmp=y;
                y=y+x;
                Console .WriteLine ("FB({0})={1}+{2}={3}",i+2,x,tmp,y);
                    x=tmp;
            }
            }
#else
            {
                for(int i=1;i<n-1;i++)
                {
                    tmp=y;
                    y=y+x;
                    x=tmp;
                }
            }
#endif
            Console .WriteLine ("运算结果：FB({0})={1}",n,y);
        }
    }
}
