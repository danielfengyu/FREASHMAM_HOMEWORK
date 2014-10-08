using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P6_5
{
    class Program
    {
        static void Main(string[] args)
        {
            BookStore store1 = new BookStore("中关村");
            BookStore store2 = new BookStore("中山路");
            Customer []cs=new Customer []{
                new Customer ("王晓明", Domain.Computer ),
                new Customer ("赵丽",Domain.Computer ),
                new Customer ("张珊",Domain .Literature )};
            foreach (Customer c in cs )
            {
                c.Register (store1);
                c.Register (store2);
            }
            store1.NewBook(Domain .Computer ,"C#程序设计");
                store2.NewBook (Domain .Literature ,"唐诗三百首");
            cs[0].Unregister (store2 );
            store2 .NewBook (Domain .Computer ,"数据结构域算法");
        }
    }
    enum Domain { Computer,Economic,Literature,Sport}
    delegate void BookHander(BookStore sender,Domain dom,string book);
    class BookStore
    {
        private string _name;
        public event BookHander OnNewBook;
        public string Name
        {
            get
            {
                return _name;
            }

        }
        public BookStore(string name)
        {
            _name = name;
        }
        public void NewBook(Domain dom, string book)
        {
            OnNewBook(this ,dom,book );
        }

    }
    class Customer
    {
        private string _name;
        private Domain _dom;
        public Customer(string name, Domain dom)
        {
            _name = name;
            _dom = dom;
        }
        void store_OnNewBook(BookStore store, Domain dom, string book)
        {
            if (dom == _dom)
                Console.WriteLine("{0}你好：{1}店新到新书《{2}》", _name, store.Name, book);
        }
        public void Register(BookStore store)
        {
            store.OnNewBook += new BookHander(store_OnNewBook);

        }
        public void Unregister(BookStore store)
        {
            store.OnNewBook -= new BookHander(store_OnNewBook);
        }
    }
}
