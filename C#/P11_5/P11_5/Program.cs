using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P11_5
{
    class Program
    {
        static void Main(string[] args)
        {
            bool?[] b = { null, false, true };
            for (int i = 0 i < 3; i++)
                for (int j = 0; j < 3; j++)
                {
                    Console.Write("{0}&{1}={2}", P(b[i]), P(b[j]), P(b[i] & b[j]));
                    Console.Write("{0}|{1}={2}", P(b[i]), P(b[j]), P(b[i] | b[j]));
                    Console.Write("{0}^{1}={2}", P(b[i]), P(b[j]), P(b[i] ^ b[j]));
                    Console.WriteLine();
                }
        }
        static string P(bool? b)
        {
            return (b != null) ? b.ToString() : "NULL";
        }
    }
}
