using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Data;
using MySql.Data.MySqlClient;
namespace DAL
{
   public static class DBHelper
    {
        //private static SqlConnection conn;
       private static  MySqlConnection conn = null;
        public static MySqlConnection Conn
        {
            get 
            {
                //string strConn = @"Host = localhost;Database = test;Username = root;Password = dayingfengyu";
                //string strConn =@"Host = localhost;Database = test;Username = root;Password = dayingfengyu";//@"data source=.;initial catalog=EmployeeManage;integrated security =true;";
                if (conn == null)
                {
                    conn = new MySqlConnection("Host = localhost;Database = company;Username = root;Password = dayingfengyu");
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
            MySqlCommand cmd = new MySqlCommand(strSql, Conn);
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
            MySqlCommand cmd = new MySqlCommand(strSql, Conn);
            int result = cmd.ExecuteNonQuery();
            return result;
        }
       /// <summary>
       /// 查询返回datareader 
       /// </summary>
       /// <param name="strSql"></param>
       /// <returns></returns>
        public static MySqlDataReader GetReader(string strSql)
        {
            MySqlCommand cmd = new MySqlCommand(strSql, Conn);
            MySqlDataReader dr = cmd.ExecuteReader();
            return dr;
        }
        public static DataSet GetDateset(string strSql)
        {
            MySqlDataAdapter adp = new MySqlDataAdapter(strSql, Conn);
            DataSet ds = new DataSet();
            adp.Fill(ds);
            return ds;
        }

    }
}
