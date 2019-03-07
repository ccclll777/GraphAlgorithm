//
// Created by 李超 on 2019/1/26.
//

#ifndef GRAPHALGORITHM_DIRECTEDWEIGHTEDGRAPH_H
#define GRAPHALGORITHM_DIRECTEDWEIGHTEDGRAPH_H

#include "Graph.h"
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include <queue>
#include <stack>
using namespace std;
class DirectedWeightedGraph: public Graph {
public:
    int **m_pWeightMatrix;//带权图的权重矩阵
    DirectedWeightedGraph();
    ~DirectedWeightedGraph();
    void creatGraph();//构造图
    bool addEdge();   //添加边以构造有向图，val表示权值，默认连通
   void getWeight();//获取权重
    bool deleteEdge();   //无向图删除边，val表示权值，默认连通
    void printWeightMatrix();   //打印权重矩阵
    void Prim();//最小生成树

};


#endif //GRAPHALGORITHM_DIRECTEDWEIGHTEDGRAPH_H
