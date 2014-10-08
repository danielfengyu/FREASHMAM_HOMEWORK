using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Model
{
   public class Departments
    {
        int depID;

        public int DepID
        {
            get { return depID; }
            set { depID = value; }
        }
        string depName;

        public string DepName
        {
            get { return depName; }
            set { depName = value; }
        }
    }
}
