using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Decorator_Dos
{
    public class ConcreteDecoratorB : Decorator
    {
        public override void Operation()
        {
            base.Operation();
            AddedBehavior();
            Console.WriteLine("具体装饰对象B的操作");
        }
        private void AddedBehavior()
        { }
    }
}
