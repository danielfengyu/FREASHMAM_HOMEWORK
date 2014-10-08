using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Drawing;
using System.Drawing.Imaging;
using System.IO;
namespace P17_3
{
    public partial class _Default : System.Web.UI.Page
    {
        
        protected void Page_Load(object sender, EventArgs e)
        {
            Bitmap bmp = new Bitmap(80,40);
            Graphics g = Graphics.FromImage(bmp);
            g.Clear(Color.White);
            g.DrawRectangle(Pens.Black, 0, 0, 79, 39);
            Color[] colors = { Color.Black, Color.Red, Color.Blue, Color.DarkGreen, Color.Purple, Color.DarkGoldenrod, Color.Chocolate };
            string[] fontNames = { "宋体", "楷体_GB2312", "隶书", "Arial", "Comic Sans MS", "Microsoft Sans Serif", "Times New Roman" };
            Random rand = new Random();
            char[] chs = new char[] { (char)(65 + rand.Next(26)),(char )(65+rand.Next (26)),(char)(65+rand.Next (26)) };
            Brush brush;
            Font font;
            int x, y;
            for (int i = 0; i < 3; i++)
            {
                brush = new SolidBrush(colors[rand.Next(7)]);
                font = new Font(fontNames [rand.Next (7)],18,FontStyle.Bold );
                x = i * 20 + 2;
                y = 5 + rand.Next(5);
                g.RotateTransform(rand.Next(-10, 9));
                g.DrawString(chs[i].ToString(), font, brush, x, y);

            }
            Pen[] pens = { Pens.Gray, Pens.LightGray };
            for (int i = 0; i < 200; i++)
            {
                x = rand.Next(bmp.Width - 1);
                y = rand.Next(bmp.Height - 1);
                g.DrawEllipse(pens[i % 2], x, y, 1, 1);

            }
            MemoryStream ms = new MemoryStream();
            bmp.Save(ms, ImageFormat.Jpeg);
            this.Response.Clear();
            this.Response.ContentType = "image/Jpeg";
            this.Response.BinaryWrite(ms.ToArray ());
            g.Dispose();
            bmp.Dispose();
        }
    }
}
