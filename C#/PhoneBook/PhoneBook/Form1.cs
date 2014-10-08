using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace PhoneBook
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        Dictionary  <string,Book> phonebook;//泛型集合        
        private void Form1_Load(object sender, EventArgs e)
        {
            
            phonebook = new Dictionary<string, Book>();
            string strConn = @"data source=.;initial catalog=PhoneBook;integrated security =true;";

            SqlConnection conn = new SqlConnection(strConn);
            conn.Open();
            string sql = "select *from phoneBook";
            SqlCommand cmd = new SqlCommand(sql, conn);
            SqlDataReader dr = cmd.ExecuteReader();
            while (dr.Read())
            {
                ListViewItem lvitem = new ListViewItem();
                lvitem.SubItems[0].Text = dr.GetString(0).ToString();//加入姓名
                lvitem.SubItems.Add(dr.GetString(1));//加入号码
                lvitem.SubItems.Add(dr.GetString(2));//加入机型
               
                this.lvBook.Items.Add(lvitem); 
                /* string name = dr["name"].ToString();
                 string phoneType = dr["machineType"].ToString();
                 string phoneNumber = dr["phoneNumber"].ToString();
                 Book book = new Book(name,phoneType ,phoneNumber );
                 phonebook.Add(name, book); 
               }
               BindListView(phonebook);
                
               lvBook.Items.Add(dr["name"].ToString ());*/
            }
            dr.Close();
            conn.Close();
        }
        /*private void BindListView(Dictionary<string, Book> phonebook)
        {
            lvBook.Items.Clear();
            foreach (Book book in phonebook.Values)
            {
                ListViewItem item = new ListViewItem(book.Name);
                item.SubItems.AddRange(new string[] { book.PhoneType, book.PhoneNumber });
                lvBook.Items.Add(item);

            }

        }*/
        
        //添加电话号码
        private void btnAdd_Click(object sender, EventArgs e)
        {
           
            if (txtName.Text == "" || txtPhonenumber.Text == "" || txtPhonetype.Text == "")
            {
                MessageBox.Show("电话信息不能为空");
                return;
            }
            string strConn = @"data source=.;initial catalog=PhoneBook;integrated security =true;";

            SqlConnection conn = new SqlConnection(strConn);
            conn.Open();
            string sql = "insert into phoneBook values('" + txtName.Text + "','" + txtPhonetype.Text + "','" + txtPhonenumber.Text + "')";
            SqlCommand cmd = new SqlCommand(sql, conn);
            cmd.ExecuteNonQuery();
            
            conn.Close();
            txtPhonenumber.Text = "";
            txtName.Text = "";
            txtPhonetype.Text = "";
            conn.Open();
            lvBook.Items.Clear();
            sql = "select *from phoneBook ";
            cmd = new SqlCommand(sql, conn);
            SqlDataReader dr = cmd.ExecuteReader();
            while (dr.Read())
            {
                ListViewItem lvitem = new ListViewItem();
                lvitem.SubItems[0].Text = dr.GetString(0).ToString();//加入姓名
                lvitem.SubItems.Add(dr.GetString(1));//加入号码
                lvitem.SubItems.Add(dr.GetString(2));//加入机型
                this.lvBook.Items.Add(lvitem);

            }
            dr.Close();
            conn.Close();
            /*BindListView(phonebook);
            Book book = new Book(txtName.Text.Trim(), txtPhonetype.Text.Trim(), txtPhonenumber.Text.Trim());
            phonebook.Add(book.Name, book);
            BindListView(phonebook);*/
        }
            
        //查看详细信息
        private void btnDetail_Click(object sender, EventArgs e)
        {
            if (this.lvBook.SelectedItems.Count == 0)
            {
                MessageBox.Show("请选择一项");
                return;
            }
            string key = lvBook.SelectedItems[0].Text;
            string strConn = @"data source=.;initial catalog=PhoneBook;integrated security =true;";

            SqlConnection conn = new SqlConnection(strConn);
            conn.Open();
            string sql = "select * from phoneBook where name='"+key +"'";
            SqlCommand cmd = new SqlCommand(sql, conn);
            SqlDataReader dr = cmd.ExecuteReader();
            while (dr.Read ())
            {
                string name = dr["name"].ToString();
                string phoneType = dr["machineType"].ToString();
                string phoneNumber = dr["phoneNumber"].ToString();
 
               txtName.Text = name ;
               txtPhonenumber.Text =phoneNumber;
               txtPhonetype.Text = phoneType;
            }
            conn.Close();

        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            if (this.lvBook.SelectedItems.Count == 0)
            {
                MessageBox.Show("请选择一项");
                return;
            }
            string key = lvBook.SelectedItems[0].Text;
            string strConn = @"data source=.;initial catalog=PhoneBook;integrated security =true;";

            SqlConnection conn = new SqlConnection(strConn);
            conn.Open();
            string sql = "delete from phoneBook where name='"+key+"'";
            SqlCommand cmd = new SqlCommand(sql, conn);
            cmd.ExecuteNonQuery();
            conn.Close();
            conn.Open();
            lvBook.Items.Clear();
            sql = "select *from phoneBook ";
            cmd = new SqlCommand(sql, conn);
            SqlDataReader dr = cmd.ExecuteReader();
            while (dr.Read())
            {
                ListViewItem lvitem = new ListViewItem();
                lvitem.SubItems[0].Text = dr.GetString(0).ToString();//加入姓名
                lvitem.SubItems.Add(dr.GetString(1));//加入号码
                lvitem.SubItems.Add(dr.GetString(2));//加入机型
                this.lvBook.Items.Add(lvitem);

            }
            dr.Close();
            conn.Close();
            
        }

        private void btnCount_Click(object sender, EventArgs e)
        {
            string strConn = @"data source=.;initial catalog=PhoneBook;integrated security =true;";

            SqlConnection conn = new SqlConnection(strConn);
            conn.Open();
            string sql = "select COUNT(* ) from phoneBook ";
            SqlCommand cmd = new SqlCommand(sql, conn);
            int count = Convert.ToInt32(cmd.ExecuteScalar()); 
            cmd.ExecuteNonQuery();
            conn.Close();
            string Count = string.Format("总共有电话号码{0}个", count );
            MessageBox.Show(Count);
        }

        private void btnQuit_Click(object sender, EventArgs e)
        {
            this.Dispose();
        }

        private void groupBox2_Enter(object sender, EventArgs e)
        {

        }

        private void lvBook_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        
    }
}
