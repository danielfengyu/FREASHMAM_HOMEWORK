using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Decorator_Dos
{
    public abstract class Decorator : Component
    {
        private Component component;

        protected Component Component1
        {
            get { return component; }
            set { component = value; }
        }


        public void setComponent(Component component)
        {
            this.component = component;
        }

        public override void Operation()
        {
            if (component != null)
            {
                component.Operation();
            }
        }
    }
}
