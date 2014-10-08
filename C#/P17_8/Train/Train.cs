using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Collections;
using System.IO;
namespace Train
{
    using StationTime = Tuple<string, int, int>;
    public class Train:IEnumerable<StationTime>
    {
        private string no;
        private List <StationTime >sts;
        public string No
        {
            get{return no;}
        }
        public List <StationTime >Stations
        {
            get{return sts;}
        }
        public Train (string no)
        {
            this.no =no;
            sts=new List <StationTime >();
        }
        public bool PassThrough(string s1,string s2)
        {
            int i1 = sts.FindIndex(x => x.Item1 == s1);
                int i2=sts.FindIndex (x=>x.Item1==s2);
            return (i1>=0&&i2>=0&&i1<i2);
        }
        public override string ToString()
        {

            return string.Format("{0}次{1}到{2}",no,sts[0].Item1 ,sts[sts.Count -1].Item1 );
        }
        public IEnumerator<StationTime> GetEnumerator()
        {
            return sts.GetEnumerator();
        }
        IEnumerator IEnumerable.GetEnumerator()
        {
            return sts.GetEnumerator();
        }
        public static Train Read(StreamReader reader)
        {
            if (reader.EndOfStream)
                return null;
            Train t = new Train(reader.ReadLine());
            string s = reader.ReadLine();
            while (s != null && s.Length > 0 && s[0] == '(' && s[s.Length - 1] == ')')
            {
                s = s.Substring(1, s.Length - 2);
                string[] ss = s.Split(',');
                t.sts.Add(new StationTime(ss[0], int.Parse(ss[1]), int.Parse(ss[2])));
                s = reader.ReadLine();
            }
            return t;
        }
        public static Train[] Read(string filename)
        {
            List<Train> trains = new List<Train>();
            StreamReader reader = new StreamReader(filename);
            Train t = Train.Read(reader);
            while (t != null)
            {
                trains.Add(t);
                t = Train.Read(reader);
            }
            reader.Close();
            return trains.ToArray();
        }
        public void main()
        { 
        
        }
        
    }
}
