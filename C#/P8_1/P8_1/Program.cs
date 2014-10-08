using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P8_1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("请输入一个角度：");
            double d = double.Parse(Console.ReadLine());
            double r = d * Math.PI / 180;
            Console.WriteLine("sin({0}°)={1:f2}",d,Math .Sin(r));
            Console.WriteLine("cos({0}°)={1:f2}", d, Math.Cos(r));
            Console.WriteLine("tan({0}°)={1:f2}", d, Math.Tan(r));
            Console.Write("请输入一个实数：");
            d = double.Parse(Console.ReadLine());
            r = 180.0 / Math.PI;
            Console.WriteLine("sin({0:f2})={1}", Math .Asin (d)*r,d);
            Console.WriteLine("cos({0:f2})={1}", Math.Acos(d) * r, d);
            Console.WriteLine("tan({0:f2})={1}", Math.Atan(d) * r, d);
        }
    }
}
