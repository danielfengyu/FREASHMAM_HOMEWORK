﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P1_5
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("请选择语言：");
            Console.WriteLine("1.英文 2.简体中文 3.繁体中文");
            ConsoleKeyInfo k = Console.ReadKey();
            if (k.KeyChar == '1')
                Console.WriteLine("C# Programming Language Tutorial");
            else if (k.KeyChar== '2')
                Console.WriteLine("C#语言程序设计基础");
            else if (k.KeyChar == '3')
                Console.WriteLine("C# 语言程序语言设计基础");

        }
    }
}
