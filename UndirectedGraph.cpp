//
// Created by 李超 on 2019/1/25.
//

#include "UndirectedGraph.h"
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include "Graph.h"
#include <queue>
#include <stack>

using namespace std;

UndirectedGraph::~UndirectedGraph() {
    delete[] m_pNodeArray;
    for (int i = 0; i <= vertex; i++) {
        delete[]  m_pMatrix[i];
    }
    delete[]  m_pMatrix;
}