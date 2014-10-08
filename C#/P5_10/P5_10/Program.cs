using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P5_10
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("please input a integer:");
            ulong n = ulong.Parse(Console .ReadLine ());
            if (IsPrime(n))
                Console.WriteLine("{0}is a prime", n);
            else
                Console.WriteLine("{0}is not a prime",n);
        }
        public static bool IsPrime(ulong n)
        { 
            for(ulong i= 2; i<=n/2;i++)
                if(n%i==0)
                    return false;
            return true;
        }
    }
}
