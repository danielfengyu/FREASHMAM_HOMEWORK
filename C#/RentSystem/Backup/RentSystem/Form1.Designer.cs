namespace RentSystem
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
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.tabPage1 = new System.Windows.Forms.TabPage();
            this.tabPage2 = new System.Windows.Forms.TabPage();
            this.tabPage3 = new System.Windows.Forms.TabPage();
            this.rdoCar = new System.Windows.Forms.RadioButton();
            this.rdoTruck = new System.Windows.Forms.RadioButton();
            this.btnAdd = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.txtAutoNum = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.txtName = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.cmbColor = new System.Windows.Forms.ComboBox();
            this.label4 = new System.Windows.Forms.Label();
            this.txtYears = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.txtLetting = new System.Windows.Forms.TextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.txtLoad = new System.Windows.Forms.TextBox();
            this.label7 = new System.Windows.Forms.Label();
            this.lvRent = new System.Windows.Forms.ListView();
            this.columnHeader1 = new System.Windows.Forms.ColumnHeader();
            this.columnHeader2 = new System.Windows.Forms.ColumnHeader();
            this.columnHeader3 = new System.Windows.Forms.ColumnHeader();
            this.columnHeader4 = new System.Windows.Forms.ColumnHeader();
            this.columnHeader5 = new System.Windows.Forms.ColumnHeader();
            this.columnHeader6 = new System.Windows.Forms.ColumnHeader();
            this.label8 = new System.Windows.Forms.Label();
            this.txtRender = new System.Windows.Forms.TextBox();
            this.btnFresh = new System.Windows.Forms.Button();
            this.btnRent = new System.Windows.Forms.Button();
            this.lvReturn = new System.Windows.Forms.ListView();
            this.columnHeader7 = new System.Windows.Forms.ColumnHeader();
            this.columnHeader8 = new System.Windows.Forms.ColumnHeader();
            this.columnHeader9 = new System.Windows.Forms.ColumnHeader();
            this.columnHeader10 = new System.Windows.Forms.ColumnHeader();
            this.columnHeader11 = new System.Windows.Forms.ColumnHeader();
            this.columnHeader12 = new System.Windows.Forms.ColumnHeader();
            this.btnCompute = new System.Windows.Forms.Button();
            this.btnRefresh2 = new System.Windows.Forms.Button();
            this.txtDay = new System.Windows.Forms.TextBox();
            this.label9 = new System.Windows.Forms.Label();
            this.tabControl1.SuspendLayout();
            this.tabPage1.SuspendLayout();
            this.tabPage2.SuspendLayout();
            this.tabPage3.SuspendLayout();
            this.SuspendLayout();
            // 
            // tabControl1
            // 
            this.tabControl1.Controls.Add(this.tabPage1);
            this.tabControl1.Controls.Add(this.tabPage2);
            this.tabControl1.Controls.Add(this.tabPage3);
            this.tabControl1.Location = new System.Drawing.Point(13, 13);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(688, 292);
            this.tabControl1.TabIndex = 0;
            // 
            // tabPage1
            // 
            this.tabPage1.Controls.Add(this.txtLoad);
            this.tabPage1.Controls.Add(this.label6);
            this.tabPage1.Controls.Add(this.txtLetting);
            this.tabPage1.Controls.Add(this.label5);
            this.tabPage1.Controls.Add(this.txtYears);
            this.tabPage1.Controls.Add(this.label4);
            this.tabPage1.Controls.Add(this.cmbColor);
            this.tabPage1.Controls.Add(this.label3);
            this.tabPage1.Controls.Add(this.txtName);
            this.tabPage1.Controls.Add(this.label2);
            this.tabPage1.Controls.Add(this.txtAutoNum);
            this.tabPage1.Controls.Add(this.label1);
            this.tabPage1.Controls.Add(this.btnAdd);
            this.tabPage1.Controls.Add(this.rdoTruck);
            this.tabPage1.Controls.Add(this.rdoCar);
            this.tabPage1.Location = new System.Drawing.Point(4, 21);
            this.tabPage1.Name = "tabPage1";
            this.tabPage1.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage1.Size = new System.Drawing.Size(680, 267);
            this.tabPage1.TabIndex = 0;
            this.tabPage1.Text = "新车入库";
            this.tabPage1.UseVisualStyleBackColor = true;
            // 
            // tabPage2
            // 
            this.tabPage2.Controls.Add(this.btnRent);
            this.tabPage2.Controls.Add(this.btnFresh);
            this.tabPage2.Controls.Add(this.txtRender);
            this.tabPage2.Controls.Add(this.label8);
            this.tabPage2.Controls.Add(this.lvRent);
            this.tabPage2.Controls.Add(this.label7);
            this.tabPage2.Location = new System.Drawing.Point(4, 21);
            this.tabPage2.Name = "tabPage2";
            this.tabPage2.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage2.Size = new System.Drawing.Size(680, 267);
            this.tabPage2.TabIndex = 1;
            this.tabPage2.Text = "租车";
            this.tabPage2.UseVisualStyleBackColor = true;
            // 
            // tabPage3
            // 
            this.tabPage3.Controls.Add(this.btnCompute);
            this.tabPage3.Controls.Add(this.btnRefresh2);
            this.tabPage3.Controls.Add(this.txtDay);
            this.tabPage3.Controls.Add(this.label9);
            this.tabPage3.Controls.Add(this.lvReturn);
            this.tabPage3.Location = new System.Drawing.Point(4, 21);
            this.tabPage3.Name = "tabPage3";
            this.tabPage3.Size = new System.Drawing.Size(680, 267);
            this.tabPage3.TabIndex = 2;
            this.tabPage3.Text = "还车";
            this.tabPage3.UseVisualStyleBackColor = true;
            // 
            // rdoCar
            // 
            this.rdoCar.AutoSize = true;
            this.rdoCar.Location = new System.Drawing.Point(23, 7);
            this.rdoCar.Name = "rdoCar";
            this.rdoCar.Size = new System.Drawing.Size(47, 16);
            this.rdoCar.TabIndex = 0;
            this.rdoCar.TabStop = true;
            this.rdoCar.Text = "轿车";
            this.rdoCar.UseVisualStyleBackColor = true;
            // 
            // rdoTruck
            // 
            this.rdoTruck.AutoSize = true;
            this.rdoTruck.Location = new System.Drawing.Point(97, 7);
            this.rdoTruck.Name = "rdoTruck";
            this.rdoTruck.Size = new System.Drawing.Size(47, 16);
            this.rdoTruck.TabIndex = 1;
            this.rdoTruck.TabStop = true;
            this.rdoTruck.Text = "卡车";
            this.rdoTruck.UseVisualStyleBackColor = true;
            // 
            // btnAdd
            // 
            this.btnAdd.Location = new System.Drawing.Point(163, 4);
            this.btnAdd.Name = "btnAdd";
            this.btnAdd.Size = new System.Drawing.Size(75, 23);
            this.btnAdd.TabIndex = 2;
            this.btnAdd.Text = "入库";
            this.btnAdd.UseVisualStyleBackColor = true;
            this.btnAdd.Click += new System.EventHandler(this.btnAdd_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(23, 30);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(53, 12);
            this.label1.TabIndex = 3;
            this.label1.Text = "车牌号：";
            // 
            // txtAutoNum
            // 
            this.txtAutoNum.Location = new System.Drawing.Point(83, 30);
            this.txtAutoNum.Name = "txtAutoNum";
            this.txtAutoNum.Size = new System.Drawing.Size(173, 21);
            this.txtAutoNum.TabIndex = 4;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(25, 59);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(29, 12);
            this.label2.TabIndex = 5;
            this.label2.Text = "车型";
            // 
            // txtName
            // 
            this.txtName.Location = new System.Drawing.Point(83, 52);
            this.txtName.Name = "txtName";
            this.txtName.Size = new System.Drawing.Size(173, 21);
            this.txtName.TabIndex = 6;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(25, 90);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(41, 12);
            this.label3.TabIndex = 7;
            this.label3.Text = "颜色：";
            // 
            // cmbColor
            // 
            this.cmbColor.FormattingEnabled = true;
            this.cmbColor.Items.AddRange(new object[] {
            "红色",
            "蓝色",
            "银灰色",
            "白色",
            "黑色"});
            this.cmbColor.Location = new System.Drawing.Point(83, 81);
            this.cmbColor.Name = "cmbColor";
            this.cmbColor.Size = new System.Drawing.Size(121, 20);
            this.cmbColor.TabIndex = 8;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(25, 117);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(65, 12);
            this.label4.TabIndex = 9;
            this.label4.Text = "使用时间：";
            // 
            // txtYears
            // 
            this.txtYears.Location = new System.Drawing.Point(83, 107);
            this.txtYears.Name = "txtYears";
            this.txtYears.Size = new System.Drawing.Size(173, 21);
            this.txtYears.TabIndex = 10;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(25, 143);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(53, 12);
            this.label5.TabIndex = 11;
            this.label5.Text = "日租金：";
            // 
            // txtLetting
            // 
            this.txtLetting.Location = new System.Drawing.Point(83, 143);
            this.txtLetting.Name = "txtLetting";
            this.txtLetting.Size = new System.Drawing.Size(173, 21);
            this.txtLetting.TabIndex = 12;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(25, 174);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(29, 12);
            this.label6.TabIndex = 13;
            this.label6.Text = "载重";
            // 
            // txtLoad
            // 
            this.txtLoad.Location = new System.Drawing.Point(83, 164);
            this.txtLoad.Name = "txtLoad";
            this.txtLoad.Size = new System.Drawing.Size(173, 21);
            this.txtLoad.TabIndex = 14;
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(199, 7);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(53, 12);
            this.label7.TabIndex = 0;
            this.label7.Text = "可租车辆";
            // 
            // lvRent
            // 
            this.lvRent.Columns.AddRange(new System.Windows.Forms.ColumnHeader[] {
            this.columnHeader1,
            this.columnHeader2,
            this.columnHeader3,
            this.columnHeader4,
            this.columnHeader5,
            this.columnHeader6});
            this.lvRent.Location = new System.Drawing.Point(7, 31);
            this.lvRent.Name = "lvRent";
            this.lvRent.Size = new System.Drawing.Size(522, 134);
            this.lvRent.TabIndex = 1;
            this.lvRent.UseCompatibleStateImageBehavior = false;
            this.lvRent.View = System.Windows.Forms.View.Details;
            // 
            // columnHeader1
            // 
            this.columnHeader1.Text = "车牌号";
            // 
            // columnHeader2
            // 
            this.columnHeader2.Text = "车名";
            // 
            // columnHeader3
            // 
            this.columnHeader3.Text = "颜色";
            // 
            // columnHeader4
            // 
            this.columnHeader4.Text = "使用时间";
            // 
            // columnHeader5
            // 
            this.columnHeader5.Text = "日租金";
            // 
            // columnHeader6
            // 
            this.columnHeader6.Text = "载重量";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Location = new System.Drawing.Point(28, 184);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(53, 12);
            this.label8.TabIndex = 2;
            this.label8.Text = "租用者：";
            // 
            // txtRender
            // 
            this.txtRender.Location = new System.Drawing.Point(88, 174);
            this.txtRender.Name = "txtRender";
            this.txtRender.Size = new System.Drawing.Size(213, 21);
            this.txtRender.TabIndex = 3;
            // 
            // btnFresh
            // 
            this.btnFresh.Location = new System.Drawing.Point(44, 215);
            this.btnFresh.Name = "btnFresh";
            this.btnFresh.Size = new System.Drawing.Size(75, 23);
            this.btnFresh.TabIndex = 4;
            this.btnFresh.Text = "刷新";
            this.btnFresh.UseVisualStyleBackColor = true;
            this.btnFresh.Click += new System.EventHandler(this.btnFresh_Click);
            // 
            // btnRent
            // 
            this.btnRent.Location = new System.Drawing.Point(174, 214);
            this.btnRent.Name = "btnRent";
            this.btnRent.Size = new System.Drawing.Size(75, 23);
            this.btnRent.TabIndex = 5;
            this.btnRent.Text = "租车";
            this.btnRent.UseVisualStyleBackColor = true;
            this.btnRent.Click += new System.EventHandler(this.btnRent_Click);
            // 
            // lvReturn
            // 
            this.lvReturn.Columns.AddRange(new System.Windows.Forms.ColumnHeader[] {
            this.columnHeader7,
            this.columnHeader8,
            this.columnHeader9,
            this.columnHeader10,
            this.columnHeader11,
            this.columnHeader12});
            this.lvReturn.Location = new System.Drawing.Point(12, 15);
            this.lvReturn.Name = "lvReturn";
            this.lvReturn.Size = new System.Drawing.Size(522, 134);
            this.lvReturn.TabIndex = 2;
            this.lvReturn.UseCompatibleStateImageBehavior = false;
            this.lvReturn.View = System.Windows.Forms.View.Details;
            // 
            // columnHeader7
            // 
            this.columnHeader7.Text = "车牌号";
            // 
            // columnHeader8
            // 
            this.columnHeader8.Text = "车名";
            // 
            // columnHeader9
            // 
            this.columnHeader9.Text = "颜色";
            // 
            // columnHeader10
            // 
            this.columnHeader10.Text = "使用时间";
            // 
            // columnHeader11
            // 
            this.columnHeader11.Text = "日租金";
            // 
            // columnHeader12
            // 
            this.columnHeader12.Text = "载重量";
            // 
            // btnCompute
            // 
            this.btnCompute.Location = new System.Drawing.Point(255, 204);
            this.btnCompute.Name = "btnCompute";
            this.btnCompute.Size = new System.Drawing.Size(75, 23);
            this.btnCompute.TabIndex = 9;
            this.btnCompute.Text = "计算";
            this.btnCompute.UseVisualStyleBackColor = true;
            this.btnCompute.Click += new System.EventHandler(this.btnCompute_Click);
            // 
            // btnRefresh2
            // 
            this.btnRefresh2.Location = new System.Drawing.Point(125, 205);
            this.btnRefresh2.Name = "btnRefresh2";
            this.btnRefresh2.Size = new System.Drawing.Size(75, 23);
            this.btnRefresh2.TabIndex = 8;
            this.btnRefresh2.Text = "刷新";
            this.btnRefresh2.UseVisualStyleBackColor = true;
            // 
            // txtDay
            // 
            this.txtDay.Location = new System.Drawing.Point(169, 164);
            this.txtDay.Name = "txtDay";
            this.txtDay.Size = new System.Drawing.Size(213, 21);
            this.txtDay.TabIndex = 7;
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Location = new System.Drawing.Point(109, 174);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(65, 12);
            this.label9.TabIndex = 6;
            this.label9.Text = "租用天数：";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(713, 402);
            this.Controls.Add(this.tabControl1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.tabControl1.ResumeLayout(false);
            this.tabPage1.ResumeLayout(false);
            this.tabPage1.PerformLayout();
            this.tabPage2.ResumeLayout(false);
            this.tabPage2.PerformLayout();
            this.tabPage3.ResumeLayout(false);
            this.tabPage3.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.TabPage tabPage1;
        private System.Windows.Forms.RadioButton rdoTruck;
        private System.Windows.Forms.RadioButton rdoCar;
        private System.Windows.Forms.TabPage tabPage2;
        private System.Windows.Forms.TabPage tabPage3;
        private System.Windows.Forms.ComboBox cmbColor;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txtName;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox txtAutoNum;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button btnAdd;
        private System.Windows.Forms.TextBox txtLoad;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox txtLetting;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox txtYears;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Button btnRent;
        private System.Windows.Forms.Button btnFresh;
        private System.Windows.Forms.TextBox txtRender;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.ListView lvRent;
        private System.Windows.Forms.ColumnHeader columnHeader1;
        private System.Windows.Forms.ColumnHeader columnHeader2;
        private System.Windows.Forms.ColumnHeader columnHeader3;
        private System.Windows.Forms.ColumnHeader columnHeader4;
        private System.Windows.Forms.ColumnHeader columnHeader5;
        private System.Windows.Forms.ColumnHeader columnHeader6;
        private System.Windows.Forms.Button btnCompute;
        private System.Windows.Forms.Button btnRefresh2;
        private System.Windows.Forms.TextBox txtDay;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.ListView lvReturn;
        private System.Windows.Forms.ColumnHeader columnHeader7;
        private System.Windows.Forms.ColumnHeader columnHeader8;
        private System.Windows.Forms.ColumnHeader columnHeader9;
        private System.Windows.Forms.ColumnHeader columnHeader10;
        private System.Windows.Forms.ColumnHeader columnHeader11;
        private System.Windows.Forms.ColumnHeader columnHeader12;
    }
}

