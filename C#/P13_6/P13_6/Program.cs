using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P13_6
{
    class Program
    {
        static void Main(string[] args)
        {
            const double o = Math.PI / 180;
            double x = o;
            double y = Math.Sqrt(1 - o * o);
            Func<double> fSin = () => (x + (o * y)) < 1 ? x += (o * y) : x = 1;
            Func<double> fCos = () => { return y = Math.Sqrt(1 - x * x); };
            Console.WriteLine("     Program     Math");
            for (int i = 1; i <= 45; i++)
            {
                Console.WriteLine("Sin{0}={1:f6},{2:f6}",i,x,Math.Sin(o*i));
                Console.WriteLine("Cos{0}={1:f6,{2:f6}}",i,y,Math.Cos (o*i));
                fSin();
                fCos();
            }
        }
    }
}
