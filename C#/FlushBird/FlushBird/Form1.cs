using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace FlushBird
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender,KeyEventArgs e)
        {
            switch (e.KeyCode)
            {

                case Keys.Up:

                    pictBoxSeaGull.Top -= 5;

                    break;

                case Keys.Down:

                    pictBoxSeaGull.Top += 5;

                    break;

                case Keys.Right:

                    pictBoxSeaGull.Left += 5;

                    break;

                case Keys.Left:

                    pictBoxSeaGull.Left -= 5;

                    break;

                default:

                    break;

            }

        }
    }
}
