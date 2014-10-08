using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RentVecicle
{
    public class VehicleFactory//工厂类
    {
        public static Vehicle CreateVehicle(string licenseNo, string name, string color, int useTime, int rentMoney, int loadWeight,string type) {
            Vehicle vehcile = null;
            switch (type) { 
                case "car":
                    vehcile = new Car(licenseNo,name,color ,useTime ,rentMoney );
                    break;
                case "track":
                    vehcile = new Track(licenseNo, name, color, useTime, rentMoney, loadWeight );
                    break;
            }
            return vehcile;
        }
    }
}
