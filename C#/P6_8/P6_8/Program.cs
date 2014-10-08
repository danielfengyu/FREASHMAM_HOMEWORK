using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P6_8
{
    class Program
    {
        static void Main(string[] args)
        {
            BankCard card1 = new BankCard("001",2300);
            BankCard card2 = new BankCard("002");
            card1.Remit(card1 ,1000);
            card1.Remit(card2,10);
            card1.Remit(card2, 400000);
        }
    }
    public class BankCard
    {
        private string id;
        private decimal money;
        public string Id
        {
            get { return this.id; }
        }
        public BankCard(string id, decimal money = 0)
        {
            this.id = id;
            this.money = money;
        }
        public void Deposit(decimal x)
        {
            this.money += x;

        }
        public bool Withdraw(decimal x)
        {
            if (this.money > x)
            {
                this.money -= x;
                return false;
            }
            else 
                return false;
        }
        public bool Remit(BankCard card1, decimal x)
        {
            if (card1 == this)
            {
                Console.WriteLine("不能像自身汇款！");
                return false;
            }
            if (this.Withdraw(x))
            {
                card1.Deposit(x);
                Console.WriteLine("成功汇款{0}元", x);
                return true;
            }
            else {
                Console.WriteLine("余额不足，汇款失败");
                return false;
            }
        }


    }
}
