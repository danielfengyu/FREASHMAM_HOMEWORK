using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Cash
{
    public class CashFatory
    {
        public static CashSuper createCashAccept(string type)
        {
            CashSuper cs = null;
            switch (type)
            { 
                case "正常收费":
                    cs = new CashNormal();
                    break;
                case "满300送100":
                    CashReturn cr1 = new CashReturn("300", "100");
                    cs = cr1;
                    break;
                case "打8折":
                    CashRebate cr2 = new CashRebate("0.8");
                    cs = cr2;
                    break;

            }
            return cs;
        }
    }
}
