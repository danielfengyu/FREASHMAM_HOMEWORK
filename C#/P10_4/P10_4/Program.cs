using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P10_4
{
    class Program
    {
        static void Main(string[] args)
        {
            CzRelation<int, string[]> tb = new CzRelation<int, string[]>(6);
            for (int i = 0; i < 6; i++)
                tb.Left[i] = i * 10 + 1;
            tb.Right[0] = new string[] { "BJ","TSB","SYB"};
            tb.Right[1] = new string[] { "BJ","BDH","SZB","JZN","SYB"};
            tb.Right[2] = new string[] { "BJ", "BDH", "SZB", "JZN", "SYB" };
            tb.Right[3] = new string[] { "BJ", "BDH", "SZB", "JZN", "SYB" };
            tb.Right[4] = new string[] { "BJ", "BDH", "SZB", "JZN", "SYB" };
            tb.Right[5] = new string[] { "BJ", "BDH", "SZB", "JZN", "SYB" };
            Console.WriteLine("请输入火车次：");
            int pos = tb.FindLeft(int.Parse(Console.ReadLine()));
            if (pos >= 0)
                foreach (string s in tb.Right[pos])
                    Console.Write(s + ' ');
            else
                Console.WriteLine("无此车次");
            Console.Write("\n\n请输入站名：");
            string station = Console.ReadLine();
            for (int i = 0; i < tb.Length; i++)
                foreach (string s in tb.Right [i])
                    if(s.Contains(station))
            {
                Console.Write(tb.Left [i].ToString ()+' ');
                break;
            
            }
            Console.WriteLine("\r\n");
        }
    }
    public class CzRelation<L, R>
    {
        public L[] Left;
        public R[] Right;
        public int Length
        {
            get { return Left.Length; }
        }
        public CzRelation(int iLength)
        {
            Left = new L[iLength];
            Right = new R[iLength];
        }
        public int FindLeft(L left)
        {
            for (int i = 0; i < Length; i++)
                if (Left[i].Equals(left))
                    return i;
            return -1;
        }
        public int FindRight(R right)
        {

            for (int i = 0; i < Length; i++)
                if (Right[i].Equals(right))
                    return i;
            return -1;
        }
    }
}
