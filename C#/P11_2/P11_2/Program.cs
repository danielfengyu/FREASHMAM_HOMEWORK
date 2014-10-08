using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P11_2
{
    class Program
    {
        static void Main(string[] args)
        {
            double[] x = { 0,-2,-4,5,3,1};
            Tuple<double, double, double> r = Summary(x);
            Console.WriteLine("Max:{0},Min:{1},Avg:{2}",r.Item1 ,r.Item2,r.Item3);
        }
        public static Tuple<double, double, double> Summary(double[] array)
        {
            double a = array[0], b = array[0], c = array[0];
            for (int i = 1; i < array.Length; i++)
            {
                if (a < array[i])
                    a = array[i];
                if (b > array[i])
                    b = array[i];
                c += array[i];
            }
            return new Tuple<double, double, double>(a, b, c / array.Length);
        }
    }
}
