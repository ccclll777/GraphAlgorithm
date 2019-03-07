//
// Created by 李超 on 2019/1/26.
//

#ifndef GRAPHALGORITHM_UNDIRECTEDWEIGHTEDGRAPH_H
#define GRAPHALGORITHM_UNDIRECTEDWEIGHTEDGRAPH_H
#include "Graph.h"
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include <queue>
#include <stack>
using namespace std;
class UndirectedWeightedGraph: public Graph {

public:
    int **m_pWeightMatrix;//带权图的权重矩阵
    UndirectedWeightedGraph();
    ~UndirectedWeightedGraph();
    void creatGraph();//构造图
     bool addEdge();   //添加边以构造有向图，val表示权值，默认连通
    void getWeight();//获取这条边的权值
    bool deleteEdge();   //无向图删除边，val表示权值，默认连通
     void printWeightMatrix();   //打印权重矩阵
     void Prim();//最小生成树
};


#endif //GRAPHALGORITHM_UNDIRECTEDWEIGHTEDGRAPH_H
