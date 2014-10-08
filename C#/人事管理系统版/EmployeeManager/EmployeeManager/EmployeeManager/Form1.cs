using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace EmployeeManager
{
    public partial class Form1 : Form
    {
        
        private void InitForm()
        {
           
            this.GenderM.Checked = true;
            this.EmpBirthdate.Value = DateTime.Today;
            this.optInsert.Enabled = true;
            this.optUpdate.Enabled = false;
            this.optDelete.Enabled = false;
        }
      
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            // TODO: 这行代码将数据加载到表“employeeManageDataSet.Employees”中。您可以根据需要移动或删除它。
            this.employeesTableAdapter.Fill(this.employeeManageDataSet.Employees);
           
        }
       

        private void empList_SelectedIndexChanged(object sender, EventArgs e)
        {
           
        }

        private void optInsert_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void optInsert_Click(object sender, EventArgs e)
        {
            

        }

        private void cmdOK_Click(object sender, EventArgs e)
        {
           
            }

        private void cmdCancel_Click(object sender, EventArgs e)
        {
            this.InitForm();
        }

        private void cmdQuit_Click(object sender, EventArgs e)
        {
            DialogResult dr = MessageBox.Show("Are you want to Quit ?", "Infoemation", MessageBoxButtons.YesNo, MessageBoxIcon.Information);
            if (dr == DialogResult.Yes)
            {
                this.Dispose();
            }
        }

        private void fillByToolStripButton_Click(object sender, EventArgs e)
        {
            try
            {
                this.employeesTableAdapter.FillBy(this.employeeManageDataSet.Employees);
            }
            catch (System.Exception ex)
            {
                System.Windows.Forms.MessageBox.Show(ex.Message);
            }

        }

        private void allEmployeesNameToolStripButton_Click(object sender, EventArgs e)
        {
            try
            {
                this.employeesTableAdapter.AllEmployeesName(this.employeeManageDataSet.Employees);
            }
            catch (System.Exception ex)
            {
                System.Windows.Forms.MessageBox.Show(ex.Message);
            }

        }

        private void allEmployeesBirthdateToolStripButton_Click(object sender, EventArgs e)
        {
            try
            {
                this.employeesTableAdapter.AllEmployeesBirthdate(this.employeeManageDataSet.Employees);
            }
            catch (System.Exception ex)
            {
                System.Windows.Forms.MessageBox.Show(ex.Message);
            }

        }
    }
}