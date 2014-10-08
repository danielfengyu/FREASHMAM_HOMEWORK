using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Decorator_Dos
{
    class Program
    {
        static void Main(string[] args)
        {
            ConcreteComponent c = new ConcreteComponent();
            ConcreteDecoratorA d1 = new ConcreteDecoratorA();
            ConcreteDecoratorB d2 = new ConcreteDecoratorB();
            d1.setComponent(c);
            d2.setComponent(d1);
            d2.Operation();
            Console.Read();
        }
    }
}
