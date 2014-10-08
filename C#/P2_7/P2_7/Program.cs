using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P2_7
{
    class Program
    {
        static void Main(string[] args)
        {
            BankCard c1 = new BankCard() { money = 500};
            c1.Pay(1000);
            c1.Deposit(600);
            c1.Pay(1000);
        }
    }
    interface IPay
    {
        bool Pay(decimal price);
    }
    interface IBankCard : IPay 
    {
        void Deposit(decimal price);
        bool Withdraw(decimal price);
    }
    class BankCard : IBankCard
    {
        public decimal money;
        public void Deposit(decimal x)
        {
            money = money + x;

        }
        public bool Withdraw(decimal x)
        {
            if (money > x)
            {
                money = money - x;
                return true;
            }
            else
                return false;
        }
        public bool Pay(decimal price)
        {
            if (money >= price)
            {
                money = money - price;
                Console.WriteLine("成功购买{0}元商品", price);
                return true;
            }
            else
            {
                Console.WriteLine("金额不足");
                return false;
            }
        }
  
    }
    
     
    
}
