using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
namespace P16_3
{
    class Program
    {
        private static Thread t1, t2;
        static void Main(string[] args)
        {
            Console.WriteLine("主方法开始");
            t1 = new Thread(Method1);
            t2 = new Thread(Method2 );
            t1.Start();
            t2.Start();
            Console.WriteLine("主方法结束");
        }
        public static void Method1()
        {
            Console.WriteLine("线程1开始");
            for (int i = 0; i < 100; i++)
                Console.WriteLine("线程1：",+i);
            Console.WriteLine("线程1结束");
        }
        public static void Method2()
        {
            Console.WriteLine("线程2开始");
            for (int i = 100; i >= 0; i--)
                Console.WriteLine("线程2："+i);
            Console.WriteLine("线程2结束");
        }
    }
}
