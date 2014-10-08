using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P2_6
{
    class Program
    {
        static void Main(string[] args)
        {
            SPoint s1 = new SPoint() { x=0,y=0};
            SPoint s2 = s1;
            s2.x = 5;
            s2.y = 10;
            Console.WriteLine("结构变量s1:x={0},y={1}",s1.x,s1.y);
            CPoint c1 = new CPoint() { x=0,y=0};
            CPoint c2 = c1;
            c2.x = 5;
            c2.y = 10;
            Console.WriteLine("类变量c1:x={0},y={1}",c1.x,c1 .y);
        }
    }
    struct SPoint
    {
        public int x;
        public int y;
    }
    class CPoint
    {
        public int x;
        public int y;
    }
}
