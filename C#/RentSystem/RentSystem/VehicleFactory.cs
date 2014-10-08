using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RentSystem
{
   public class VehicleFactory
    {
       public static Vehicle CreateVehicle(string licenseNo, string name,
                                          string color, int serviceYear,
                                           double dailyRent, int load, string type)
       {
           Vehicle vehicle = null;
           switch (type)
           { 
               case "car":
                   vehicle = new Car(licenseNo, name, color, serviceYear, dailyRent);
                   break;
               case "truck":
                   vehicle = new Truck(licenseNo, name, color, serviceYear, dailyRent, load);
                    break;
           }
           return vehicle;
       }
    }
}
