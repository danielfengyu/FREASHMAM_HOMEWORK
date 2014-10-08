using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Address = System.Tuple<string, string, string, int>;
namespace P11_1
{
   static  class Program
    {
        static void Main(string[] args)
        {
            Contact c1 = new Contact("陈洋洋");
            c1.Phone = "025-3333255100";
            c1.Address = new Address("JS","NJ","YHT",15);
            c1.Output();
        }
        public static void Output(this Address ad)
        {
            Console.WriteLine("{0}省{1}市{2}路{3}号",ad.Item1,ad.Item2,ad.Item3,ad.Item4);
        }
    }
    public class Contact
    {
        private string name;
        public string Name
        {
            get { return name; }
        }
        public string Phone { get; set; }
        public Address Address { get; set; }
        public Contact(string name)
        {
            this.name = name;
        }
        public void Output()
        {
            Console.WriteLine("{0}({1})",name,Phone);
            Console.Write("地址：");
           Address.Output();
        }
    }
}
