using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P6_2
{
    class Program
    {
        static void Main(string[] args)
        {
            BankCard card1 = new BankCard (50);
            BankCard card2 = new BankCard (100);
            card2 = new BankCard (200);
        }
    }
    public class BankCard
    {
        private string _id;
        private decimal _money;
        private static int _objects = 0;
        private static int _classes = 0;
        public  BankCard(decimal money)
        {
            _money = money;
            _objects ++;
            Console .WriteLine ("对象数量：",+_objects );
            _id =_objects .ToString ();
        }
        ~BankCard ()
        {
            _objects --;
        }
        static BankCard()
        {
            _classes ++;
            Console .WriteLine ("类的数量：",+_classes );
        }
    }
}
