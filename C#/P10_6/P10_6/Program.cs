using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace P10_6
{
    class Program
    {
        static void Main(string[] args)
        {
            int []x={15,3,5,6,22,22,4,8,98,0};
            SBTreeNode <int >node=SBTreeNode <int >.CreateOrderedBTree (x);
            node .InorderTraverse();
        }
    }
    public class BTreeNode<T>
    {
        private T data;
        public T Data
        {
            get{return data;}
            set{
                if(!data.Equals(value))
                    data = value;
            }
        }
        public BTreeNode <T>Left{get;set;}
        public BTreeNode <T>Right{get;set;}
        public BTreeNode (T data)
        {
            this .data =data ;
        }
        public void InorderTraverse()
        {
            if(this.Left !=null)
                this.Left .InorderTraverse ();
            Console .Write(this.data .ToString ()+' ');
            if(this.Right!=null)
                this.Right .InorderTraverse ();
        }
    }
    public class SBTreeNode<T> : BTreeNode<T> where T : IComparable
    {
        public new SBTreeNode<T> Left
        {
            get { return (SBTreeNode<T>)base.Left; }
            set { base.Left = value; }
        }
        public new SBTreeNode<T> Right
        {
            get { return (SBTreeNode<T>)base.Right; }
            set { base.Right = value; }
        }
        public SBTreeNode(T data) : base(data) { }
        public static SBTreeNode<T> CreateOrderedBTree(T[] array)
        {
            return CreateOrderedBTree(0,array);
        }
        private static SBTreeNode <T> CreateOrderedBTree(int i,T[]array)
        {
            if(i==array.Length-1)
                return new SBTreeNode<T> (array [array.Length -1]);
            else
            {
                SBTreeNode <T>node = CreateOrderedBTree (i+1,array);
                InsertInOrder(node,array [i]);
                return node;
            }
        }
        public static void InsertInOrder(SBTreeNode <T> node,T t)
        {
            if(t.CompareTo (node.Data)<0)
                if(node.Left ==null)
                    node.Left =new SBTreeNode<T> (t);
                else
                    InsertInOrder (node.Left,t);
            else
                if(node.Right ==null)
                    node.Right =new SBTreeNode<T> (t);
                else
                    InsertInOrder (node.Right ,t);
        }
    }
}
