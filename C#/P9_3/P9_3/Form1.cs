using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace P9_3
{
    public partial class LoginForm : Form
    {
        private int count = 0;
        private string user, pwd;
        public LoginForm(string user,string pwd)
        {
            InitializeComponent();
            this.user = user;
            this.pwd = pwd;
            button1.Click += new EventHandler(button1_Click);

        }
        void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == user && textBox2.Text == pwd)
            {
                this.DialogResult = DialogResult.OK;
            }
            else {
                MessageBox.Show("password is wrong ","warning");
                if (count++ == 3)
                    this.DialogResult = DialogResult.Cancel;
            }
        }

        private void textBox1(object sender, DragEventArgs e)
        {

        }
    }
}
