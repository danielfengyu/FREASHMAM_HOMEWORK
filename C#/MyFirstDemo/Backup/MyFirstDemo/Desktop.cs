using System;
using System.Collections.Generic;
using System.Text;

namespace MyFirstDemo
{
    public class Desktop : Computer
    {
        private string hostType;//机箱类型

        public string HostType
        {
            get { return hostType; }
            set { hostType = value; }
        }
        public Desktop() { }
        public Desktop(string name, string brand, string cpu, string memory, string harDisk, string monitor,string hostType)
                     :base(name, brand, cpu, memory, harDisk, monitor)
        {
            this.HostType = hostType;
        }
    }
}
