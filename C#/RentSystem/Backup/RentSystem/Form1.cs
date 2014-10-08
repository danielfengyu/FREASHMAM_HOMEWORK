using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace RentSystem
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        //保存可租用车辆的集合
        Dictionary<string, Vehicle> vehicle;
        //保存已经租出去的车辆集合
        Dictionary<string, Vehicle> rentVehicle;

        private void Form1_Load(object sender, EventArgs e)
        {
            vehicle = new Dictionary<string, Vehicle>();
            Car car = new Car("京A001", "奥迪A8", "黑色", 2, 240);
            Truck truck = new Truck("吉A003", "东风", "蓝色", 1, 200, 20);
            vehicle.Add(car.LicenseNo, car);
            vehicle.Add(truck.LicenseNo, truck);
            AddVehicle(vehicle, lvRent);
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
                     item.SubItems.AddRange(new string[]{vh.Name,vh.Color,vh.ServiceYear.ToString(),vh.DailyRent.ToString(),"无"});
                    }
                    if (vh is Truck)
                    {
                        item.SubItems.AddRange(new string[] { vh.Name, vh.Color, vh.ServiceYear.ToString(), vh.DailyRent.ToString(), ((Truck)vh).Load.ToString() });
                  
                    }
                    lv.Items.Add(item);
                }
            }
        }
        //汽车入库操作
        private void btnAdd_Click(object sender, EventArgs e)
        {
            try
            {

                string licenseNo = txtAutoNum.Text;
                string name = txtName.Text;
                string color = cmbColor.Text;
                int years = Convert.ToInt32(txtYears.Text);
                double dailyRent = Convert.ToDouble(txtLetting.Text);
                int load = 0;
                string type = null;
                if (rdoCar.Checked)
                {
                    type = "car";
                }
                if (rdoTruck.Checked)
                {
                    type = "truck";
                    load = Convert.ToInt32(txtLoad.Text);
                }
                Vehicle vh = VehicleFactory.CreateVehicle
                         (licenseNo, name, color, years, dailyRent, load, type);
                vehicle.Add(vh.LicenseNo, vh);
                MessageBox.Show("添加成功");
            }
            catch (Exception ex)
            {
                MessageBox.Show("数据格式不对");
            }

        }

        private void btnFresh_Click(object sender, EventArgs e)
        {
            AddVehicle(vehicle, lvRent);
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
            vehicle[key].RentUser = this.txtRender.Text;
            rentVehicle.Add(vehicle[key].LicenseNo, vehicle[key]);
            if (vehicle.ContainsKey(key))//删除可租用车列表里的数据
            {
                vehicle.Remove(key);
            }
            AddVehicle(vehicle, lvRent);
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
            rentVehicle[key].RendDay =Convert.ToInt32( txtDay.Text);
            totalprice = rentVehicle[key].CalcPrice();
            string msg = String.Format("你的总价是{0}", totalprice.ToString());
            MessageBox.Show(msg);
            vehicle.Add(rentVehicle[key].LicenseNo, rentVehicle[key]);
            if (rentVehicle.ContainsKey(key))
            {
                rentVehicle.Remove(key);
            }
            AddVehicle(vehicle, lvRent);
            AddVehicle(rentVehicle, lvReturn);

        }
    }
}
