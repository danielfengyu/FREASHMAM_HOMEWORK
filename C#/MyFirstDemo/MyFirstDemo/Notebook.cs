using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace MyFirstDemo
{
    public class Notebook : Computer
    {
        private string cpu;

        public string Cpu
        {
            get { return cpu; }
            set { cpu = value; }
        }
        Notebook(string name, string memory, string brand, string hardDisk, string money, string cpu)
            : base(name, memory, brand, hardDisk, money)
        {
            this.cpu = cpu;
        }
    }
}
