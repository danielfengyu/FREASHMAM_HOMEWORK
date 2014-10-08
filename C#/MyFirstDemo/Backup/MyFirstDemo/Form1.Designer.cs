namespace MyFirstDemo
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
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.lblHostType = new System.Windows.Forms.Label();
            this.label17 = new System.Windows.Forms.Label();
            this.lblBattery = new System.Windows.Forms.Label();
            this.lblMonitor = new System.Windows.Forms.Label();
            this.label14 = new System.Windows.Forms.Label();
            this.label13 = new System.Windows.Forms.Label();
            this.lblHardDisk = new System.Windows.Forms.Label();
            this.lblMemory = new System.Windows.Forms.Label();
            this.lblCPU = new System.Windows.Forms.Label();
            this.label9 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.lblBrand = new System.Windows.Forms.Label();
            this.lblNme = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.lvComputer = new System.Windows.Forms.ListView();
            this.columnHeader1 = new System.Windows.Forms.ColumnHeader();
            this.columnHeader2 = new System.Windows.Forms.ColumnHeader();
            this.columnHeader3 = new System.Windows.Forms.ColumnHeader();
            this.columnHeader4 = new System.Windows.Forms.ColumnHeader();
            this.columnHeader5 = new System.Windows.Forms.ColumnHeader();
            this.columnHeader6 = new System.Windows.Forms.ColumnHeader();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.lblHostType);
            this.groupBox1.Controls.Add(this.label17);
            this.groupBox1.Controls.Add(this.lblBattery);
            this.groupBox1.Controls.Add(this.lblMonitor);
            this.groupBox1.Controls.Add(this.label14);
            this.groupBox1.Controls.Add(this.label13);
            this.groupBox1.Controls.Add(this.lblHardDisk);
            this.groupBox1.Controls.Add(this.lblMemory);
            this.groupBox1.Controls.Add(this.lblCPU);
            this.groupBox1.Controls.Add(this.label9);
            this.groupBox1.Controls.Add(this.label8);
            this.groupBox1.Controls.Add(this.label7);
            this.groupBox1.Controls.Add(this.lblBrand);
            this.groupBox1.Controls.Add(this.lblNme);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Location = new System.Drawing.Point(23, 142);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(514, 106);
            this.groupBox1.TabIndex = 0;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "电脑详细信息";
            this.groupBox1.Enter += new System.EventHandler(this.groupBox1_Enter);
            // 
            // lblHostType
            // 
            this.lblHostType.AutoSize = true;
            this.lblHostType.Location = new System.Drawing.Point(419, 83);
            this.lblHostType.Name = "lblHostType";
            this.lblHostType.Size = new System.Drawing.Size(47, 12);
            this.lblHostType.TabIndex = 17;
            this.lblHostType.Text = "label18";
            // 
            // label17
            // 
            this.label17.AutoSize = true;
            this.label17.Location = new System.Drawing.Point(343, 83);
            this.label17.Name = "label17";
            this.label17.Size = new System.Drawing.Size(29, 12);
            this.label17.TabIndex = 16;
            this.label17.Text = "机箱";
            // 
            // lblBattery
            // 
            this.lblBattery.AutoSize = true;
            this.lblBattery.Location = new System.Drawing.Point(417, 50);
            this.lblBattery.Name = "lblBattery";
            this.lblBattery.Size = new System.Drawing.Size(47, 12);
            this.lblBattery.TabIndex = 15;
            this.lblBattery.Text = "label16";
            // 
            // lblMonitor
            // 
            this.lblMonitor.AutoSize = true;
            this.lblMonitor.Location = new System.Drawing.Point(417, 21);
            this.lblMonitor.Name = "lblMonitor";
            this.lblMonitor.Size = new System.Drawing.Size(47, 12);
            this.lblMonitor.TabIndex = 14;
            this.lblMonitor.Text = "label15";
            // 
            // label14
            // 
            this.label14.AutoSize = true;
            this.label14.Location = new System.Drawing.Point(341, 50);
            this.label14.Name = "label14";
            this.label14.Size = new System.Drawing.Size(29, 12);
            this.label14.TabIndex = 13;
            this.label14.Text = "电池";
            // 
            // label13
            // 
            this.label13.AutoSize = true;
            this.label13.Location = new System.Drawing.Point(341, 21);
            this.label13.Name = "label13";
            this.label13.Size = new System.Drawing.Size(41, 12);
            this.label13.TabIndex = 12;
            this.label13.Text = "显示器";
            // 
            // lblHardDisk
            // 
            this.lblHardDisk.AutoSize = true;
            this.lblHardDisk.Location = new System.Drawing.Point(265, 82);
            this.lblHardDisk.Name = "lblHardDisk";
            this.lblHardDisk.Size = new System.Drawing.Size(47, 12);
            this.lblHardDisk.TabIndex = 11;
            this.lblHardDisk.Text = "label12";
            // 
            // lblMemory
            // 
            this.lblMemory.AutoSize = true;
            this.lblMemory.Location = new System.Drawing.Point(265, 49);
            this.lblMemory.Name = "lblMemory";
            this.lblMemory.Size = new System.Drawing.Size(47, 12);
            this.lblMemory.TabIndex = 10;
            this.lblMemory.Text = "label11";
            // 
            // lblCPU
            // 
            this.lblCPU.AutoSize = true;
            this.lblCPU.Location = new System.Drawing.Point(265, 21);
            this.lblCPU.Name = "lblCPU";
            this.lblCPU.Size = new System.Drawing.Size(47, 12);
            this.lblCPU.TabIndex = 9;
            this.lblCPU.Text = "label10";
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Location = new System.Drawing.Point(190, 82);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(29, 12);
            this.label9.TabIndex = 8;
            this.label9.Text = "硬盘";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Location = new System.Drawing.Point(190, 49);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(29, 12);
            this.label8.TabIndex = 7;
            this.label8.Text = "内存";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(190, 21);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(23, 12);
            this.label7.TabIndex = 6;
            this.label7.Text = "CPU";
            // 
            // lblBrand
            // 
            this.lblBrand.AutoSize = true;
            this.lblBrand.Location = new System.Drawing.Point(107, 83);
            this.lblBrand.Name = "lblBrand";
            this.lblBrand.Size = new System.Drawing.Size(41, 12);
            this.lblBrand.TabIndex = 5;
            this.lblBrand.Text = "label6";
            // 
            // lblNme
            // 
            this.lblNme.AutoSize = true;
            this.lblNme.Location = new System.Drawing.Point(105, 21);
            this.lblNme.Name = "lblNme";
            this.lblNme.Size = new System.Drawing.Size(41, 12);
            this.lblNme.TabIndex = 3;
            this.lblNme.Text = "label4";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(23, 83);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(29, 12);
            this.label3.TabIndex = 2;
            this.label3.Text = "品牌";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(19, 21);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(29, 12);
            this.label1.TabIndex = 0;
            this.label1.Text = "名称";
            // 
            // lvComputer
            // 
            this.lvComputer.Columns.AddRange(new System.Windows.Forms.ColumnHeader[] {
            this.columnHeader1,
            this.columnHeader2,
            this.columnHeader3,
            this.columnHeader4,
            this.columnHeader5,
            this.columnHeader6});
            this.lvComputer.Location = new System.Drawing.Point(23, 13);
            this.lvComputer.Name = "lvComputer";
            this.lvComputer.Size = new System.Drawing.Size(531, 123);
            this.lvComputer.TabIndex = 1;
            this.lvComputer.UseCompatibleStateImageBehavior = false;
            this.lvComputer.View = System.Windows.Forms.View.Details;
            // 
            // columnHeader1
            // 
            this.columnHeader1.Text = "名称";
            this.columnHeader1.Width = 81;
            // 
            // columnHeader2
            // 
            this.columnHeader2.Text = "品牌";
            this.columnHeader2.Width = 89;
            // 
            // columnHeader3
            // 
            this.columnHeader3.Text = "CPU";
            this.columnHeader3.Width = 94;
            // 
            // columnHeader4
            // 
            this.columnHeader4.Text = "内存";
            this.columnHeader4.Width = 99;
            // 
            // columnHeader5
            // 
            this.columnHeader5.Text = "硬盘";
            this.columnHeader5.Width = 95;
            // 
            // columnHeader6
            // 
            this.columnHeader6.Text = "显示器";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(579, 274);
            this.Controls.Add(this.lvComputer);
            this.Controls.Add(this.groupBox1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Label lblHostType;
        private System.Windows.Forms.Label label17;
        private System.Windows.Forms.Label lblBattery;
        private System.Windows.Forms.Label lblMonitor;
        private System.Windows.Forms.Label label14;
        private System.Windows.Forms.Label label13;
        private System.Windows.Forms.Label lblHardDisk;
        private System.Windows.Forms.Label lblMemory;
        private System.Windows.Forms.Label lblCPU;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label lblBrand;
        private System.Windows.Forms.Label lblNme;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.ListView lvComputer;
        private System.Windows.Forms.ColumnHeader columnHeader1;
        private System.Windows.Forms.ColumnHeader columnHeader2;
        private System.Windows.Forms.ColumnHeader columnHeader3;
        private System.Windows.Forms.ColumnHeader columnHeader4;
        private System.Windows.Forms.ColumnHeader columnHeader5;
        private System.Windows.Forms.ColumnHeader columnHeader6;
    }
}

