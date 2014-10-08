using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P10_1
{
    class Program
    {
        static void Main(string[] args)
        {
            int i1 = 5, i2 = 10;
            Swapper<int>.Swap(ref i1, ref i2);
            Console.WriteLine("i1={0},i2={1}",i1,i2);
            double d1 = 0.2, d2 = 0.6;
            Swapper<double>.Swap(ref d1,ref d2);
            Console.WriteLine("d1={0},d2={1}",d1,d2);
        }
    }
    public static class Swapper<T>
    {
        public static void Swap(ref T x, ref T y)
        {
            T tmp = x;
            x = y;
            y = tmp;
        }
    }
}
