// AdjGraph.h: interface for the AdjGraph class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ADJGRAPH_H__D424842E_CD6A_4E4F_BBC1_8DD3353A2DAA__INCLUDED_)
#define AFX_ADJGRAPH_H__D424842E_CD6A_4E4F_BBC1_8DD3353A2DAA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class AdjGraph :public Graph 
{
public:
	AdjGraph(int verticesNum):Graph(verticesNum){
		int i,j;
		matrix=(int**)new int*[vertexNum];
		for(i=0;i<vertexNum;i++)
		{
			matrix[i]=new int[vertexNum];
		}
		for(i=0;i<vertexNum;i++)
			for(j=0;j<vertexNum;j++)
				matrix[i][j];
	}
	~AdjGraph(){
		for(int i=0;i<vertexNum;i++)
			delete []matrix[i];
		delete []matrix;
	}
	Edge FirstEdge(int oneVertex){
		Edge tmpEdge;
		tmpEdge.start=oneVertex;
		for(int i=0;i<vertexNum;i++)
		{
			if(matrix[oneVertex][i]!=0)
			{
				tmpEdge.end=i;
				tmpEdge.weight=matrix[oneVertex][i];
				break;
			}
		}
		return tmpEdge;
	}
	Edge NextEdge(Edge oneEdge){
		Edge tmpEdge;
		tmpEdge.start=oneEdge.start;
		for(int i=oneEdge.end+1;i<vertexNum;i++)
		{
			if(matrix[oneEdge.start][i]!=0)
			{
				tmpEdge.end=i;
				tmpEdge.weight =matrix[oneEdge.start][i];
				break;
			}
		}
		return tmpEdge;
	}
	void setEdge(int start,int end,int weight)
	{
		if(matrix[start][end]==0)
		{
			edgeNum++;
		}
		matrix[start][end]=weight;
	}
	void delEdge(int start,int end)
	{
		if(matrix[start][end]!=0)
		{
			edgeNum--;
		}
		matrix[start][end]=0;
	}
private:
	int ** matrix;
};

#endif // !defined(AFX_ADJGRAPH_H__D424842E_CD6A_4E4F_BBC1_8DD3353A2DAA__INCLUDED_)
