using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Data.SqlClient;


namespace EmpManage
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void Form2_Load(object sender, EventArgs e)
        {
            string strConn = @"Server=.\sqlexpress;Database=EmployeeDB;integrated security=true";
            SqlConnection conn = new SqlConnection(strConn);
            conn.Open();
            string sql = "select empname from empinfo";
            SqlCommand cmd = new SqlCommand(sql, conn);
            SqlDataReader dr = cmd.ExecuteReader();
            while (dr.Read())
            {
                this.comboBox1.Items.Add(dr["empname"].ToString());
            }
            dr.Close();
            conn.Close();

        }

        private void btnSearch_Click(object sender, EventArgs e)
        {
            string strConn = @"Server=.\sqlexpress;Database=EmployeeDB;integrated security=true";
            SqlConnection conn = new SqlConnection(strConn);
            conn.Open();
            string sql = "select * from empinfo where empname='" + comboBox1.SelectedItem.ToString() + "'";
            SqlCommand cmd = new SqlCommand(sql, conn);
            SqlDataReader dr = cmd.ExecuteReader();
            if (dr.Read())
            {
                txtName.Text = dr["empname"].ToString();
                if (dr["empGender"].ToString() == "male")
                {
                    this.rdoMale.Checked=true;
                }
                else
                {
                    this.raoFemale.Checked = true;
                }
                this.dateTimePicker1.Value = Convert.ToDateTime(dr["empBirthday"]);
                this.comboBox2.SelectedIndex = Convert.ToInt32(dr["empDep"]) - 1;
            }
            dr.Close();
            conn.Close();
        }

        private void btnSave_Click(object sender, EventArgs e)
        {
            string strConn = @"Server=.\sqlexpress;Database=EmployeeDB;integrated security=true";
            SqlConnection conn = new SqlConnection(strConn);
            conn.Open();
            int depid=this.comboBox2.SelectedIndex+1;
            string sql = "update empinfo set empBirthday='" + this.dateTimePicker1.Value.ToString() + "', empdep=" + depid + " where empname='" + txtName.Text.Trim() + "'";
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

        private void btnDelete_Click(object sender, EventArgs e)
        {
            string strConn = @"Server=.\sqlexpress;Database=EmployeeDB;integrated security=true";
            SqlConnection conn = new SqlConnection(strConn);
            conn.Open();
            string sql = "delete from empinfo where empname='" + txtName.Text.Trim() + "'";
            SqlCommand cmd = new SqlCommand(sql,conn);
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
