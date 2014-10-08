using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Model;
using System.Data;
using System.Data.SqlClient;

namespace DAL
{
  public  static  class EmployeeService
    {

      public static List<Employees> GetAllEmployee()
      {
          string strSql = "select * from Employees";
          SqlDataReader dr = DBHelper.GetReader(strSql);
          List<Employees> list = new List<Employees>();
          while (dr.Read())
          {
              
              Employees employee = new Employees();
              employee.EmpID = Convert.ToInt32(dr["EmpID"]);
              employee.EmpName = dr["EmpName"].ToString();
              employee.EmpGender = dr["EmpGender"].ToString();
              employee.EmpBirthdate = Convert.ToDateTime(dr["EmpBirthdate"]);
              employee.EmpEmail = dr["EmpEmail"].ToString();
              employee.DepID = Convert.ToInt32(dr["DepID"]);
              list.Add(employee);
          }
          dr.Close();
          return list;
      }

      public static Employees GetEmployeeByName(string strName)
      {
          string strSql = "select * from Employees where  EmpName='"+strName+"'";
          SqlDataReader dr = DBHelper.GetReader(strSql);
          Employees employee=new Employees();
          if (dr.Read())
          {
              //employee = new Employees();
              employee.EmpID = Convert.ToInt32(dr["EmpID"]);
              employee.EmpName = dr["EmpName"].ToString();
              employee.EmpGender = dr["EmpGender"].ToString();
              employee.EmpBirthdate = Convert.ToDateTime(dr["EmpBirthdate"]);
              employee.EmpEmail = dr["EmpEmail"].ToString();
              employee.DepID = Convert.ToInt32(dr["DepID"]);
          }
          dr.Close();
          return employee;
      }

      public static bool InsertEmployee(Employees employee)
      {
          string strSql = "insert into Employees values('"+employee.EmpName+"','"+employee.EmpGender+"','"+employee.EmpBirthdate+"','"+employee.EmpEmail+"',"+employee.DepID+")";
          int i = DBHelper.ExecuteCommand(strSql);
          if (i > 0)
          {
              return true;
          }
          else
          {
              return false;
          }
      }
      public static bool ModifyEmployee(Employees employee)
      {
          string strSql = "update Employees set EmpGender='" + employee.EmpGender + "',EmpBirthdate='" + employee.EmpBirthdate + "',EmpEmail='" + employee.EmpEmail + "',DepID=" + employee.DepID + "  where empname='" + employee.EmpName + "'";
         
          int i = DBHelper.ExecuteCommand(strSql);
          if (i > 0)
          {
              return true;
          }
          else
          {
              return false;
          }
      }
    
       public static bool DeleteEmployee(Employees employee)
      {
          string strSql = "delete from Employees  where empname='" + employee.EmpName + "'";
         
          int i = DBHelper.ExecuteCommand(strSql);
          if (i > 0)
          {
              return true;
          }
          else
          {
              return false;
          }
      }
    }
}
