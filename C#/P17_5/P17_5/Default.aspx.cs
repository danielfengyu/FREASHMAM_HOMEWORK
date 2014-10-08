using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace P17_5
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (IsPostBack) return;
            for (int i = 1; i < 9; i++)
            {
                RadioButtonList1.Items.Add(((BulletStyle)i).ToString ());
            }
            RadioButtonList1.AutoPostBack = true;
            RadioButtonList1.RepeatDirection = RepeatDirection.Horizontal;
            BulletedList1.Items.Add("北京");
            BulletedList1.Items.Add("上海");
            BulletedList1.Items.Add("天津");

        }
        protected void RadioButtonList1_SelectedIndexChanged(object sender, EventArgs e)
        {
            BulletedList1.BulletStyle = (BulletStyle)(RadioButtonList1.SelectedIndex + 1);
        }
    }
}
