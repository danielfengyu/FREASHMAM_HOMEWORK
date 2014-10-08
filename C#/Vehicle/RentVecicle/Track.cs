using System;
using System.Collections.Generic;
using System.Text;

namespace RentVecicle
{
    public class Track : Vehicle
    {
        private int loadWeight;

        public int LoadWeight
        {
            get { return loadWeight; }
            set { loadWeight = value; }
        }
        public Track() { }
        public Track(string licenseNo, string name, string color, int useTime, int rentMoney,int loadWeight) 
            :base(licenseNo, name, color, useTime, rentMoney) {
            this.loadWeight = loadWeight;
        }
        public override double CalcPrice()
        {
            double totalPrice = 0.0;
            double basicPrice = this.UseTime * this.RentMoney;
            if (this.UseTime <= 30)
            {
                totalPrice = basicPrice;
            }
            else
            {
                totalPrice = basicPrice + (this.UseTime - 30) * this.loadWeight  * 0.1;
            }
            return totalPrice;
        }
    }
}
