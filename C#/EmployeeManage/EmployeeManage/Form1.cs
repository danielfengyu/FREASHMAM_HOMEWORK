using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using Model;
using BLL;

namespace EmployeeManage
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            empList.Items.Clear();
            List<Employees> list = EmployeeManager.GetAllEmployee();
            foreach (Employees employee in list)
            {
                this.empList.Items.Add(employee.EmpName);
            }
        }

        private void empList_SelectedIndexChanged(object sender, EventArgs e)
        {
            string empName = this.empList.SelectedItem.ToString();
            Employees employee = EmployeeManager.GetEmployeeByName(empName);
            this.txtEmail.Text = employee.EmpEmail;
            this.txtEmpName.Text = employee.EmpName;
            this.txtEmpID.Text = employee.EmpID.ToString();
            if (employee.EmpGender =="0")
            {
                GenderM.Checked = true;
            }
            else
            {
                GenderF.Checked = true;
            }
            EmpBirthdate.Value = employee.EmpBirthdate; 

        }
    }
}
