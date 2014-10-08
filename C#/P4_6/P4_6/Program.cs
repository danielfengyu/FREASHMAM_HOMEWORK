using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P4_6
{
    class Program
    {
        static void Main(string[] args)
        {
            double x = double.PositiveInfinity, y = -x, z = x + y;
            Compare(x, y);
            Compare(x,-y);
            Compare(0,z);
            Compare(z,z);
        }
        static void Compare(double x, double y)
        {
            Console.WriteLine("{0}=={1}:{2}",x,y,x==y);
            Console.WriteLine("{0}!={1}:{2}",x,y,x!=y);
            Console .WriteLine("{0}>{1}:{2}",x,y,x>y);
            Console.WriteLine("{0}<{1}:{2}",x,y,x<y);
        }
    }
}
