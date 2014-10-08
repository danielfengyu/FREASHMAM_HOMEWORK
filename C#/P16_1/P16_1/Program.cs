using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Diagnostics;
namespace P16_1
{
    class Program
    {
        static void Main(string[] args)
        {
            OutputProcessInfo(Process .GetCurrentProcess ());
            Process p = Process.Start("Winword");
            p.WaitForExit(500);
            OutputProcessInfo(p);
        }
        public static void OutputProcessInfo(Process p)
        {
            Console.WriteLine("进程{0} ID{1}:",p.ProcessName ,p.Id );
            Console.WriteLine("启动时间"+p.StartTime);
            Console.WriteLine("基本优先级"+p.BasePriority );
            Console.WriteLine("专用类存{0}K",p.PrivateMemorySize64/1024);
            Console.WriteLine("使用物理类存{0}K",p.WorkingSet64 /1024);
            Console.WriteLine("使用虚拟内存{0}K",p.VirtualMemorySize64 /1024);
            Console.WriteLine("使用分页内存{0}K",p.PagedMemorySize64/1024);
            Console.WriteLine("使用非分页内存{0}K",p.NonpagedSystemMemorySize64/1024);
            
        }
    }
}
