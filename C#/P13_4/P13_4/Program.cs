using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P13_4
{
    public delegate int BiOperator(int x,int y);
    class Program
    {
        static void Main(string[] args)
        {
            int[] a = new int[10];
            Random rand = new Random();
            for (int i = 0; i < 10; i++)
            {
                a[i] = rand.Next(0,100);
                Console.Write(a[i].ToString ()+",");
            }
            Console.WriteLine("\n数组和：{0}",a.Cumulate((x,y)=>x+y));
            Console.WriteLine("数组积:{0}",a.Cumulate((x,y)=>x*y));
            Console.WriteLine("最大值:{0}", a.Cumulate((x, y) => x > y?x:y));
            Console.WriteLine("最小值:{0}", a.Cumulate((x, y) => x <y?x:y));
        }
        static int Cumulate(this int[] array, BiOperator op)
        {
            int s = array[0];
            for (int i = 1; i < array.Length; i++)
            {
                s = op(s,array[i]);
            }
            return s;
        }
    }
}
