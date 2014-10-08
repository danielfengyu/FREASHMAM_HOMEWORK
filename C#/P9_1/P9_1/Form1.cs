using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace P9_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

        }
        private void Form1_Load(object sender, EventArgs e)
        {
            this.ForeColor = Color.Yellow;
            this.BackColor = Color.Blue;
        }
        private void Form1_SizeChanged(object sender, EventArgs e)
        {
            this.Text = "窗体尺寸" + this.Size;

        }
        private void Form1_LocationChanged(object sender, EventArgs e)
        {
            this.Text = "窗体坐标" + this.Location;
        }

        private void Form1_Load_1(object sender, EventArgs e)
        {
            this.Text = "窗体尺寸" + this.Size;
            this.Text = "窗体坐标" + this.Location;
        }

        private void Form1_Layout(object sender, LayoutEventArgs e)
        {

        }

        private void Form1_BackgroundImageChanged(object sender, EventArgs e)
        {
            this.ForeColor = Color.Yellow;
            this.BackColor = Color.Blue;
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {

        }
        
    }
}
