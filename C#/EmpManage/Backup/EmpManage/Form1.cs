using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

using System.Data;
using System.Data.SqlClient;//专用于操作sqlserver数据库



namespace EmpManage
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            Empolyee employee = new Empolyee();
            employee.EmpName = txtName.Text.Trim();
            if (rdoMale.Checked)
            {
                employee.EmpGender = "male";
            }
            else
            {
                employee.EmpGender = "female";
            }
            employee.EmpBirthday = this.dateTimePicker1.Value.ToShortDateString();
            employee.EmpDep = Convert.ToInt32(comboBox1.SelectedIndex+1);


            string strConn = @"Server=.\sqlexpress;Database=EmployeeDB;integrated security=true";
            SqlConnection conn = new SqlConnection(strConn);
            conn.Open();
            string sql = @"insert into empinfo(empname,empgender,empbirthday,empdep)
                           values('"+employee.EmpName+"','"+employee.EmpGender+"','"+employee.EmpBirthday+"',"+employee.EmpDep+")";

            SqlCommand cmd = new SqlCommand(sql, conn);
            int i = cmd.ExecuteNonQuery();
            if (i > 0)
            {
                MessageBox.Show("操作数据库成功");
            }
            else
            {
                MessageBox.Show("操作数据库失败");
            }
            conn.Close();


        }
    }
}
