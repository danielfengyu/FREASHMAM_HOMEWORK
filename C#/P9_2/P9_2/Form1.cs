using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace P9_2
{
    public partial class Form1 : Form
    {
        private RadioButton[] rdbs;
        public Form1()
        {
            InitializeComponent();
            rdbs = new RadioButton[7];
            for (int i = 0; i < 7; i++)
            {
                rdbs[i] = new RadioButton() { AutoSize = true };
                rdbs[i].Text = ((FormBorderStyle)i).ToString();
                rdbs[i].Location = new Point(10,10+i*20);
                rdbs[i].CheckedChanged += RadioButton_CheckedChanged;
                this.Controls.Add(rdbs[i]);
            }
        }
        void RadioButton_CheckedChanged(object sender, EventArgs e)
        {
            for (int i = 0; i < 7; i++)
            {
                if (rdbs[i].Checked)
                {
                    this.FormBorderStyle = (FormBorderStyle)i;
                    return;
                }
            }
        }
    }
}
