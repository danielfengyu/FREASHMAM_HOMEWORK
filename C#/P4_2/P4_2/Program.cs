using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P4_2
{
    class Program
    {
        delegate void FunCompute(int x, int y);
        static void Main(string[] args)
        {
            FunCompute f = Div;
            f(100,15);
            f = f+Mod;
            f(100,15);
            f = f - Div;
            f(100,15);
        }
        static void Div(int x, int y)
        {
            Console.WriteLine("{0}/{1}={2}",x,y,x/y);

        }
        static void Mod(int x, int y)
        {
            Console.WriteLine("{0}%{1}={2}",x,y,x%y);
        }
    }
}
