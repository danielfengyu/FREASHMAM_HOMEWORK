using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P13_2
{
    public delegate int AriDelegate(int x,int y);
    class Program
    {
        static void Main(string[] args)
        {
            int a = 5, b = 10;
            AriDelegate dg1 = delegate(int x, int y)
            {
                return x + y;
            };
            Console.WriteLine("{0}+{1}={2}",a,b,dg1(a,b));
            dg1 = delegate(int x, int y)
            {
                return x << y;
            };
            Console.WriteLine("{0}<<{1}={2}",a,b,dg1(a,b));
        }
    }
}
