using System;
using System.Collections.Generic;
using System.Text;

namespace RentVecicle
{
    public abstract  class Vehicle
    {
        /// <summary>
        /// 车牌号
        /// </summary>
        private string licenseNo;

        public string LicenseNo
        {
            get { return licenseNo; }
            set { licenseNo = value; }
        }
       

        /// <summary>
        /// 品牌名
        /// </summary>
        private string name;

        public string Name
        {
            get { return name; }
            set { name = value; }
        }
        

        /// <summary>
        /// 颜色
        /// </summary>
        private string color;

        public string Color
        {
            get { return color; }
            set { color = value; }
        }
       
        /// <summary>
        /// 使用时间
        /// </summary>
        private int useTime;

        public int UseTime
        {
            get { return useTime; }
            set { useTime = value; }
        }
       

        /// <summary>
        /// 日租金
        /// </summary>
        private int rentMoney;

        public int RentMoney
        {
            get { return rentMoney; }
            set { rentMoney = value; }
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

        /// <summary>
        /// 计算租车价格
        /// </summary>
        public abstract double CalcPrice();
        public Vehicle() { }
        public Vehicle (string licenseNo,string name,string color, int useTime, int rentMoney){
        
            this .licenseNo =licenseNo ;
            this .name =name ;
            this .color =color ;
            this .useTime =useTime ;
            this.rentMoney =rentMoney ;
        }
        
    }
}
