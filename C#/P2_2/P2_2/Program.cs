using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P2_2
{
    class Program
    {
        static void Main(string[] args)
        {
            int x1 = 2147483647;
            uint x2 = 4294967295;
            x1 = x1+ 1;
            x2 = x2 + 1;
            Console.WriteLine(x1);
            Console.WriteLine(x2);

        }
    }
}
