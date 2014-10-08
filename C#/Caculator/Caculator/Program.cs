﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Caculator
{
    class Program
    {
        static void Main(string[] args)
        {
            try
            {
                Console.Write("请输入数字A:");
                string strNumberA = Console.ReadLine();
                Console.Write("请选择运算符号（+，-，*，/）:");
                string strOperate = Console.ReadLine();
                Console.Write("请输入数字B:");
                string strNumberB = Console.ReadLine();
                string strResult = "";
                strResult = Convert.ToString(Operation.GetResult(Convert.ToDouble(strNumberA), Convert.ToDouble(strNumberB), strOperate));
                Console.WriteLine("结果是：" + strResult);
                Console.ReadLine();

            }
            catch (Exception ex) 
            {
                Console.WriteLine("你的输入有错："+ex.Message );
            }
        }
    }
}