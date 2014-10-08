using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Model
{
  public  class Employees
    {
        int empID;

        public int EmpID
        {
            get { return empID; }
            set { empID = value; }
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
        DateTime empBirthdate;

        public DateTime EmpBirthdate
        {
            get { return empBirthdate; }
            set { empBirthdate = value; }
        }
        string empEmail;

        public string EmpEmail
        {
            get { return empEmail; }
            set { empEmail = value; }
        }
        int depID;

        public int DepID
        {
            get { return depID; }
            set { depID = value; }
        }
    }
}
