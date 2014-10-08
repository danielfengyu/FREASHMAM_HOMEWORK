using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace P17_8
{
    using StationTime = Tuple<string, int, int>;
    public partial class _Train : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            string no = this.Request.QueryString["no"];
            if (no == null)
            {
                Response.Write("错误，未指定车次");
                return;
            }
            Train t = Array.Find((Train[])this.Cache["trains"], x => x.No == no);
            if (t == null)
            {
                Response.Write("无此车次");
                return;

            }
            foreach (StationTime st in t)
            {
                Response.Write(string.Format("{0}{1}:{2}", st.Item1, st.Item2, st.Item3));
                Response.Write("<br/>");
            }

        }
    }
}