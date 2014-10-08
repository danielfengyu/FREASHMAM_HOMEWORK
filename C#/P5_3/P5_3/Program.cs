using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P5_3
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("请输入计算项数：");
            uint n = uint.Parse(Console .ReadLine());
            double e = 1;
            uint i = 1;
            do
            {
                e += 1.0 / Fac(i);
                i++;
            }
            while (i < n);
            Console .WriteLine("自然对数e的近似值为"+e);

        }
        public static ulong Fac(uint x)
        {
            ulong result = 1;
            do 
            {
                result *=x--;

            }
            while (x>1);
            return result ;
        }
    }
}
