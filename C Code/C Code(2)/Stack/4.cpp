

#include"Graph.h"

#include"LinkedQueue.h"

#include<iostream>

template<class T>

struct Edge{

       int dest;

       int cost;

       Edge<T> *link;

       Edge(){}

       Edge(int num,int weight):dest(num),cost(weight),link(NULL){}

       bool operator !=(Edge<T>&R)const{

              return (dust!=R.dest)?true:false;

       }

};

template<class T>

struct Vertex{

       T data;

       Edge<T> *adj;

};

template<class T>

class Graphlnk:public Graph<T>

{

       public:

              Graphlnk(int sz);

              Graphlnk(){};

              ~Graphlnk();

              T getValue(int i)

              {return (i>=0&&i<numVertices)?NodeTable[i].data:0;}

              int getWeight(int v1,int v2);

              int getFistNeighbor(int v);

              int getNextNeighbor(int v,int w);

              bool insertVertex(const T& vertex);

              bool insertEdge(int v1,int v2,int weight);

              //bool removeVertex(int v);

              //bool removeEdge(int v1,int v2);      

           void DFS(Graphlnk<T> &G,T v);

              void BFS(Graphlnk<T> &G,T v);

       private:

              Vertex<T> *NodeTable;

              void DFS(Graphlnk<T> &G,int v,bool visited[]);

       int getVertexPos(T m){

                     for(int i=0;i<numVertices;i++)

                     {if(NodeTable[i].data==m) return i;}

                            return -1; }

};

template<class T>

Graphlnk<T>::Graphlnk(int sz)

{

       maxVertices=sz;

       numVertices=0;

       numEdges=0;

       NodeTable=new Vertex<T>[maxVertices];

       if(NodeTable==NULL) {cerr<<"储存分配错!"<<endl;exit(1);}

       for(int i=0;i<maxVertices;i++) NodeTable[i].adj=NULL;

};

template<class T>

Graphlnk<T>::~Graphlnk(){

       for(int i=0;i<numVertices;i++){

              Edge<T> *p=NodeTable[i].adj;

              while(p!=NULL){

                     NodeTable[i].adj=p->link;

                     delete p;

                     p=NodeTable[i].adj;

              }

       }

       delete []NodeTable;

};

template<class T>

int Graphlnk<T>::getFistNeighbor(int v){

       if(v!=-1){

              Edge<T> *p=NodeTable[v].adj;

              if(p!=NULL) return p->dest;

       }

   return -1;

};

template<class T>

bool Graphlnk<T>::insertVertex(const T& vertex){

       if(numVertices==maxVertices) return false;

       NodeTable[numVertices].data=vertex;

       numVertices++;return true;

};

template<class T>

bool Graphlnk<T>::insertEdge(int v1,int v2,int weight){

       if(v1>=0&& v1<numVertices&& v2>=0&&v2<=numVertices){

              Edge<T> *q,*p=NodeTable[v1].adj;

              while(p!=NULL && p->dest!=v2)

                     p=p->link;

              if(p!=NULL) return false;

              p=new Edge<T>;q=new Edge<T>;

              p->dest=v2;p->cost=weight;

              p->link=NodeTable[v1].adj;

              NodeTable[v1].adj=p;

              q->dest=v1;q->cost=weight;

              q->link=NodeTable[v2].adj;

              NodeTable[v2].adj=q;

              numEdges++;return true;

       }

       return 0;

};

template<class T>

int Graphlnk<T>::getNextNeighbor(int v,int w){

       if(v!=-1){

              Edge<T> *p=NodeTable[v].adj;

        while(p!=NULL&&p->dest!=w)

                     p=p->link;

              if(p!=NULL&&p->link!=NULL)

                     return p->link->dest;

       }

       return -1;

};

template<class T>

int Graphlnk<T>::getWeight(int v1,int v2){

       if(v1!=-1&&v2!=-1){

              Edge<T> *p=NodeTable[v1].adj;

              while(p!=NULL&&p->dest!=v2)

                     p=p->link;

              if(p!=NULL) return p->cost;

       }

       return 0;

};

template<class T>

void Graphlnk<T>::DFS(Graphlnk<T> &G,T v)

{

       int i,loc,n=G.NumberOfVertices();

       bool *visited=new bool[n];

       for(i=0;i<n;i++) visited[i]=false;

       loc=G.getVertexPos(v);

       DFS(G,loc,visited);

       delete []visited;

};

template<class T>

void Graphlnk<T>::DFS(Graphlnk<T> &G,int v,bool visited[])

{

       cout<<G.getValue(v)<<endl;

       visited[v]=true;

       int w=G.getFistNeighbor(v);

       while(w!=-1)

       {

              if(visited[w]==false) DFS(G,w,visited);

              w=G.getNextNeighbor(v,w);

       }

};

template<class T>

void Graphlnk<T>::BFS(Graphlnk<T> &G,T v)

{

       int i,w,n=G.NumberOfVertices();

       bool *visited=new bool[n];

    for(i=0;i<n;i++) visited[i]=false;

       int loc=G.getVertexPos(v);

       cout<<G.getValue(loc)<<endl;

       visited[loc]=true;

       LinkedQueue<int> Q;

       Q.EnQueue(loc);

       while(!Q.IsEmpty())

       {

              Q.DeQueue(loc);

              w=G.getFistNeighbor(loc);

              while(w!=-1){

                     if(visited[w]==false){

                            cout<<G.getValue(w)<<endl;

                            visited[w]=true;

                            Q.EnQueue(w);

                     }

                     w=G.getNextNeighbor(loc,w);

              }

       }

       delete []visited;

};

 

 

#include<iostream.h>

#include"AdjList.h" 


 



void main()

{

  Graphlnk<char> tr(6);

  tr.insertVertex('A');

  tr.insertVertex('B');

  tr.insertVertex('C');

  tr.insertVertex('D');

  tr.insertVertex('E');

  tr.insertVertex('F');//插入顶点

 

  tr.insertEdge(0,1,5);

  tr.insertEdge(1,2,3);

  tr.insertEdge(0,3,2);

  tr.insertEdge(0,2,6);

  tr.insertEdge(2,5,5);

  tr.insertEdge(5,4,5);

  tr.insertEdge(3,4,5);//插入边

 

  cout<<"深度优先遍历:"<<endl;

  tr.DFS(tr,'B');

cout<<"广度优先遍历:"<<endl;

  tr.BFS(tr,'B');

}

