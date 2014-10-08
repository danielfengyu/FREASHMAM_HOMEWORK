using System;
using System.Data;
using System.Data.SqlClient;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace DataConnection
{
    class Program
    {
        static string connectionString = @"Data Source=.;
        Initial Catalog = SimpleDatabase;
        Integrated Security = True";
        static void Main(string[] args)
        {
            using (SqlConnection connection = new SqlConnection(connectionString))
            {
                try
                {
                    connection.Open();
                    Console.WriteLine("成功连接到数据库");
                    /*SqlCommand command = new SqlCommand("select * from student",connection );
                    SqlDataReader reader = command.ExecuteReader(CommandBehavior.SingleResult);
                    while (reader.Read())
                    {
                        string StuID = reader.GetString(0);
                        string StuName = reader.GetString(1);
                        string Stu_Dept_name = reader.GetString(2);
                        decimal   Stu_total_credits = reader.GetDecimal(3);
                        Console.WriteLine(StuID+"    "+StuName+"    "+Stu_Dept_name+"   "+Stu_total_credits);
                    }*/
                    SqlCommand command = new SqlCommand("select count(*) from student",connection );
                    Console.WriteLine(command .ExecuteScalar());
                }
                catch (Exception e)
                {
                    Console.WriteLine(e.Message );
                }
            }
            Console.ReadLine();
        }
    }
}
