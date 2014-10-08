using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P4_3
{
    class Program
    {
        static void Main(string[] args)
        {
            float x=-0.3F;
            Console.WriteLine(x++);
            Console.WriteLine(++x);
            Console.WriteLine(x--);
            Console.WriteLine(--x);
            char ch = 'Z';
            Console.WriteLine(--ch);
            Console.WriteLine(ch --);
            Console.WriteLine(ch );
        }
    }
}
