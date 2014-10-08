using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P5_7
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] a = new int[,] { {0,0,1,1},{1,1,2,2},{2,3,4,5}};
            Console.WriteLine("array a:");
            foreach (int x in a)
            {
                Console.Write(x);
                Console.Write(' ');
            }
            int[][] b = new int[3][];
            b[0] = new int[] { 0, 0, 1, 1 };
            b[1] = new int[] { 1, 1, 2, 2 };
            b[2] = new int[] { 2, 3, 4, 5 };
            Console.WriteLine("\r\narray b:");
            foreach (int[] c in b)
            {
                foreach (int x in c)
                {
                    Console.Write(x);
                    Console.Write(' ');
                }
                Console.WriteLine();
            }
        }
    }
}
