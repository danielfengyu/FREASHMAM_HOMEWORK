using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
namespace P15_3
{
    class Program
    {
        static void Main(string[] args)
        {
            FileStream fs = new FileStream("F:\\MyFile.txt",FileMode.Create);
            string str = "welcome to the Garden!";
            byte[] buffer = new byte[str.Length];
            for (int i = 0; i < str.Length; i++)
                buffer[i] = (byte)str[i];
            fs.Write(buffer,0,buffer.Length );
            StringBuilder sb = new StringBuilder();
            fs.Seek(0,SeekOrigin.Begin);
            for (int i = 0; i < str.Length ; i++)
                sb.Append((char)fs.ReadByte());
            Console.WriteLine("读取的内容为：{0}",sb.ToString ());
            Console.WriteLine("文件长度为：{0}",fs.Length );
            fs.Close();
        }
    }
}
