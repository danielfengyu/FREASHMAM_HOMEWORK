using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Cash
{
    public class CashReturn : CashSuper
    {
        public CashReturn(string moneyCondition, string moneyReturn)
        {
            this.moneyCondition = double.Parse(moneyCondition );
            this.moneyReturn = double.Parse(moneyReturn );
        }

        /// <summary>
        /// 返利条件
        /// </summary>
        private double moneyCondition;

        public double MoneyCondition
        {
            get { return moneyCondition; }
            set { moneyCondition = value; }
        }
        

        /// <summary>
        /// 返利值
        /// </summary>
        private double moneyReturn;
        public double MoneyReturn
        {
            get { return moneyReturn; }
            set { moneyReturn = value; }
        }
        
    
        public override double acceptCash(double money)
        {
            double result = money;
            if (money >= moneyCondition)
                result = money - Math.Floor(money / moneyCondition) * moneyReturn;
            return result;
        }
    }
}
