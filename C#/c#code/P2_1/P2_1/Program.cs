using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P2_1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("整数类型的取值范围：");
            Console.Write("byte:{0}~{1}",Byte.MinValue,Byte.MaxValue );
            Console.WriteLine("sbyte:{0}~{1}", SByte.MinValue,SByte .MaxValue);
            Console.Write("ushort:{0}~{1}",UInt16.MinValue,UInt16.MaxValue);
            Console.WriteLine("short:{0}~{1}", Int16.MinValue,Int16.MaxValue);
            Console.Write("uint:{0}~{1}",UInt32.MinValue,UInt32.MaxValue);
            Console.WriteLine("int:{0}~{1}",Int32.MinValue,Int32.MaxValue);
            Console.Write("ulong:{0}~{1}",UInt64.MinValue,UInt64.MaxValue);
            Console.WriteLine("long:{0}~{1}",Int64.MinValue,Int64 .MaxValue);
            Console.WriteLine();
        }
    }
}
