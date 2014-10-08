using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Company
{
    public class HRDepartment : Company
    {
        public HRDepartment(string name)
            : base(name)
        { 
            
        }
        public override void Add(Company c)
        {
            
        }

        public override void Remove(Company c)
        {
            
        }

        public override void Display(int depth)
        {
            Console.WriteLine(new String('-', depth), Name);
        }

        public override void LineOfDuty()
        {
            Console.WriteLine("{0}员工招聘培训",Name );
        }
    }
}
