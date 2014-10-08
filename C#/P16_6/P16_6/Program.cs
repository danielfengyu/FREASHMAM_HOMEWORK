using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
namespace P16_6
{
    class Program
    {
        static void Main(string[] args)
        {
            TicketAgency ta = new TicketAgency();
            Thread[] ts = new Thread[4];
            for (int i = 0; i < 4; i++)
            {
                ts[i] = new Thread(new ThreadStart (ta.RandomSell ));
                ts[i].Name = "窗口" + i;
                ts[i].Start();
            }
        }
    }
    public class TicketAgency
    {
        private int num = 0;
        private Random rand = new Random();
        public void Sell()
        {
            lock (this)
            {
                if (num < 66)
                {
                    int tmp = num + 1;
                    Thread.Sleep(1);
                    num = tmp;
                    Console.WriteLine("{0}售出{1}号车票", Thread.CurrentThread.Name, tmp);
                }
                else
                    Console.WriteLine("{0}:车票已售罄", Thread.CurrentThread.Name);
            }
        }
        public void RandomSell()
        {
            int time = rand.Next(20);
            for(int i=0;i<20;i++)
            {
                Thread .Sleep (time);
                this.Sell ();
            }
        }
    }
}
