using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace P17_4
{
    public partial class _Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            uint[] primes = Primes.Get(20);
            if (ViewState["cols"] == null)
                ViewState["cols"] = 2;
            int i = 0, cols = (int)ViewState["cols"];
            while (i < primes.Length)
            {
                Response.Write(primes [i].ToString ()+',');
                if (++i % cols == 0)
                    Response.Write("<br/>");
            }
        }
        protected void Button1_Click(object sender, EventArgs e)
        {
            int cols = (int)ViewState["cols"];
            if (cols < 10)
                ViewState["cols"] = cols + 1;
        }

    }
    public class Primes
    {
        private static List<uint> nums;
        static Primes()
        {
            nums = new List<uint>();
            nums.Add(1);
            nums.Add(2);
            nums.Add(3);
        }
        public static uint[] Get(uint n)
        {
            uint x = nums[nums.Count - 1];
            while (nums.Count < n) {
                x += 2;
                uint i = 3;
                while (i <= x / 3) {
                    if (x % i == 0) break;
                    i += 2;
                }
                if (i > x / 3) nums.Add(x);
            }
            return nums.ToArray();
        }
    }
}
