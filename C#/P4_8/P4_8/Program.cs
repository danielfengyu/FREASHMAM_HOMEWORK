using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P4_8
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("please input a year:");
            int year = Int32.Parse(Console .ReadLine());
            if ((year % 400) == 0 || ((year % 4) == 0 && (year % 100) != 0))
                Console.WriteLine("{0}年是闰年",year );
            else 
                Console .WriteLine ("{0}年不是闰年", year);

        }
    }
}
