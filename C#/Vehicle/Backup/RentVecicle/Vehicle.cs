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
        public string licenseNo;
        public string licenseNo
        {
            get
            {
                return licenseNo;
            }
            set
            {
                licenseNo = value;
            }
        }

        /// <summary>
        /// 品牌名
        /// </summary>
        public string name;
        public string name
        {
            get
            {
                return name;
            }
            set
            {
                name = value;
            }
        }

        /// <summary>
        /// 颜色
        /// </summary>
        public string color;
        public string color
        {
            get
            {
                return color;
            }
            set
            {
                color = value;
            }
        }

        /// <summary>
        /// 使用时间
        /// </summary>
        public int useTime;
        public int useTime
        {
            get
            {
                return useTime;
            }
            set
            {
                useTime = value;
            }
        }

        /// <summary>
        /// 日租金
        /// </summary>
        public int rentMoney;
        public int rentMoney
        {
            get
            {
                return rentMoney;
            }
            set
            {
                rentMoney = value;
            }
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
