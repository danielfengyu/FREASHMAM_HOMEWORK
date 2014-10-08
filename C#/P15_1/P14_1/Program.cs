using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
namespace P14_1
{
    class Program
    {
        static void Main(string[] args)
        {
            DriveInfo[] drivers = DriveInfo.GetDrives();
            foreach (DriveInfo drv in drivers)
            {
                try { ShowDriveInfo(drv); }
                catch (System.Security.SecurityException)
                {
                    Console.WriteLine("你对此驱动器没有足够的访问权限");
                }
                catch (Exception exp)
                {
                    Console.WriteLine("访问失败：", exp.Message);
                }
            }
        }
        public static void ShowDriveInfo(DriveInfo drv)
        { 
            if(!drv.IsReady)
            {
                Console.WriteLine("驱动器{0}未就绪",drv.Name );
                Console.WriteLine("类型",GetTypeName(drv.DriveType));
                return;
            }
            Console .WriteLine ("驱动器{0}已就绪",drv .Name );
            Console .WriteLine ("类型:{0}",GetTypeName(drv.DriveType ));
            Console .WriteLine ("文件格式：{0}",drv.DriveFormat);
            Console .WriteLine ("卷标：{0}",drv.VolumeLabel );
            long m=1048576;
            Console .WriteLine ("容量{0}MB，可用空间{1}MB,有效可用空间{2}MB\n",
                drv.TotalSize/m,drv.TotalFreeSpace/m,drv.AvailableFreeSpace/m );

        }
        public static string GetTypeName(DriveType dt)
        {
            switch(dt)
            {
                case DriveType .Fixed :
                    return "本地硬盘";
                case DriveType .Removable :
                    return "可移动磁盘";
                case DriveType .CDRom :
                    return "CD Rom";
                case DriveType .Network :
                    return "网络磁盘";
                case DriveType .Ram :
                    return "Ram 闪存";
                default :
                    return "未知";
            }
        }
    }
}
