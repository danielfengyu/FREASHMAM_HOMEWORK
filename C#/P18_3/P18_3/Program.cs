using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P18_3
{
    /// <summary>
    /// 主程序
    /// </summary>
    class Program
    {
        static void Main(string[] args)
        {
            Contact c = new Contact("张大强");
            c[0] = "13368531349";
            Console.WriteLine(c );
        }
    }
    /// <summary>
    /// 联系人类型
    /// </summary>
    public class Contact
    {
        private string name;
        private string[] phones;
        /// <summary>
        /// 读取联系人姓名
        /// </summary>
        public string Name
        {
            get { return name; }

        }
        /// <summary>
        /// 联系人号码的索引函数
        /// </summary>
        /// <param name="index">0—手机，1—家庭电话，2-办公室电话</param>
        /// <returns>指定的电话号码</returns>
        public string this[int index]
        {
            get { return phones[index]; }
            set { phones[index] = value; }

        }
        /// <summary>
        /// 读取或设置联系人地址
        /// </summary>
        public string Address { get; set; }
        /// <summary>
        /// 创建指定姓名的联系人对象
        /// </summary>
        /// <param name="name">联系人姓名</param>
        public Contact(string name)
        { 
            this.name =name;
            phones =new string[3];
        }
        /// <summary>
        /// 联系人的汇总信息描述
        /// </summary>
      
        public override string ToString()
        {
            StringBuilder sb1 = new StringBuilder();
            sb1.AppendLine(name);
            sb1.AppendLine("手机："+phones[0]);
            sb1.AppendLine("家庭电话："+phones[1]);
            sb1.AppendLine("办公室电话："+phones [2]);
            sb1.AppendLine("通讯地址："+Address );
            return sb1.ToString();

        }
    }
}
