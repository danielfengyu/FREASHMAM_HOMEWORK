using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Model;
using DAL;
namespace BLL
{
   public static  class EmployeeManager
    {
       public static List<Employees> GetAllEmployee()
       {
           List<Employees> list = EmployeeService.GetAllEmployee();
           return list;

       }
       public static Employees GetEmployeeByName(string name)
       {
           Employees employee = EmployeeService.GetEmployeeByName(name);
           return employee;
       }
       public static bool ModifyEmployee(Employees employee)
       {
           bool flag = EmployeeService.ModifyEmployee(employee);
           return flag;
       }
       public static bool InsertEmployee(Employees employee)
       {
           bool flag = EmployeeService.InsertEmployee(employee);
           return flag;
       }
       public static bool DeleteEmployee(Employees employee)
       {
           bool flag = EmployeeService.DeleteEmployee(employee);
           return flag;
       } 
    }
}
