using System;
using System.Collections.Generic;
using System.Text;

namespace RentSystem
{
    public abstract class Vehicle
    {
        private string licenseNo;//车辆车牌号

        public string LicenseNo
        {
            get { return licenseNo; }
            set { licenseNo = value; }
        }
        private string name;//车辆名称

        public string Name
        {
            get { return name; }
            set { name = value; }
        }
        private string color;//车辆颜色

        public string Color
        {
            get { return color; }
            set { color = value; }
        }

        private int serviceYear;//车辆使用年限

        public int ServiceYear
        {
            get { return serviceYear; }
            set { serviceYear = value; }
        }

        private double dailyRent;//车辆日租金

        public double DailyRent
        {
            get { return dailyRent; }
            set { dailyRent = value; }
        }

        private string rentUser;//车辆租用者

        public string RentUser
        {
            get { return rentUser; }
            set { rentUser = value; }
        }

        private int rendDay;//车辆租用天数

        public int RendDay
        {
            get { return rendDay; }
            set { rendDay = value; }
        }

        public abstract double CalcPrice();
        public Vehicle(string licenseNo, string name, string color, int serviceYear, double dailyRent)
        {
            this.LicenseNo = licenseNo;
            this.Name = name;
            this.Color = color;
            this.ServiceYear = serviceYear;
            this.DailyRent = dailyRent;
        }
        


    }
}
