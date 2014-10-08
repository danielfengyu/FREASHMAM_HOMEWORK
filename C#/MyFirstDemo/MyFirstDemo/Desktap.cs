using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace MyFirstDemo
{
    public class Desktap : Computer
    {
        private string machinebBox;

        public string MachinebBox
        {
            get { return machinebBox; }
            set { machinebBox = value; }
        }
        Desktap(string name, string memory, string brand, string hardDisk, string money,string machineBox)
            : base(name, memory, brand, hardDisk, money)
        {
            this.MachinebBox = machinebBox;
        }
    }
}
