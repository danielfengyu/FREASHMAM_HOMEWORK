using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P6_6
{
    class Program
    {
        static void Main(string[] args)
        {
            Prime p1 = new Prime(1);
            Prime p2 = new Prime(3);
            Console.WriteLine(p1 + p2);
            Console.WriteLine(p1-p2);
            Console.WriteLine(p1<p2);
            for (int i = 0; i < 20; i++)
            {
                Console.Write(p1++);
                Console.Write(' ');
            }
        }
    }
    public class Prime
    {
        private uint _value = 1;
        public Prime(uint value)
        {
            if (IsPrime(value))
                _value = value;
        }
        public static bool IsPrime(uint n)
        {
            for (uint i = 2; i <= n / 2; i++)
                if (n % i == 0)
                    return false;
            return true;
        }
        public static implicit operator uint ( Prime p)
        {
            return p._value;
        }
        public static uint operator +(Prime p1, Prime p2)
        {
            return p1._value + p2._value;
        }
        public static int operator -(Prime p1, Prime p2)
        {
            return (int)(p1._value - p2._value);

        }
        public static Prime operator ++(Prime p)
        {
            uint i = p._value+1;
            while (!IsPrime(i))
                i++;
            return new Prime(i);

        }
        public static Prime operator --(Prime p)
        {
            if (p._value == 1)
                return p;
            uint i = p._value - 1;

            while (!IsPrime(i))
                i--;
            return new Prime(i);
        }

    }
}
