using System;
using System.Collections.Generic;
using System.Text;

namespace RentSystem
{
    public class Truck : Vehicle
    {
        private int load;//载重量

        public int Load
        {
            get { return load; }
            set { load = value; }
        }
        public Truck(string licenseNo, string name, string color, int serviceYear, double dailyRent, int load)
            : base(licenseNo, name, color, serviceYear, dailyRent)
        {
            this.Load = load;
        }

        public override double CalcPrice()
        {
            double totalPrice = 0.0;
            double basciPrice = this.RendDay * this.DailyRent;//基本价格
            if (this.RendDay <= 30)
            {
                totalPrice = basciPrice;
            }
            else
            {
                totalPrice = basciPrice + (this.RendDay - 30) * this.DailyRent*this.Load * 0.1;
            }
            return totalPrice;
        }
    }
}
