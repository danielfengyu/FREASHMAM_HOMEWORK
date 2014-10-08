using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P4_7
{
    class Program
    {
        static void Main(string[] args)
        {
            BankCard c1 = new BankCard();
            Console.WriteLine("c1 is CreditCard:{0}",c1 is CreditCard);
            Console.WriteLine("c1 is BankCard:{0}",c1 is BankCard);
            Console.WriteLine("c1 is ILoan:{0}",c1 is ILoan);
            Console.WriteLine("c1 is IBank:{0}",c1 is IBank);
            c1 = new CreditCard();
            Console.WriteLine("c1 is CreditCard:{0}",c1 is CreditCard);
            Console.WriteLine("c1 is BankCard:{0}",c1 is BankCard);
            Console.WriteLine("c1 is ILoan:{0}",c1 is ILoan);
            Console.WriteLine("c1 is IBank:{0",c1 is IBank);
        }
    }
    interface IBank { }
    interface ILoan { }
    class BankCard : IBank { }
    class CreditCard : BankCard, ILoan { }
}
