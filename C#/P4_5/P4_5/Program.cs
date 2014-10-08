using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P4_5
{
    class Program
    {
        static void Main(string[] args)
        {
            MoveBit(16,1);
            MoveBit(16,3);
            MoveBit(16,5);
            MoveBit(16,7);
        }
        static void MoveBit(int x, int y)
        {
            Console.Write("{0}<<{1}={2}",x,y,x<<y);
            Console.Write("{0}>>{1}={2}",x,y,x>>y);
            Console.Write("{0}<<{1}={2}",-x,y,-x<<y);
            Console.Write("{0>>{1}={2}",-x,y,-x>>y);
        }
    }
}
