using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Text;
namespace P17_2
{
    public partial class _Default : System.Web.UI.Page
    {
        private Contact[] contacts;
        public _Default()
        {
            contacts = new Contact[3];
            contacts[0] = new Contact("张大强") { Email = "zhangdaqiang@soft.cn" };
            contacts[1] = new Contact("张珊", false);
            contacts[1].Phones[0] = "188426866142";
            contacts[2] = new Contact("王晓明");

        }
        protected void Page_Load(object sender, EventArgs e)
        {
            string id = this.Request.QueryString["id"];
            if (id == null)
                Response.Write("错误：未指定联系人id");
            else
                Response.Write(contacts [int.Parse (id)]);
        }
    }
    public class Contact
    {
        private string name;
        private bool gender;
        private string[] phones;
        public string Name
        {
            get { return name; }
        }
        public char Gender
        {
            get { return gender ? '男' : '女'; }
        }
        public string[] Phones
        {
            get { return phones; }
        }
        public string Email { get; set; }
        public string Address { get; set; }
        public Contact(string name, bool gender = true)
        {
            this.name = name;
            this.gender = gender;
            phones = new string[3];
        }
        public override string ToString()
        {
            StringBuilder sb1 = new StringBuilder(name);
            sb1.Append(' ');
            sb1.AppendLine(Gender.ToString());
            for (int i = 0; i < phones.Length; i++)
            {
                if (phones[i] != null)
                    sb1.Append(phones[i]+",");
            }
            sb1.Append("\r\nEmail:");
            sb1.AppendLine(Email);
            sb1.Append("Address:");
            sb1.AppendLine(Address);
            return sb1.ToString();
        }
    }
}
