using System;
using System.Collections.Generic;
using System.Text;

namespace RentVecicle
{
    public class Car : Vehicle
    {
        public Car(string licenseNo, string name, string color, int useTime, int rentMoney) : base(licenseNo, name, color, useTime, rentMoney) { }
        public override double CalcPrice()
        {
            double totalPrice=0.0;
            double basicPrice=this.UseTime *this.RentMoney ;
            if(this.UseTime <=30)
            {
                totalPrice = basicPrice ;
            }
            else{
                totalPrice =basicPrice+(this.UseTime -30)*this .RentMoney *0.1;
            }
            return totalPrice;
        }
    }
}
