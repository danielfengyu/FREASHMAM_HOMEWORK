using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P7_1
{
    class Program
    {
        static void Main(string[] args)
        {
            BankCard mer1 = new BankCard("001","888888",100000);
            PayCard cust1 = new PayCard("101", "123456", 2000);
            cust1.Pay(mer1,1000);
            cust1.Pay(mer1,1500);
            mer1.Query();
            cust1.Query();
        }
    }
    public class BankCard
    {
        protected string id;
        protected string password;
        protected decimal money;
        public decimal Money
        {
            get { return money; }
        }
        public BankCard(string id, string password, decimal money = 0)
        {
            this.id = id;
            this.money = money;
            this.password = password;
        }
        public void Deposit(decimal x)
        {
            money += x;
        }
        public bool Withdraw(decimal x)
        {
            Console.Write("please input password:");
            if (Console.ReadLine() !=this.password)
            {
                Console.WriteLine("password is wrong");
                return false;
            }
            if (money < x)
            {
                Console.WriteLine("card {0}has not enough money",id );
                return false;
            }
            money -= x;
            return true;
        }
        public void Query()
        {
            Console.WriteLine("card number{0}:lefting{1}",id ,money );
        }
    }
    public class PayCard : BankCard
    {
        public PayCard(string id, string password, decimal money = 0):base(id,password ,money )
        { 
        
        }
        public bool Pay(BankCard card1, decimal price)
        {
            if (!this.Withdraw(price))
                return false;
            card1.Deposit(price);
            Console.WriteLine("card{0}expense{1}",id,price );
            return true;
        }
    }
}
