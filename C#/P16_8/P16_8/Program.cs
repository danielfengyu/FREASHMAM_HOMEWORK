using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
namespace P16_8
{
    class Program
    {
        static void Main(string[] args)
        {
            FileStream fs1 = new FileStream("C:\\log_client.txt",FileMode.Open ,FileAccess .Read );
            byte[]bs=new  byte [1000];
            for (int i = 0; i < 10; i++)
            {
                fs1.BeginRead(bs,i*100,100,GetPosition,fs1);

            }
            StringBuilder sb1 = new StringBuilder();
            for (int i = 0; i < 100; i++)
            {
                sb1.Append((char)i);
            }
            fs1.Close();
            Console.WriteLine(sb1.ToString ());
        }
        static void GetPosition(IAsyncResult ar)
        {
            FileStream fs = (FileStream)ar.AsyncState;
            Console.WriteLine("本次读取文件位置：{0}",fs.Position );
            fs.EndRead(ar);
        }
    }
}
