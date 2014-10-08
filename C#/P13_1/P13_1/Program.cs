using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P13_1
{
    public delegate int AriDelegate(int x,int y);
    class Program
    {
        static void Main(string[] args)
        {
            int a=5,b=10;
            AriDelegate dg1=new AriDelegate (Add);
            Console .WriteLine ("{0}+{1}={2}",a,b,dg1(a,b));
            dg1=new AriDelegate (LMove);
            Console .WriteLine ("{0}<<{1}={2}",a,b,dg1(a,b));
        }
        static int Add(int x,int y)
        {
            return x+y;
        }
        static int LMove(int x,int y)
        {
            return x<<y;
        }
    }
}
