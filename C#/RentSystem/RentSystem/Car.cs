using System;
using System.Collections.Generic;
using System.Text;

namespace RentSystem
{
    public class Car :Vehicle
    {
        public Car(string licenseNo, string name, string color, int serviceYear, double dailyRent)
            : base(licenseNo, name, color, serviceYear, dailyRent)
        { }
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
                totalPrice = basciPrice + (this.RendDay - 30) * this.DailyRent * 0.1;
            }
            return totalPrice;
        }
    }
}
