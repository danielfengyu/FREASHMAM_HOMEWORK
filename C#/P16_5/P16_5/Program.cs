using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
namespace P16_5
{
    class Program
    {
        static void Main(string[] args)
        {
            int count = 0;
            Thread[] ts = new Thread[4];
            for (int i = 0; i < 4; i++)
            {
                ts[i] = new Thread(delegate()
                    {
                        try
                        {
                            Console.WriteLine("{0}开始于{1}", Thread.CurrentThread.Name, count);
                            for (int j = 0; j < 100; j++)
                            {
                                Console.WriteLine("{0}:{1}", Thread.CurrentThread.Name, count++);
                                Thread.Sleep(1);

                            }
                            Console.WriteLine("{0}退出与{1}", Thread.CurrentThread.Name, count);
                        }
                        catch (ThreadAbortException) {
                            Console.WriteLine("{0}终止于{1}",Thread.CurrentThread .Name ,count);
                        }
                    });
                ts[i].Name = "线程" + i;
                ts[i].Start();
                Thread.Sleep(10);
            }
            ts[3].Abort();
            ts[2].Abort();
            ts[1].Join();
            ts[0].Join();
            Console.WriteLine("所有线程执行完毕");
        }
    }
}
