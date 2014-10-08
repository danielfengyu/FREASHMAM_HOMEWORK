using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P4_9
{
    class Program
    {
        static void Main(string[] args)
        {
            Contact c1 = new Contact {name = "王晓明",gender = true,age = 18};
            Contact c2 = c1;
            c2 .Print ();
            c1.age = 20;
            c2.Print();
            c1 = new Contact (){name = "张珊",gender = false,age =15};
            c2.Print();
        }
    }
    class Contact
    {
        public string name;
        public bool gender;
        public int age;
        public void Print()
        {
            Console.WriteLine("{0}{1}{2岁", name, gender ? '男' : '女', age);
        }
    }
}
