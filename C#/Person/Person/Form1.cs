using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Person
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {
            Pen p = new Pen(Color.Red );

            Graphics gThin1 = pictureBox1.CreateGraphics();
            Graphics gThin2 = pictureBox1.CreateGraphics();
            gThin1.DrawEllipse(p, 50, 20, 30, 30);
            gThin1.DrawRectangle(p, 60, 50, 10, 50);
            gThin1.DrawLine(p, 60, 50, 40, 100);
            gThin1.DrawLine(p, 70, 50, 90, 100);
            gThin1.DrawLine(p, 60, 100, 45, 150);
            gThin1.DrawLine(p, 70, 100, 85, 150);
            gThin2.DrawEllipse(p, 50, 20, 30, 30);
            gThin2.DrawRectangle(p, 60, 30, 10, 50);
            gThin2.DrawLine(p, 60, 50, 30, 100);
            gThin2.DrawLine(p, 70, 50, 70, 100);
            gThin2.DrawLine(p, 60, 100, 80, 150);
            gThin2.DrawLine(p, 70, 100, 90, 150);
        }
    }
}
