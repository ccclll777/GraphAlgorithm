//
// Created by 李超 on 2019/1/25.
//

#include "DirectedGraph.h"
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include "Graph.h"
#include <queue>
#include <stack>

using namespace std;

DirectedGraph::~DirectedGraph() {
    delete[] m_pNodeArray;
    for (int i = 0; i <= vertex; i++) {
        delete[]  m_pMatrix[i];
    }
    delete[]  m_pMatrix;
}

void DirectedGraph::creatGraph() {
    cout << "请输入图中的顶点数和边数" << endl;
    cin >> vertex;
    cin >> edge;
    cout << "请输入各条边的起点和终点" << endl;
    int from, to;
    for (int i = 0; i < edge; i++) {

        cin >> from;
        cin >> to;
        if ((from < 0 || from > vertex) && (to < 0 || to > vertex)) {
            cout << "输入的边不符合规范" << endl;
        } else {
            m_pMatrix[from][to] = 1;

        }

    }
}

bool DirectedGraph::addEdge() {
    cout << "请输入要添加的边" << endl;
    int from, to;
    cin >> from;
    cin >> to;
    if ((from < 0 || from > vertex) && (to < 0 || to > vertex)) {

        cout << "输入的边不符合规范" << endl;
        return false;
    } else if (m_pMatrix[from][to] == 1) {
        cout << "输入的边已经存在" << endl;
        return false;
    } else {
        m_pMatrix[from][to] = 1;

        cout << "添加成功" << endl;
        return true;
    }
}

bool DirectedGraph::deleteEdge() {
    cout << "请输入要删除的边" << endl;
    int from, to;
    cin >> from;
    cin >> to;
    if ((from < 0 || from > vertex) && (to < 0 || to > vertex)) {

        cout << "输入的边不符合规范" << endl;
        return false;
    } else if (m_pMatrix[from][to] == 0) {
        cout << "输入的边不存在" << endl;
        return false;
    } else {
        m_pMatrix[from][to] = 0;

        return true;
    }
}
