using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P13_5
{
    class Program
    {
        static void Main(string[] args)
        {
            int x = 0;
            Func<int, int> f = new Func<int, int>(Add);
            Console.WriteLine(f(x));
            Console.WriteLine(x);
            Console.WriteLine(f(x));
            Console.WriteLine(x);
            f=delegate {return ++x;};
            Console .WriteLine (f(x));
            Console .WriteLine (x);
            Console .WriteLine(f(x));
            Console .WriteLine (x);

        }
        public static int Add(int x)
        {
            return ++x;
        }
    }
}
