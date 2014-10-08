using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Web;
namespace P17_6
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            string[] ss = { "活期", "零存整取","整存整取" };
            for (int i = 0; i < 3; i++)
            {
                TableRow row = new TableRow();
                TableCell cell = new TableCell();
                cell.Text = ss[i];
                row.Cells.Add(cell);
                for (int j = 0; j < 5; j++)
                {
                    cell = new TableCell();
                    cell.Text = (1 + (i + 1) * (j + 1) * 0.05).ToString();
                    row.Cells.Add(cell );

                }
                Table1.Rows.Add(row);
            }
        }
    }
}
