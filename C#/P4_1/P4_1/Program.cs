using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P4_1
{
    class Program
    {
        static void Main(string[] args)
        {
            double x1 = 1.0 / 0;
            double x2 = -1.0 / 0;
            double x3 = 0.0 / 0;
            Console.Write("1.0/0 = {0}",x1);
            Console.Write("-1.0/0={0}",x2);
            Console.WriteLine("0.0/0={0}\n",x3);
            BasicCompute(0,x1 );
            BasicCompute(0, x2);
            BasicCompute(0, x3);
            BasicCompute(x1 , x1);
            BasicCompute(x1, x2);
        }
        static void BasicCompute(double x1, double x2)
        {
            Console.Write("{0}+{1}={2};",x1 ,x2 ,x1+x2  );
            Console.WriteLine("{0}-{1}={2};",x1,x2,x1+x2 );
            Console.Write("{0}*{1}={2};",x1,x2,x1*x2 );
            Console.WriteLine("{0}/{1}={2}\n",x1,x2,x1/x2);
        }
    }
}
