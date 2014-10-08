using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P5_2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("please input a number between 1 and 5 as the grade(exit when press x):");
            char ch = Console.ReadKey().KeyChar;
            while (ch != 'x' && ch != 'X')
            {
                switch (ch)
                { 
                    case '5':
                        Console.WriteLine("best");
                        break;
                    case '4':
                        Console.WriteLine("better");
                        break;
                    case '3':
                        Console.WriteLine("good");
                        break;
                    case '2':
                        Console.WriteLine("not pass");
                        break;
                    case '1':
                        Console.WriteLine("not pass");
                        break;
                    default :
                        Console.WriteLine("pleasse input a number between 1 and 5:");
                            break ;

                }
                Console .WriteLine ("please input the number of grade(exit when press X):");
                ch = Console.ReadKey().KeyChar;
            }
        }
    }
}
