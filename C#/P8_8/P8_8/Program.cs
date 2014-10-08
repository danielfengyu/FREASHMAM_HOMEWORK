using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Reflection;
namespace P8_8
{
    class Program
    {
        static void Main(string[] args)
        {
            Complex c = new Complex();
            c.GetType().PrintTypeInfo();
            typeof(Contact).PrintTypeInfo();
        }
        static void PrintTypeInfo(this Type t)
        {
            Console.Write(t.Name );
            Console.WriteLine(t.IsValueType?"结构":"类");
            Console.WriteLine("字段");
            foreach (FieldInfo f in t.GetFields())
            {
                Console.WriteLine("{0}:{1}",f.Name ,f.FieldType);
            }
            Console.WriteLine("属性");
            foreach (PropertyInfo p in t.GetProperties())
            {
                Console.Write("{0}:{1}",p.Name ,p.PropertyType );
                Console.Write(p.CanRead ?"get":"");
                Console.WriteLine(p.CanWrite?"set":" ");
            }
            Console.WriteLine("方法：");
            foreach (MethodInfo m in t.GetMethods())
            {
                if (m.IsPublic && !m.IsSpecialName)
                    Console.WriteLine("{0}:{1}",m.Name ,m.ReturnType);
            }
            Console.WriteLine();
        }
    } 
    public struct Complex
    {
        public double a;
        public double b;
        public override string ToString()
        {
            return string.Format ("{0}+{1}i",a,b);

        }
        public static Complex operator +(Complex c1, Complex c2)
        {
            return new Complex() { a = c1.a + c2.a, b = c1.b + c2.b };
        }
        public static Complex Parse(string s)
        {
            if (s == null)
            {
                throw new ArgumentNullException();
            }
            int pos = s.IndexOf('+');
            if (pos == -1 || s[s.Length - 1] != 'i')
            {
                throw new FormatException("输入的字符串格式不正确");
            }
            double a1 = double.Parse(s.Substring(0, pos));
            double b1 = double.Parse(s.Substring(pos + 1, s.Length - pos - 2));
            return new Complex { a = a1, b = b1 };
        }
    }
    class Contact
    {
        private string _name;
        private string Name
        {
            get { return _name; }
        }
        public string Phone { get; set; }
        public string Address { get; set; }
        public Contact(string name)
        {
            _name = name;
        }
    }
}
