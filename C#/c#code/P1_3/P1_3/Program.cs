using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P1_3
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("你好，");
            if(args.Length == 1)
            Console.WriteLine(args[0]);
            if (args.Length > 1)
                Console.WriteLine(args [0] +"和"+args[1]);
        }
    }
}
