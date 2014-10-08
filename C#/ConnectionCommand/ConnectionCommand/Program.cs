using System;
using System.Data;
using System.Data.SqlClient;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConnectionCommand
{
    class Program
    {
        static string connectionString = @"Data Source=.;Initial Catalog=SimpleDatabase;Integrated Security=True";
        public static void InsertRows(DataTable table)
        {
            DataRow row = table.NewRow();
            row[0] = "201192048";
            row[1] = "fengyu";
            row[2] = "软件学院";
            row[3] = 122;
            table.Rows.Add(row );
        }
        static void Main(string[] args)
        {
            using (SqlConnection connection = new SqlConnection(connectionString))
            {
                try
                {
                    connection.Open();
                    Console.WriteLine("数据库连接成功");
                    SqlDataAdapter adapter = new SqlDataAdapter(@"select * from dbo.student",connection );
                    DataSet readerDataSet = new DataSet();
                    adapter.Fill(readerDataSet, "Reader");
                    DataColumn []keys=new  DataColumn [1];
                    keys[0] = readerDataSet.Tables["Reader"].Columns[0];
                    readerDataSet.Tables["Reader"].PrimaryKey = keys;
                    OutputTableData(readerDataSet .Tables ["Reader"]);
                    Console.WriteLine("After Insert");
                    InsertRows(readerDataSet .Tables ["Reader"]);
                    OutputTableData(readerDataSet .Tables ["Reader"]);
                  // SqlCommand command = new SqlCommand("select * from student;select * from instructor", connection);
                   //command.CommandType = CommandType.StoredProcedure;
                    
                   // SqlDataReader reader = command.ExecuteReader();
                   // DataTable table = reader.GetSchemaTable();
                  //  dataGridView1.DataSource = table;
                   /* do
                    {
                        while (reader.Read())
                        {
                            Console.WriteLine(reader[0] + "\t\t" + reader[1]+"\t\t"+reader [2]);
                        }
                    } while (reader.NextResult());
                    while (reader.Read())
                    {
                        //Console.WriteLine("{0}-{1}",reader .GetString (0),reader .GetDecimal (1));
                        String  StuID = reader.GetString(0);
                        String  StuName = reader.GetString(1);
                        String  StuDpat_name = reader.GetString(2);
                       Decimal  StuTot_cred = reader.GetDecimal(3);
                        Console.WriteLine(StuID + "  " + StuName + "  " + StuDpat_name + "  " + StuTot_cred);
                    }*/
                //command = new SqlCommand("select * from instructor",connection );
                  //  reader.Close();
                }
                catch (Exception e)
                {
                    Console.WriteLine(e.Message);
                }
            }
            Console.ReadLine();
        }
    }
}
