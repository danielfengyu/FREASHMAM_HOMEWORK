using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace FlushBird2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            pictureBox1.Left = pictureBox1.Left += 50;
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)

        {


            switch (e.KeyCode)

            {

                case Keys.Up:

                    pictureBox1.Top -=50;
                    pictureBox2.Top -= 50;
                    break;

                case Keys.Down:

                    pictureBox1.Top += 5;
                    pictureBox2.Top += 5;
                    break;

                case Keys.Right:

                    pictureBox1.Left += 5;
                    pictureBox2.Left += 5;
                    break;

                case Keys.Left:

                    pictureBox1.Left -= 5;
                    pictureBox2.Left -= 5;
                    break;

                default:

                    break;

            }

        

        }

        private void Form1_PreviewKeyDown(object sender, PreviewKeyDownEventArgs e)
        {

        }

        private void Form1_BackColorChanged(object sender, EventArgs e)
        {

        }

       
    }
}
