using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P5_4
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("输入三角形边长：");
            int n;
            int.TryParse(Console .ReadLine (),out n);
            if (n <= 0)
                return;
            int[,] a = new int[n, n];
            a[0,0] = 1;
            a[0, 1] = 1;
            for (int i = 1; i < n - 1; i++)
            {
                a[i, 0] = 1;
                a[i, i + 1] = 1;
                for (int j = 1; j < i + 1; j++)
                    a[i, j] = a[i - 1, j - 1] + a[i - 1, j];
            }
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = 0; j <= i + 1; j++)
                {
                    Console.Write("{0}",a[i,j]);

                }
                Console.WriteLine();
            }
        }
    }
}
