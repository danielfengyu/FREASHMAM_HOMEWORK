using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P11_4
{
    class Program
    {
        static void Main(string[] args)
        {
            Student s1 = new Student() { Name = "你爹" };
               s1 .Output ();
            Student s2=new Student (){Name="你妹",Gender =false ,Grade =2,Class =1};
            s2.Output ();
        }
    }
    public class Student
    {
        public string Name;
        public bool? Gender;
        public DateTime?Birthday;
        public int ?Grade;
        public int ?Class;
        public void Output()
        {
            Console.Write("姓名：{0}\n",(Name !=null )?Name :"未知");
            if (Gender == null)
            {
                Console.Write("性别未知\n");

            }
            else
                Console.Write("性别：{0}\n",(Gender == true )?'男':'女');
            if (Birthday == null)
                Console.Write("生日未知\n");
            else
                Console.Write("生日：{0}\n",Birthday );
            if (Grade != null && Class != null)
                Console.WriteLine("{0}年级{1}班\n", Grade, Class);
            else
                Console.WriteLine("班级未知\n");
        }
    }
}
