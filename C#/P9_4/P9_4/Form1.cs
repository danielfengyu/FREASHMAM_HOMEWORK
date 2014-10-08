using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace P9_4
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

        }
        private void Form1_Load(object sender, EventArgs e)
        {
            foreach (string s in new string[] { "北京", "天津", "上海", "广东" })
                ComboBox1.Items.Add(s );
        }
        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "")
                RichTextBox1.Text = "用户不能为空";
            else if (textBox2.Text == "")
                RichTextBox1.Text = "密码不能为空";
            else if (!checkBox1.Checked)
                RichTextBox1.Text = "如不同意会员条款，你将不能注册";
            else {
                StringBuilder sb = new StringBuilder("注册成功");
                sb.Append("\r\n 用户名：");
                sb.Append(textBox1.Text);
                sb.Append("\r\n密码：");
                sb.Append(textBox2.Text);
                sb.Append("\r\n请妥善保管你的注册信息");
                RichTextBox1.Text = sb.ToString();
            }
        }
    }
}
