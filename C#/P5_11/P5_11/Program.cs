using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P5_11
{
    class Program
    {
        static void Main(string[] args)
        {
        start:
            Console.WriteLine("please input the number of ID:");
        string s = Console.ReadLine();
        if (s.Length != 15 && s.Length != 18)
            goto error;
        if ((s.Length == 15 && s[14] % 2 == 0) || (s.Length == 18 && s[16] % 2 == 0))
            Console.WriteLine("gender is female");
        else
            Console.WriteLine("gender is male");
        return;
    error:
        Console.WriteLine("Length is not true");
    goto start;


        }
    }
}
