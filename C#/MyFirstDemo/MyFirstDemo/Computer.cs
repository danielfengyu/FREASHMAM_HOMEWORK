using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace MyFirstDemo
{
    class Computer
    {
        private string name;

        public string Name
        {
            get { return name; }
            set { name = value; }
        }
        private string memory;

        public string Memory
        {
            get { return memory; }
            set { memory = value; }
        }
        private string brand;

        public string Brand
        {
            get { return brand; }
            set { brand = value; }
        }
        private string hardDisk;

        public string HardDisk
        {
            get { return hardDisk; }
            set { hardDisk = value; }
        }
        private string money;

        public string Money
        {
            get { return money; }
            set { money = value; }
        }
        public void setName(string name)
        {
            this.name = name;
        }
        Computer(string name, string memory, string brand, string hardDisk, string money)
        {
            this.name = name;
            this.memory = memory;
            this.brand = brand;
            this.hardDisk = hardDisk;
            this.money = money;
        }
    }
}
