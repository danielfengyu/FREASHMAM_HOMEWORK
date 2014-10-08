using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Collections;
namespace P8_6
{
    class Program
    {
        static void Main(string[] args)
        {
            Queue que1 = new Queue();
            que1.Enqueue(new DateTime(2013, 10, 26));
            que1.Enqueue("好日子");
            que1.Enqueue("26");
            que1.Enqueue(new DateTime(2013, 10, 31));
            que1.Enqueue("更好的日子");
            que1.Enqueue(28);
            que1.Enqueue(new DateTime (2013,11,11));
            que1.Enqueue("not good day");
            que1.Enqueue(30);
            while (que1.Count > 0)
            {
                DateTime dt1 = (DateTime)que1.Dequeue();
                Console.Write(dt1.ToLongDateString());
                Console.Write(que1.Dequeue());
                Console.WriteLine("放假"+que1 .Dequeue ());
            }
        }
    }
}
