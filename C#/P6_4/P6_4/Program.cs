using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P6_4
{
    class Program
    {
        static void Main(string[] args)
        {
            Contact c1 = new Contact("赵丽");
            c1["BusiPhone"] = "010-1234567-301";
            c1["BUSIFAX"] = "010-1234567-302";
            c1["homephone"] = "010-1234567";
            c1.Output();
        } 
    }
    public class Contact
    {
        private string _name;
        private string _homePhone;
        private string _mobilePhone;
        private string _busiPhone;
        private string _busiFax;
        public string Name
        {
            get { return _name; }
        }
        public string this[string type]
        {
            get
            {
                switch (type.ToUpper())
                { 
                    case "HOMEPHONE":
                        return _homePhone;
                    case "MOBILEPHONE":
                        return _mobilePhone;
                    case "BUSIPHONE":
                        return _busiPhone;
                    case "BUSIFAX":
                        return _busiFax;
                    default:
                        return "暂无";
                }
            }
            set
            {
                switch (type.ToUpper())
                { 
                    case "HOMEPHOME":
                        _homePhone = value;
                        break;
                    case "MOBILEPHONE":
                        _mobilePhone = value;
                        break;
                    case "BUSIPHONE":
                        _busiPhone = value;
                        break;
                    case "BUSIFAX":
                        _busiFax = value;
                        break;

                }
            }
        }
        public Contact(string name)
        {
            _name = name;
        }
        public void Output()
        {
            Console.WriteLine(_name );
            Console.WriteLine("住宅电话：{0}",_homePhone );
            Console.WriteLine("手机：{0}",_mobilePhone );
            Console.WriteLine("办公室电话：{0}",_busiPhone);
            Console.WriteLine("办公室传真：{0}",_busiFax);
        }
    }
}
