using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Cash
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
        double total = 0.0d;
        private void btnOK_Click(object sender, EventArgs e)
        {
            CashSuper csuper = CashFatory.createCashAccept(cbxType .SelectedItem.ToString ());
            double totalPrices = 0d;
            totalPrices = csuper.acceptCash(Convert.ToDouble(txtPrice.Text)*Convert .ToDouble (txtNum .Text ));
            total=total +totalPrices;
            lbxList .Items .Add ("单价："+txtPrice.Text +"数量："+txtNum.Text +" "+cbxType.SelectedItem+"合计："+totalPrices.ToString());
            lblResult.Text =total .ToString ();
        }

        private void btnRedo_Click(object sender, EventArgs e)
        {
            txtPrice.Text  = "";
            txtNum.Text = "";
            
            lbxList.Items.Add("");
            lblResult.Text = "";

        }

        
    }
}
