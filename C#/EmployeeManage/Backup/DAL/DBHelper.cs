using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Data;
using System.Data.SqlClient;
namespace DAL
{
   public static class DBHelper
    {
        private static SqlConnection conn;

        public static SqlConnection Conn
        {
            get 
            {
                string strConn = @"Server=.\sqlexpress;database=EmployeeManage;integrated security=true";
                if (conn == null)
                {
                    conn = new SqlConnection(strConn);
                    conn.Open();
                }
                else if (conn.State == ConnectionState.Closed)
                {
                    conn.Open();
                }
                else if (conn.State == ConnectionState.Broken)
                {
                    conn.Close();
                    conn.Open();
                }
                return conn;
            }
           
        }
       /// <summary>
       /// 查询单列值，就是统计查询
       /// </summary>
       /// <param name="strSql"></param>
       /// <returns></returns>
        public static string ExecuteScalar(string strSql)
        {
            SqlCommand cmd = new SqlCommand(strSql, Conn);
            string result = cmd.ExecuteScalar().ToString();
            return result;
        }
       /// <summary>
       /// 增删改的方法
       /// </summary>
       /// <param name="strSql"></param>
       /// <returns></returns>
        public static int ExecuteCommand(string strSql)
        {
            SqlCommand cmd = new SqlCommand(strSql, Conn);
            int result = cmd.ExecuteNonQuery();
            return result;
        }
       /// <summary>
       /// 查询返回datareader 
       /// </summary>
       /// <param name="strSql"></param>
       /// <returns></returns>
        public static SqlDataReader GetReader(string strSql)
        {
            SqlCommand cmd = new SqlCommand(strSql, Conn);
            SqlDataReader dr = cmd.ExecuteReader();
            return dr;
        }
        public static DataSet GetDateset(string strSql)
        {
            SqlDataAdapter adp = new SqlDataAdapter(strSql, Conn);
            DataSet ds = new DataSet();
            adp.Fill(ds);
            return ds;
        }

    }
}
