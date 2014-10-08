using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P5_6
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("please input a string :");
            string text = Console.ReadLine();
            int i = 0;
            foreach (char ch in text)
            {
                if (ch == 'a')
                    i++;
            }
            Console.WriteLine("the char of a number:{0}",i );
        }
    }
}
