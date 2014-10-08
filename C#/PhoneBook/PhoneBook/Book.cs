using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace PhoneBook
{
   //实体类
    public class Book
    {
        private string name;//姓名

        public string Name
        {
            get { return name; }
            set { name = value; }
        }
        private string phoneType;//型号

        public string PhoneType
        {
            get { return phoneType; }
            set { phoneType = value; }
        }
        private string phoneNumber;//电话号码

        public string PhoneNumber
        {
            get { return phoneNumber; }
            set { phoneNumber = value; }
        }
        public Book() { }
        public Book(string name, string phoneType, string phoneNumber)
        {
            this.Name = name;
            this.PhoneType = phoneType;
            this.PhoneNumber = phoneNumber;
        }
    }
}
