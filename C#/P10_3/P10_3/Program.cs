using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P10_3
{
    class Program
    {
        static void Main(string[] args)
        {
            BankCard<RMB> c1 = new BankCard<RMB>();
            BankCard<RMB> c2 = new BankCard<RMB>();
            BankCard <Dollar > c3=new BankCard<Dollar>();
        }
    }
    public struct RMB
    {
        public decimal Rate { get { return 1.0M; } }
    }
    public struct Dollar
    {
        public decimal Rate { get { return 6.7M; } }
    }
    public class BankCard<T>
    {
        private string id;
        private decimal money;
        private static int objects = 0, classes = 0;
        public BankCard(decimal money = 0)
        {
            this.money = money;
            objects++;
            Console.WriteLine("Card<{0}>对象数量：{1}",typeof(T),objects );
            id = objects.ToString();
        }
        ~BankCard() { objects--; }
        static BankCard()
        {
            classes++;
            Console.WriteLine("Card<{0}>类的数量：{1}",typeof(T),classes);
        }
    }
}
