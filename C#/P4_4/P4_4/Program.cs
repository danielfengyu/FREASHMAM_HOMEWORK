using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P4_4
{
    class Program
    {
        static void Main(string[] args)
        {
            short s1 = 10;
            ushort s2 = 10;
            Console.WriteLine((short) - s1);
            Console.WriteLine((ushort) -s2);
            int i1 = 10;
            int i2 = 10;
            Console.WriteLine(~i1 );
            Console.WriteLine(~i2 );

            long l1 = 10;
            ulong l2=10;
            Console.WriteLine(~l1);
            Console.WriteLine(~l2);
        }
    }
}
