using System;
using System.Collections.Generic;
using System.Text;

namespace RentVecicle
{
    public class Car : Vehicle
    {
        public Car(string licenseNo, string name, string color, int useTime, int rentMoney) : base(licenseNo, naem, color, useTime, rentMoney) { }
        public override double CalcPrice()
        {
            double totalPrice=0.0;
            double basicPrice=this.useTime *this.rentMoney ;
            if(this.useTime <=30)
            {
                totalPrice = basicPrice ;
            }
            else{
                totalPrice =basicPrice+(this.useTime -30)*this .rentMoney *0.1;
            }
            return totalPrice;
        }
    }
}
