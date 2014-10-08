namespace EmployeeManage
{

    partial class Form1
    {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            this.empList = new System.Windows.Forms.ListBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.DepList = new System.Windows.Forms.ComboBox();
            this.label6 = new System.Windows.Forms.Label();
            this.txtEmail = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.EmpBirthdate = new System.Windows.Forms.DateTimePicker();
            this.label4 = new System.Windows.Forms.Label();
            this.GenderF = new System.Windows.Forms.RadioButton();
            this.GenderM = new System.Windows.Forms.RadioButton();
            this.label3 = new System.Windows.Forms.Label();
            this.txtEmpName = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.txtEmpID = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.optUpdate = new System.Windows.Forms.RadioButton();
            this.optDelete = new System.Windows.Forms.RadioButton();
            this.optInsert = new System.Windows.Forms.RadioButton();
            this.cmdOK = new System.Windows.Forms.Button();
            this.cmdCancel = new System.Windows.Forms.Button();
            this.cmdQuit = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // empList
            // 
            this.empList.FormattingEnabled = true;
            this.empList.ItemHeight = 12;
            this.empList.Location = new System.Drawing.Point(12, 25);
            this.empList.Name = "empList";
            this.empList.Size = new System.Drawing.Size(169, 340);
            this.empList.TabIndex = 0;
            this.empList.SelectedIndexChanged += new System.EventHandler(this.empList_SelectedIndexChanged);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.DepList);
            this.groupBox1.Controls.Add(this.label6);
            this.groupBox1.Controls.Add(this.txtEmail);
            this.groupBox1.Controls.Add(this.label5);
            this.groupBox1.Controls.Add(this.EmpBirthdate);
            this.groupBox1.Controls.Add(this.label4);
            this.groupBox1.Controls.Add(this.GenderF);
            this.groupBox1.Controls.Add(this.GenderM);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.txtEmpName);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.txtEmpID);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Location = new System.Drawing.Point(199, 39);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(286, 215);
            this.groupBox1.TabIndex = 1;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Employee Information";
            // 
            // DepList
            // 
            this.DepList.FormattingEnabled = true;
            this.DepList.Location = new System.Drawing.Point(102, 176);
            this.DepList.Name = "DepList";
            this.DepList.Size = new System.Drawing.Size(121, 20);
            this.DepList.TabIndex = 11;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(7, 176);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(65, 12);
            this.label6.TabIndex = 10;
            this.label6.Text = "Department";
            // 
            // txtEmail
            // 
            this.txtEmail.Location = new System.Drawing.Point(102, 140);
            this.txtEmail.Name = "txtEmail";
            this.txtEmail.Size = new System.Drawing.Size(100, 21);
            this.txtEmail.TabIndex = 9;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(7, 143);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(35, 12);
            this.label5.TabIndex = 2;
            this.label5.Text = "Email";
            // 
            // EmpBirthdate
            // 
            this.EmpBirthdate.Location = new System.Drawing.Point(77, 111);
            this.EmpBirthdate.Name = "EmpBirthdate";
            this.EmpBirthdate.Size = new System.Drawing.Size(200, 21);
            this.EmpBirthdate.TabIndex = 8;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(7, 111);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(53, 12);
            this.label4.TabIndex = 7;
            this.label4.Text = "BirthDay";
            // 
            // GenderF
            // 
            this.GenderF.AutoSize = true;
            this.GenderF.Location = new System.Drawing.Point(143, 81);
            this.GenderF.Name = "GenderF";
            this.GenderF.Size = new System.Drawing.Size(59, 16);
            this.GenderF.TabIndex = 6;
            this.GenderF.TabStop = true;
            this.GenderF.Text = "Female";
            this.GenderF.UseVisualStyleBackColor = true;
            // 
            // GenderM
            // 
            this.GenderM.AutoSize = true;
            this.GenderM.Checked = true;
            this.GenderM.Location = new System.Drawing.Point(77, 81);
            this.GenderM.Name = "GenderM";
            this.GenderM.Size = new System.Drawing.Size(47, 16);
            this.GenderM.TabIndex = 5;
            this.GenderM.TabStop = true;
            this.GenderM.Text = "Male";
            this.GenderM.UseVisualStyleBackColor = true;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(7, 81);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(41, 12);
            this.label3.TabIndex = 4;
            this.label3.Text = "Gender";
            // 
            // txtEmpName
            // 
            this.txtEmpName.Location = new System.Drawing.Point(102, 50);
            this.txtEmpName.Name = "txtEmpName";
            this.txtEmpName.Size = new System.Drawing.Size(100, 21);
            this.txtEmpName.TabIndex = 3;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(7, 50);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(35, 12);
            this.label2.TabIndex = 2;
            this.label2.Text = "Name:";
            // 
            // txtEmpID
            // 
            this.txtEmpID.Location = new System.Drawing.Point(102, 21);
            this.txtEmpID.Name = "txtEmpID";
            this.txtEmpID.ReadOnly = true;
            this.txtEmpID.Size = new System.Drawing.Size(100, 21);
            this.txtEmpID.TabIndex = 1;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(7, 21);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(71, 12);
            this.label1.TabIndex = 0;
            this.label1.Text = "Employee ID";
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.optUpdate);
            this.groupBox2.Controls.Add(this.optDelete);
            this.groupBox2.Controls.Add(this.optInsert);
            this.groupBox2.Location = new System.Drawing.Point(208, 260);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(277, 70);
            this.groupBox2.TabIndex = 2;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Modify";
            // 
            // optUpdate
            // 
            this.optUpdate.AutoSize = true;
            this.optUpdate.Location = new System.Drawing.Point(141, 37);
            this.optUpdate.Name = "optUpdate";
            this.optUpdate.Size = new System.Drawing.Size(59, 16);
            this.optUpdate.TabIndex = 2;
            this.optUpdate.TabStop = true;
            this.optUpdate.Text = "Update";
            this.optUpdate.UseVisualStyleBackColor = true;
            // 
            // optDelete
            // 
            this.optDelete.AutoSize = true;
            this.optDelete.Location = new System.Drawing.Point(72, 37);
            this.optDelete.Name = "optDelete";
            this.optDelete.Size = new System.Drawing.Size(59, 16);
            this.optDelete.TabIndex = 1;
            this.optDelete.TabStop = true;
            this.optDelete.Text = "Delete";
            this.optDelete.UseVisualStyleBackColor = true;
            // 
            // optInsert
            // 
            this.optInsert.AutoSize = true;
            this.optInsert.Location = new System.Drawing.Point(7, 37);
            this.optInsert.Name = "optInsert";
            this.optInsert.Size = new System.Drawing.Size(59, 16);
            this.optInsert.TabIndex = 0;
            this.optInsert.TabStop = true;
            this.optInsert.Text = "insert";
            this.optInsert.UseVisualStyleBackColor = true;
            // 
            // cmdOK
            // 
            this.cmdOK.Location = new System.Drawing.Point(215, 337);
            this.cmdOK.Name = "cmdOK";
            this.cmdOK.Size = new System.Drawing.Size(75, 23);
            this.cmdOK.TabIndex = 3;
            this.cmdOK.Text = "OK";
            this.cmdOK.UseVisualStyleBackColor = true;
            // 
            // cmdCancel
            // 
            this.cmdCancel.Location = new System.Drawing.Point(301, 336);
            this.cmdCancel.Name = "cmdCancel";
            this.cmdCancel.Size = new System.Drawing.Size(75, 23);
            this.cmdCancel.TabIndex = 4;
            this.cmdCancel.Text = "Cancel";
            this.cmdCancel.UseVisualStyleBackColor = true;
            // 
            // cmdQuit
            // 
            this.cmdQuit.Location = new System.Drawing.Point(401, 337);
            this.cmdQuit.Name = "cmdQuit";
            this.cmdQuit.Size = new System.Drawing.Size(75, 23);
            this.cmdQuit.TabIndex = 5;
            this.cmdQuit.Text = "Quit";
            this.cmdQuit.UseVisualStyleBackColor = true;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(512, 387);
            this.Controls.Add(this.cmdQuit);
            this.Controls.Add(this.cmdCancel);
            this.Controls.Add(this.cmdOK);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.empList);
            this.Name = "Form1";
            this.Text = "Employee Manager";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.ListBox empList;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.RadioButton GenderM;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txtEmpName;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox txtEmpID;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox txtEmail;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.DateTimePicker EmpBirthdate;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.RadioButton GenderF;
        private System.Windows.Forms.ComboBox DepList;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.RadioButton optUpdate;
        private System.Windows.Forms.RadioButton optDelete;
        private System.Windows.Forms.RadioButton optInsert;
        private System.Windows.Forms.Button cmdOK;
        private System.Windows.Forms.Button cmdCancel;
        private System.Windows.Forms.Button cmdQuit;
    }
}
