using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace P6_7
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            //Button button1, button2, button3;
            button1.Click += new EventHandler(button_Click);
            button2.Click += new EventHandler(button_Click );
            button3.Click += new EventHandler(button_Click);

        }
        private void button_Click(object sender, EventArgs e)
        {

            MessageBox.Show("你按下了"+((Button)sender ).Text );
        }
    }

}
