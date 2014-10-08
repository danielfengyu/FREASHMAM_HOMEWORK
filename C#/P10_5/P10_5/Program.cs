using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P10_5
{
    class Program
    {
        static void Main(string[] args)
        {
            BankCard<RMB> card1 = new BankCard<RMB>("001",500);
            BankCard<Dollar> card2 = new BankCard<Dollar>("002",500);
            BankCard<Euro> card3 = new BankCard<Euro>("003", 500);
            card1.Query();
            card2.Query();
            card3.Query();
        }
    }
    public interface ICurrency
    {
        string Sym { get; }
        decimal Rate { get; }
    }
    public struct RMB : ICurrency
    {
        public string Sym { get { return "Y"; } }
        public decimal Rate { get { return 1.0M; } }
    }
    public struct Dollar : ICurrency
    {
        public string Sym { get { return "$"; } }
        public decimal Rate { get { return 6.7M; } }
    }
    public struct Euro : ICurrency
    {
        public string Sym { get { return "C"; } }
        public decimal Rate { get { return 9.2M; } }
    }
    public class BankCard<T> where T : ICurrency, new()
    {
        private string id;
        private decimal money;
        private T unit;
        public BankCard (string id,decimal money=0)
        {
            this.id =id ;
            this .money =money ;
            unit=new T();
        }
        public void Query()
        {
            Console.WriteLine("卡号{0}：余额{1}{2}",id,money ,unit.Sym );
            if (unit.Sym != "Y")
                Console.WriteLine("折合人民币{0}",money*unit.Rate );
        }
    }
}
