using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Collections;
namespace P8_7
{
    class Program
    {
        static void Main(string[] args)
        {
            Stack st1 = new Stack();
            st1.Push(1);
            int x = 2, y;
            while (st1.Count < 20)
            {
                y = x + (int)st1.Peek();
                st1.Push(x);
                x = y;
            }
            foreach (object o in st1)
            {
                Console.Write(o);
                Console.Write(' ');
            }
        }
    }
}
