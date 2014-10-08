// Edge.h: interface for the Edge class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_EDGE_H__F197D8D0_03D7_4F29_8032_A1D7100F3B9A__INCLUDED_)
#define AFX_EDGE_H__F197D8D0_03D7_4F29_8032_A1D7100F3B9A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Edge  
{
public:
	int weight;
	int end;
	int start;
	Edge();
	Edge(int st, int en,int w);
	bool operator >(Edge  oneEdge);
	bool operator <(Edge oneEdge);
	virtual ~Edge();

};

#endif // !defined(AFX_EDGE_H__F197D8D0_03D7_4F29_8032_A1D7100F3B9A__INCLUDED_)
