using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Threading;

namespace P16_7
{
    class Program
    {
        static void Main(string[] args)
        {
            FileStream fs1 = new FileStream("C:\\log_client.txt",FileMode.Open ,FileAccess .Read );
            byte[] bs = new byte[20000];
            //fs1.Read(bs,0,20000);
            IAsyncResult ar = fs1.BeginRead(bs,0,20000,null,null);
            long pos1 = fs1.Position;
            StringBuilder sb1 = new StringBuilder();
            for (int i = 0; i < 100; i++)
            {
                sb1.Append((char)i);
            }
            long pos2 = fs1.Position;
            fs1.EndRead(ar);
            long pos3 = fs1.Position;
            fs1.Close();
            Console.WriteLine("开始生成字符串：{0}",pos1);
            Console.WriteLine("结束生成字符串：{0}",pos2 );
            Console.WriteLine("结束文件读取：{0}",pos3);
        }
    }
}
