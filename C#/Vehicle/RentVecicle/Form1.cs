using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace RentVecicle
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        //保存可出租车的集合
        Dictionary<string, Vehicle> canrentVehicle;
        //保存已出租车的集合
        Dictionary<string, Vehicle> rentVehicle;
        private void Form1_Load(object sender, EventArgs e)
        {
            this.weightTextBox.Text = "false";
            canrentVehicle = new Dictionary<string, Vehicle>();
            Car car = new Car("京A0008", "奥迪A8", "黑色", 1, 200);
            Track track = new Track("京A0008", "奥迪A8", "黑色", 1, 200, 30);
            canrentVehicle.Add(car.LicenseNo, car);
           //canrentVehicle.Add(track.LicenseNo, track);
            AddVehicle(canrentVehicle, lvRent);
            rentVehicle = new Dictionary<string, Vehicle>();
        }
        //可出租车的列表
        private void AddVehicle(Dictionary<string, Vehicle> auto, ListView lv)
        {
            lv.Items.Clear();
            if (auto.Count == 0)
            {
                MessageBox.Show("没有可租用车辆");
            }
            else
            {
                foreach (Vehicle vh in auto.Values)
                {
                    ListViewItem item = new ListViewItem(vh.LicenseNo);
                    if (vh is Car)
                    {
                        item.SubItems.AddRange(new string[] { vh.Name, vh.Color, vh.UseTime.ToString(), vh.RentMoney.ToString(), "无" });
                    }
                    if (vh is Track)
                    {
                        item.SubItems.AddRange(new string[] { vh.Name, vh.Color, vh.UseTime.ToString(), vh.RentMoney.ToString(), ((Track)vh).LoadWeight.ToString() });

                    }
                    lv.Items.Add(item);
                }
            }
        }
        //新车入库
        private void inButton_Click(object sender, EventArgs e)
        {
            try
            {
                string licenseno = vehicleNumTextBox.Text;
                string name = brandTextBox.Text;
                string color = colorComboBox.Text;
                int usetime = Convert.ToInt32(useTimeTextBox.Text);
                int rentmoney = Convert.ToInt32(rentMoneyTextBox.Text);
                int loadweight = 0;
                string type = null;
                if (radioCar.Checked)
                {
                    type = "car";

                }
                if (radioTrack.Checked)
                {
                    type = "track";
                    loadweight = Convert.ToInt32(weightTextBox.Text);
                }
                Vehicle atuo = VehicleFactory.CreateVehicle(licenseno, name, color, usetime, rentmoney,loadweight , type);
                canrentVehicle.Add(atuo.LicenseNo, atuo);
                MessageBox.Show("添加成功！");
            }
            catch (Exception ex)
            {
                MessageBox.Show("数据格式不对！");
            }
        }

        private void btnRedo_Click(object sender, EventArgs e)
        {
            AddVehicle(canrentVehicle, lvRent);
        }

        //用户租车
        private void btnRent_Click(object sender, EventArgs e)
        {
            string key = null;
            if (String.IsNullOrEmpty(this.txtRender.Text))
            {
                MessageBox.Show("请输入租车者的姓名");
                return;
            }
            if (this.lvRent.SelectedItems.Count == 0)
            {
                MessageBox.Show("请选择车辆");
                return;
            }
            key = lvRent.SelectedItems[0].Text;//获取车牌号
            canrentVehicle[key].RentUser = this.txtRender.Text;
            rentVehicle.Add(canrentVehicle[key].LicenseNo, canrentVehicle[key]);
            if (canrentVehicle.ContainsKey(key))//删除可租用车列表里的数据
            {
                canrentVehicle.Remove(key);
            }
            AddVehicle(canrentVehicle, lvRent);
            AddVehicle(rentVehicle, lvReturn);
            MessageBox.Show("租车成功");



        }
        private void btnCompute_Click(object sender, EventArgs e)
        {
            double totalprice = 0.0;
            string key = null;
            if (String.IsNullOrEmpty(txtDay.Text))
            {
                MessageBox.Show("请输入租车天数");
                return;
            }
            if (lvReturn.SelectedItems.Count == 0)
            {
                MessageBox.Show("请选择车辆");
                return;
            }
            key = lvReturn.SelectedItems[0].Text;
            rentVehicle[key].RendDay = Convert.ToInt32(txtDay.Text);
            totalprice = rentVehicle[key].CalcPrice();
            string msg = String.Format("你的总价是{0}", totalprice.ToString());
            MessageBox.Show(msg);
            canrentVehicle.Add(rentVehicle[key].LicenseNo, rentVehicle[key]);
            if (rentVehicle.ContainsKey(key))
            {
                rentVehicle.Remove(key);
            }
            AddVehicle(canrentVehicle, lvRent);
            AddVehicle(rentVehicle, lvReturn);

        }
    }
}


