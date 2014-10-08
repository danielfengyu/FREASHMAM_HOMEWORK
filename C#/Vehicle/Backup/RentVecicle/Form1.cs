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
            this.weightTextBox .Text ="false";
                canrentVehicle =new Dictionary<string,Vehicle> ();
            Car car=new Car ("京A0008","奥迪A8","黑色",1,200);
            Track track=new Track ("京A0008","奥迪A8","黑色",1,200,30);
            canrentVehicle .Add (car .licenseNo ,car );
            canrentVehicle .Add (track .licenseNo ,track )
        }
        //新车入库
        private void inButton_Click(object sender, EventArgs e)
        {
            string licenseno=vehicleNumTextBox .Text ;
            string name=brandTextBox.Text ;
            string color=colorComboBox.Text ;
            int usetime=Convert .ToInt32 (useTimeTextBox .Text );
            int rentmoney=Convert .ToInt32 (rentMoneyTextBox.Text );
            int loadweight =0;
            string type=null;
            if(radioCar .Checked )
            {
                type ="car";

            }
            if(radioTrack .Checked )
            {
                type ="track";
                loadweight =Convert .ToInt32 (weightTextBox .Text );
            }
            Vehicle atuo=VehicleFactory .CreateVehicle (licenseno,name,color ,usetime,rentmoney,loadweight,type );
            canrentVehicle .Add (licenseno ,atuo );
            MessageBox .Show ("添加成功！");
        }

        private void btnRedo_Click(object sender, EventArgs e)
        {

        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            public void LoadVehicleData(Dictionary <string,Vehicle > atuos,ListView listView1){
                   listView1 .Items .Clear ();
                foreach (Vehicle vehicle in atuos.Values  )
                {
                    ListViewItem item=new ListViewItem (vehicle .licenseNo );
                    if(vehicle is Car )
                    {
                        item .SubItems.AddRange (new string[]{vehicle .name ,vehicle .color ,vehicle .useTime.ToString(), vehicle .rentMoney.ToString(),"无" });
                    }
                    if(vehicle  is Track ){
                        item .SubItems.AddRange (new string[]{vehicle .name ,vehicle .color ,vehicle .useTime.ToString(), vehicle .rentMoney.ToString() });
                        
                    }
                    listView1 .Items .Add (item );
                }
            }
        
        }

       
    }
}
