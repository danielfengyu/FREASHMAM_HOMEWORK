using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P6_1
{
    class Program
    {
        static void Main(string[] args)
        {
            Contact c1 = new Contact("王晓明");
            c1.Output();
            Contact c2 = new Contact("张珊",false,"1888926841");
            c2.Output();
            Contact c3 = new Contact("王强", address :"贵州安顺");
            c3.Output();
        }
    }
    public class Contact
    {
        private string _name;
        private bool _bMan;
        private string _phone;
        private string _address;
        public Contact (string name ,bool bMan = true,string phone = "未知的",string address = "未知的")
    {
        _name = name;
        _bMan = bMan;
        _phone = phone;
        _address = address;
    }
        public void Output()
        {
            Console.WriteLine("{0},{1}",_name ,_bMan ?'男':'女');
            Console.WriteLine("电话：{0},地址：{1}\r\n",_phone ,_address );
        }
    }
}
