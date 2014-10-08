using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P2_8
{
    delegate int Fun(int x);
    class Program
    {
        static void Main(string[] args)
        {
            h(f,g,10);

        }
        static int f(int x)
        {
            return 3 * x;
        }
        static int g(int x)
        {
            return x * x;
        }
        static void h(Fun f, Fun g, int x)
        {
            Console.WriteLine("(f.f) {0}={1}",x,f(f(x)));
            Console.WriteLine("(g.g) {0}={1}", x, g(g(x)));
            Console.WriteLine("(f.g) {0}={1}", x, f(g(x)));
            Console.WriteLine("(g.f) {0}={1}", x, g(f(x)));
        }
    }
}
