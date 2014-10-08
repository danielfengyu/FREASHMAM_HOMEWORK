using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Cash
{
    public class CashRebate : CashSuper
    {
        private double moneyRebate = 1d;
        /// <summary>
        /// 折扣率初始化
        /// </summary>
        public CashRebate(string moneyRebate)
        {
            this.moneyRebate = double.Parse(moneyRebate );
        }
        public double MoneyRebate
        {
            get { return moneyRebate; }
            set { moneyRebate = value; }
        }
       
        public override double acceptCash(double money)
        {
            return money * moneyRebate;
        }
    }
}
