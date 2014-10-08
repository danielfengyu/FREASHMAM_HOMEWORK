using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace ToolBox
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            this.IsMdiContainer = true;
        }

        private void ToolStripMenuItemToolBox_Click(object sender, EventArgs e)
        {
            FormToolbox ftb = new FormToolbox();
            ftb.MdiParent = this;
            ftb.Show();

        }
        
    }
}
