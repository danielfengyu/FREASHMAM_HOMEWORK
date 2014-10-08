// Graph.h: interface for the Graph class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GRAPH_H__42BADB82_6A59_4FFC_B3C8_6AAFB5E2A8A9__INCLUDED_)
#define AFX_GRAPH_H__42BADB82_6A59_4FFC_B3C8_6AAFB5E2A8A9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Graph  
{
public:
	int vrtexNum;
	int edgeNum;
	int *Mark;
	Graph(int verticesNum){
		verticesNum;
		edgeNum=0;
		Mark=new int[vetexNum];
		for(int i=0;i<vetexNum;i++)
		{
			Mark[i]=UNVISITED;
		}
	}
	 ~Graph();
	 {
		delete []Mark;
	 }
	 virtual Edge FirstEdge(int oneVertex)=0;
	 virtual Edge NextEdge(Edge oneEdge)=0;
	 int VerticesNum(){
		return vertexNum;
	 }
	 int EdgeNum(){
		return edgeNum;
	 }
	 bool IsEdge(Edge oneEdge){
		if(oneEdge.weight>0&&oneEdge.weight<INFINITY&&oneEdge.end >=0)
			return true;
		else
			return false;
	 }
	 int StartVertex(Edge oneEdge){
		return oneEdge.start;
	 }
	 int EndVertex(Edge oneEdge){
		return oneEdge.end;
	 }
	 int Weight(Edge oneEdge){
		return oneEdge.weight;
	 }
	 virtual void setEdge(int start,int end,int weight)=0;
	 virtual void delEdge(int start,int end)=0;

};

#endif // !defined(AFX_GRAPH_H__42BADB82_6A59_4FFC_B3C8_6AAFB5E2A8A9__INCLUDED_)
