namespace FlushBird
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.pictBoxSeaGull = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.pictBoxSeaGull)).BeginInit();
            this.SuspendLayout();
            // 
            // pictBoxSeaGull
            // 
            this.pictBoxSeaGull.Image = ((System.Drawing.Image)(resources.GetObject("pictBoxSeaGull.Image")));
            this.pictBoxSeaGull.Location = new System.Drawing.Point(3, 97);
            this.pictBoxSeaGull.Name = "pictBoxSeaGull";
            this.pictBoxSeaGull.Size = new System.Drawing.Size(116, 97);
            this.pictBoxSeaGull.SizeMode = System.Windows.Forms.PictureBoxSizeMode.AutoSize;
            this.pictBoxSeaGull.TabIndex = 0;
            this.pictBoxSeaGull.TabStop = false;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(512, 347);
            this.Controls.Add(this.pictBoxSeaGull);
            this.KeyPreview = true;
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.pictBoxSeaGull)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox pictBoxSeaGull;
    }
}

