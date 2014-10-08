using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P5_1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("please input a number bettween 1 and 5:");
            int x = int .Parse (Console .ReadLine ());
            switch (x)
            {
                case 5:
                    Console .WriteLine("best");
                    break;
                case 4:
                    Console .WriteLine ("better");
                    break;
                case 3:
                    Console .WriteLine("good");
                    break;
                default :
                    Console .WriteLine ("不及格");
                    break;
            }
        }
    }
}
