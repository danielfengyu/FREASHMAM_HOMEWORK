using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
namespace P15_4
{
    class Program
    {
        static void Main(string[] args)
        {
            StreamReader sr = new StreamReader("F:\\MyFile.txt");
            Console.WriteLine("CanRead:{0}",sr.BaseStream .CanRead );
            Console.WriteLine("CanWrite:{0}",sr.BaseStream .CanWrite );
            sr.Close();
            StreamWriter sw = new StreamWriter("F:\\MyFile.txt");
            Console.WriteLine("CanRead:{0}",sw.BaseStream .CanRead );
            Console.WriteLine("CanWrite:{0}",sw.BaseStream .CanWrite );
            sw.Close();
        }
    }
}
