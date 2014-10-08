using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace PhoneBook
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        Dictionary<string, Book> phonebook;//泛型集合        
        private void Form1_Load(object sender, EventArgs e)
        {
            phonebook = new Dictionary<string, Book>();
            Book zhang = new Book("张三", "Nokia", "1380010000");
            Book li = new Book("李四", "Moto", "1390019999");
            Book wang = new Book("王五", "Apple", "1390018888");
            phonebook.Add(zhang.Name, zhang);
            phonebook.Add(li.Name, li);
            phonebook.Add(wang.Name, wang);
            BindListView(phonebook);
        }
        private void BindListView(Dictionary<string, Book> phonebook)
        {
            lvBook.Items.Clear();
            foreach (Book book in phonebook.Values)
            {
                ListViewItem item = new ListViewItem(book.Name);
    item.SubItems.AddRange(new string[] { book.PhoneType, book.PhoneNumber });
    lvBook.Items.Add(item);

            }

        }
        //添加电话号码
        private void btnAdd_Click(object sender, EventArgs e)
        {
            if (txtName.Text == "" || txtPhonenumber.Text == "" || txtPhonetype.Text == "")
            {
                MessageBox.Show("电话信息不能为空");
                return;
            }
            Book book = new Book(txtName.Text.Trim(), txtPhonetype.Text.Trim(), txtPhonenumber.Text.Trim());
            phonebook.Add(book.Name, book);
            BindListView(phonebook);
            txtPhonenumber.Text = "";
            txtName.Text = "";
            txtPhonetype.Text = "";
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
            txtName.Text = key;
            txtPhonenumber.Text = phonebook[key].PhoneNumber;
            txtPhonetype.Text = phonebook[key].PhoneType;

        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            if (this.lvBook.SelectedItems.Count == 0)
            {
                MessageBox.Show("请选择一项");
                return;
            }
            string key = lvBook.SelectedItems[0].Text;
            phonebook.Remove(key);
            BindListView(phonebook);
        }

        private void btnCount_Click(object sender, EventArgs e)
        {
            string count = string.Format("总共有电话号码{0}个", phonebook.Count.ToString());
            MessageBox.Show(count);
        }

        private void btnQuit_Click(object sender, EventArgs e)
        {
            this.Dispose();
        }
    }
}
