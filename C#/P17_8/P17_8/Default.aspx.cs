using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
namespace P17_8
{
   
    public partial class _Default : System.Web.UI.Page
    {
        private Train[] trains;
        protected void Page_Load(object sender, EventArgs e)
        {
            if (this.Cache["trains"] == null)
            {
                trains = Train.Read(Server.MapPath("~/trains.txt"));
                this.Cache["trains"] = trains;
            }
            else
                trains = (Train[])this.Cache["trains"];
        }
        protected void Button1_Click(object sender, EventArgs e)
        {
            Train[] result = Array.FindAll(trains, x => x.No.Contains(TextBox1.Text));
            if (result.Length == 0)
            {
                Label1.Text = "没有查到符合条件的列车";
                return;
            }
            Label1.Text = string.Format("共查询到{0}趟列车",result .Length );
            Table1.Rows.Clear();
            foreach (Train t in result)
            {
                TableCell cell = new TableCell();
                cell.Text = string.Format("<A herf=Train.aspx?no={0}>{1}</A>", t.No, t);
                TableRow row = new TableRow();
                row.Cells.Add(cell);
                Table1.Rows.Add(row);

            }
        }
        protected void Button2_Click(object sender, EventArgs e)
        {
            Train[] result = Array.FindAll(trains,x=>x.PassThrough (TextBox2.Text,TextBox3.Text));
            if (result.Length == 0)
            {
                Label1.Text = "没有查到符合条件的列车";
                return;
            }
            Label1.Text = string.Format("共查询到{0}趟列车",result.Length );
            Table1.Rows.Clear();
            foreach (Train t in result )
            {
                TableCell cell=new TableCell ();
                cell.Text =string .Format ("<a herf=Train.aspx?no={0}>{1}</A>",t.No,t);
                TableRow row=new TableRow ();
                row.Cells .Add (cell);
                Table1.Rows.Add(row);

            }
        }

        protected void TextBox2_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
