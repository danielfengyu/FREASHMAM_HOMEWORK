using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows.Forms;

namespace P9_3
{
    static class Program
    {
        /// <summary>
        /// 应用程序的主入口点。
        /// </summary>
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            LoginForm frm1 = new LoginForm("cs","888888");
            if (frm1.ShowDialog() == DialogResult.Cancel) return;
            Application.Run(new Form1());
        }
    }
}
