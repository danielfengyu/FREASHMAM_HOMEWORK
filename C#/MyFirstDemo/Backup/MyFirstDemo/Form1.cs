using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Collections;


namespace MyFirstDemo
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            
        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }
        Dictionary<string, Computer> dic;
        private void Form1_Load(object sender, EventArgs e)
        {
            InitComputer();
            InitLvComputer();
            
        }
        
        public void  InitComputer()
        {
            NoteBook notebook = new NoteBook("T61", "IBM", "intel酷睿2", "2GB", "160GB", "14寸", "7芯锂电池");
            Desktop desktop = new Desktop("530MT", "DELL", "intel酷睿4", "4GB", "1T", "21寸", "立式机箱");
            dic = new Dictionary<string, Computer>();
            dic.Add(notebook.Name, notebook);
            dic.Add(desktop.Name, desktop);
        }
        public void InitLvComputer()
        {
            this.lvComputer.Items.Clear();
            foreach(Computer computer in dic.Values)
            {
                ListViewItem item = new ListViewItem(computer.Name);
                item.SubItems.AddRange(new string[] { computer.Brand, computer.Cpu, computer.Memory, computer.HardDisk, computer.Monitor });
                lvComputer.Items.Add(item);

            }

        }


        
       
    }
}
