using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P3_7
{
    class Program
    {
        static void Main(string[] args)
        {
            BankCard c1=new BankCard(){id="001",money = 500};
            EditCard (c1);
            c1 .Query ();
            ChangeCard (ref c1);
            c1.Query ();
        }
        static void EditCard(BankCard c)
        { 
            c.money=1000;
            c= new BankCard (){id="002"};
        }
        static void ChangeCard(ref BankCard c)
        { 
            c= new BankCard (){id ="002"};
        
        }
    }
    class BankCard
    {
        public string id;
        public decimal money = 0;
        public void Query()
        {
            Console.WriteLine("卡号{0} 余额{1}",id ,money);
        }
    }
}
