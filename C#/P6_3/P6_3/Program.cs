using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P6_3
{
    class Program
    {
        static void Main(string[] args)
        {
            BankCard card1 = new BankCard("001","888888");
            card1.Deposit(800);
            Console.WriteLine("余额{0}",card1.Money);
        }
    }
    public class BankCard
    {
        private string id;
        private string password;
        private decimal money;
        public string Id
        {
            get
            {
                return id;
            }
        }
        public decimal Money
        {
            get
            {
                Console.Write("请输入密码：");
                if (Console.ReadLine() != password)
                {
                    Console.WriteLine("密码错误");
                    return 0;
                }
                else return money;
            }
        }
        public BankCard(string s, string p)
        {
            id = s;
            password = p;
        }
        public void Deposit(decimal x)
        {
            money += x;
        }
    }
}
