//
// Created by 李超 on 2019/1/25.
//

#ifndef GRAPHALGORITHM_DIRECTEDGRAPH_H
#define GRAPHALGORITHM_DIRECTEDGRAPH_H


#include "Graph.h"
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include <queue>
#include <stack>
using namespace std;
class DirectedGraph: public Graph {
public:
    DirectedGraph():Graph()
    {

    }
    ~DirectedGraph();
    void creatGraph();//构造图
//    bool addNode(Node *pNode);     //添加新顶点
//    bool addEdgeForUndirectedGraph(int from, int to, int val = 1); //添加边以构造无向图，val表示权值，默认连通
    bool addEdge();   //添加边以构造有向图，val表示权值，默认连通
//    bool deleteEdgeForUndirectedGraph(int from, int to, int val = 1); //无向图删除边，val表示权值，默认连通
    bool deleteEdge();   //无向图删除边，val表示权值，默认连通
};


#endif //GRAPHALGORITHM_DIRECTEDGRAPH_H
