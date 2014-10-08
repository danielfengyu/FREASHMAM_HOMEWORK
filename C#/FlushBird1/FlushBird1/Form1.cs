using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace FlushBird1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, KeyEventArgs e)
        {

            switch (e.KeyCode)
            {

                case Keys.Up:

                    pictureBox1.Top -= 5;

                    break;

                case Keys.Down:

                    pictureBox1.Top += 5;

                    break;

                case Keys.Right:

                    pictureBox1.Left += 5;

                    break;

                case Keys.Left:

                    pictureBox1.Left -= 5;

                    break;

                default:

                    break;

            }



        }


        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }
    }
}
