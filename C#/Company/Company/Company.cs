using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Company
{
    public abstract class Company
    {
        private string name;

        protected string Name
        {
            get { return name; }
            set { name = value; }
        }
        public Company(string name)
        {
            this.name = name;
        }

        /// <summary>
        /// 增加部门
        /// </summary>
        public abstract void Add(Company c);
        

        /// <summary>
        /// 移除部门
        /// </summary>
        public abstract void Remove(Company c);
        

        /// <summary>
        /// 显示部门树
        /// </summary>
        public abstract void Display(int depth);
       

        /// <summary>
        /// 部门职责
        /// </summary>
        public abstract void LineOfDuty();
        
    }
}
