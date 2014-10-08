using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
namespace P15_5
{
    class Program
    {
        static void Main(string[] args)
        {
            Stream s = File.Open("F:\\bootlog.txt", FileMode.Open ,FileAccess .Read );
            StreamReader sr = new StreamReader(s );
            sr.ReadLine();
            s.Seek(5,SeekOrigin.Begin);
            Console.WriteLine(sr);
            s.ReadByte();
            s.Read(new byte[20], 6, 10);
            s.Seek(-3,SeekOrigin.Current);
            s.Close();
        }
    }
}
