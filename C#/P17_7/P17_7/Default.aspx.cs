using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace P17_7
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (Application["fileid"] == null)
                Application["fileid"] = 1;

        }
        protected void Button1_Click(object sender, EventArgs e)
        {
            if (!FileUpload1.HasFile)
            {
                Label1.Text = "请选择要上传的文件！";
                return;
            }
            if (FileUpload1.PostedFile.ContentLength > 5000000)
            {
                Label1.Text = "文件的大小不能超过5M";
                return;
            }
            HttpPostedFile file = FileUpload1.PostedFile;
            string dir = Server.MapPath("~/Uploads/");
            int id =(int)Application ["fielid"];
            string filename;
            if (file.ContentType == "application/msword")
                filename = string.Format("{0}\\{1}.doc", dir, id);
            else if (file.ContentType == "application/pdf")
                filename = string.Format("{0}\\{1}.pdf", dir, id);
            else {
                Label1.Text = "文件类型必须是.doc和.pdf!";
                return;
            }
            try
            {
                file.SaveAs(filename);
                Application["fileid"] = id + 1;
                Label1.Text = "你成功的上传了文件" + FileUpload1.FileName;
            }
            catch (Exception exp)
            {
                Label1.Text = "上传失败："+exp.ToString ();
            }
        }
    }
}
