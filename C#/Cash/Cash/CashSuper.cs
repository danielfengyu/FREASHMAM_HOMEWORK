using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Cash
{
    public abstract class CashSuper
    {
        /// <summary>
        /// 现金收费抽象方法
        /// </summary>
        public abstract double acceptCash(double money);
        
    }
}
