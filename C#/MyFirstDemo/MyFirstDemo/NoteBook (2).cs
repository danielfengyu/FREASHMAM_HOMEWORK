using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace MyFirstDemo
{
    public class NoteBook : Computer
    {
        private string battery;//笔记本电池

        public string Battery
        {
            get { return battery; }
            set { battery = value; }
        }
        public NoteBook() { }
        public NoteBook(string name, string brand, string cpu, string memory, string harDisk, string monitor, string battery)
            : base(name, brand, cpu, memory, harDisk, monitor)
        {
            this.Battery = battery;
        }
    }
}
