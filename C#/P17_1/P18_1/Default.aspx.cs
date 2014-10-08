using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace P18_1
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            this.Title = "C#首页";
            this.Response.Write("欢迎光临！");
            this.Response.Write("你的浏览器为："+this.Request .Browser.Type);
            this.Response.Write("你的浏览器为：" + this.Request.UserHostAddress);

        }
    }
}
