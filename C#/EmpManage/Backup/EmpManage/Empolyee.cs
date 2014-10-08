using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace EmpManage
{
   public class Empolyee
    {
        string id;

        public string Id
        {
            get { return id; }
            set { id = value; }
        }
        string empName;

        public string EmpName
        {
            get { return empName; }
            set { empName = value; }
        }
        string empGender;

        public string EmpGender
        {
            get { return empGender; }
            set { empGender = value; }
        }
        string empBirthday;

        public string EmpBirthday
        {
            get { return empBirthday; }
            set { empBirthday = value; }
        }
        int empDep;

        public int EmpDep
        {
            get { return empDep; }
            set { empDep = value; }
        }
    }
}
