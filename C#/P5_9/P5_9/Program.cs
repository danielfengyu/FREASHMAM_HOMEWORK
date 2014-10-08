using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P5_9
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("please input a string:");
            string str = Console.ReadLine();
            if (str == "")
                return;
            Console.Write(str[0]);
            int i = 0;
            while (i < str.Length)
            {
                if (str[i++] == str[i])
                    continue;
                else
                    Console.Write(str[i]);
            }
        }
    }
}
