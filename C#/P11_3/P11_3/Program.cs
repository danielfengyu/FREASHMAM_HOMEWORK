using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P11_3
{
    using StationTime = Tuple<string, TimeClock>;
    class Program
    {
        static void Main(string[] args)
        {
            StationTime[] train1 = new StationTime[5];
            TimeClock tc1 = new TimeClock(7,55,0);
            train1[0] = new StationTime("郑州",tc1);
            train1[1] = new StationTime("洛阳龙门", tc1.AddMinutes(41));
            train1[2] = new StationTime("三门峡", tc1.AddMinutes(72));
            train1[3] = new StationTime("华山西", tc1.AddMinutes(106));
            train1[4] = new StationTime("西安南", tc1.AddMinutes(154));
            foreach (StationTime s in train1)
                Console.WriteLine(s );
        }
    }
    public struct TimeClock
    {
        private Tuple<int, int, int> tc;
        public int Hour { get { return tc.Item1; } }
        public int Minute { get { return tc.Item2; } }
        public int Second { get { return tc.Item3; } }
        public TimeClock(int hour, int minute, int second)
        {
            tc = new Tuple<int, int, int>(hour % 24, minute % 60, second % 60);
        }
        public TimeClock AddHours(int hours)
        {
            return new TimeClock((tc.Item1 + hours) % 24, tc.Item2, tc.Item3);
        }
        public TimeClock AddMinutes(int minutes)
        {
            int m = (tc.Item2 + minutes) % 60;
            int h = (tc.Item3 + minutes) / 60;
            return new TimeClock((tc.Item1+h)%24,m,tc.Item3);
                
        }
        public TimeClock AddSeconds(int seconds)
        {
            int s = (tc.Item3 + seconds) % 60;
            int m = (tc.Item3 + seconds) / 60;
            m = (tc.Item2 + m) % 60;
            int h = (tc.Item2 + m) / 60;
            return new TimeClock((tc.Item1 + h) % 24, m, s);

        }
        public override string ToString()
        {
            return string.Format ("{0:d2}:{1:d2}:{2:d2}",tc.Item1,tc.Item2,tc.Item3);
        }
        public string ToStringCn()
        {
            return string.Format("{0:d2}时{1：d2}分{2:d2}秒",tc.Item1,tc.Item2,tc.Item3);
        }
    }
}
