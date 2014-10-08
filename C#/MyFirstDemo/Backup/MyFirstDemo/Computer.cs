using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace MyFirstDemo
{
   public class Computer//实体类
    {
      private string brand;//计算机品牌
      private string memory;//计算机内存

      public string Memory
      {
          get { return memory; }
          set { memory = value; }
      }
      private string monitor;//显示器

      public string Monitor
      {
          get { return monitor; }
          set { monitor = value; }
      }
      private string hardDisk;//硬盘

      public string HardDisk
      {
          get { return hardDisk; }
          set { hardDisk = value; }
      }
      private string name;//名称

      public string Name
      {
          get { return name; }
          set { name = value; }
      }
      private string cpu;//CPU

      public string Cpu
      {
          get { return cpu; }
          set { cpu = value; }
      }

      public Computer() { }
      public Computer(string name, string brand, string cpu, string memory, string hardDisk, string monitor)
      {
          this.Name = name;
          this.Brand = brand;
          this.Cpu = cpu;
          this.Memory = memory;
          this.HardDisk = hardDisk;
          this.Monitor = monitor;
      }
       //属性
      public string Brand
      {
          get//只读属性
          {
              return brand;
          }
          set//只写属性
          {
              this.brand = value;
          }
      }



      ///// <summary>
      ///// 该方法是对计算机内存进行设置
      ///// </summary>
      ///// <param name="memory">memory是计算机内存，字符串类型</param>
      // public void SetMemory(string memory)
      //{
      //    this.memory = memory;
      //}
      // /// <summary>
      // /// 该方法是对计算机内存进行读取
      // /// </summary>
      // /// <returns></returns>
      // public string GetMemory()
      // {
      //     return this.memory;
      // }

    }
}
