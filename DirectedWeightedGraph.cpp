//
// Created by 李超 on 2019/1/26.
//

#include "DirectedWeightedGraph.h"
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include "Graph.h"
#include <queue>
#include <stack>

using namespace std;
DirectedWeightedGraph::DirectedWeightedGraph():Graph(){
    int gvertex = 20;
    m_pWeightMatrix = new int *[gvertex + 1];
    for (int i = 0; i <= gvertex; i++) {
        m_pWeightMatrix[i] = new int[gvertex + 1];

    }
    for (int m = 0; m <= gvertex; m++) {
        for (int n = 0; n <= gvertex; n++) {
            m_pWeightMatrix[m][n] = NoEdge;

        }

    }
}
DirectedWeightedGraph::~DirectedWeightedGraph() {
    delete[] m_pNodeArray;
    for (int i = 0; i <= vertex; i++) {
        delete[]  m_pMatrix[i];
        delete[] m_pWeightMatrix[i];
    }
    delete[]  m_pMatrix;
    delete[] m_pWeightMatrix;
}
void DirectedWeightedGraph::creatGraph() {
    cout << "请输入图中的顶点数和边数" << endl;
    cin >> vertex;
    cin >> edge;
    cout << "请输入各条边的起点和终点以及权重" << endl;
    int from, to, weight;
    for (int i = 0; i < edge; i++) {

        cin >> from;
        cin >> to;
        cin >> weight;
        if ((from < 0 || from > vertex) && (to < 0 || to > vertex)) {
            cout << "输入的边不符合规范" << endl;
        } else {
            m_pMatrix[from][to] = 1;
            m_pWeightMatrix[from][to] = weight;
        }

    }
}
bool DirectedWeightedGraph::addEdge() {
    cout << "请输入要添加的边以及边的权重" << endl;
    int from, to, weight;
    cin >> from;
    cin >> to;
    cin >> weight;
    if ((from < 0 || from > vertex) && (to < 0 || to > vertex)) {

        cout << "输入的边不符合规范" << endl;
        return false;
    } else if (m_pMatrix[from][to] == 1) {
        cout << "输入的边已经存在" << endl;
        return false;
    } else {
        m_pMatrix[from][to] = 1;
        m_pWeightMatrix[from][to] = weight;
        cout << "添加成功" << endl;
        return true;
    }
}
bool DirectedWeightedGraph::deleteEdge() {
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
        m_pWeightMatrix[from][to] = NoEdge;
        return true;
    }
}
void DirectedWeightedGraph::printWeightMatrix() {
    cout<<"此图的权重矩阵为："<<endl;
    for (int i = 1; i <= vertex; i++) {
        for (int j = 1; j <= vertex; j++) {
            if (m_pWeightMatrix[i][j] == NoEdge)
                cout << "∞" << " ";
            else
                cout << m_pWeightMatrix[i][j] << " ";

        }
        cout << endl;
    }
}

void DirectedWeightedGraph::getWeight() {
    cout<<endl;
    cout<<"请输入想要获得那条边的权重"<<endl;
    cout<<endl;
    int i ,j;
    cin>>i>>j;

    cout<<"边"<<i<<"-->"<<j<<"的权重为："<<m_pWeightMatrix[i][j]<<endl;
    cout<<endl;
}

void DirectedWeightedGraph::Prim() {
    cout<<endl;
    cout<<"请输入构造最小生成树的起点"<<endl;
    cout<<endl;
    int begin;
    cin>>begin;
    Assis_array *close_edge = new Assis_array[vertex + 1];
    //进行close_edge的初始化，更加开始起点进行初始化
    for (int j = 1; j <= vertex; j++)
    {
        if(j != begin)
        {
            close_edge[j].start = begin;
            close_edge[j].end = j;
            close_edge[j].weight = m_pWeightMatrix[begin][j];
        }



    }
    //把起点的close_edge中的值设置为-1，代表已经加入到集合U了
    close_edge[begin ].weight = -1;
    //访问剩下的顶点，并加入依次加入到集合U
    int index;
    for(int j = 1 ; j<vertex ; j++)
    {
        int k;
        int min = NoEdge;
        //寻找数组close_edge中权重最小的那个边
        for( k = 1 ; k<= vertex; k ++)
        {
            if(close_edge[k].weight != -1)
            {
                if(close_edge[k].weight <min)
                {
                    min = close_edge[k].weight;
                    index = k;
                }
            }
        }
        //将权重最小的那条边的终点也加入到集合U
        close_edge[index].weight = -1;
        cout << close_edge[index].start
             << "-----"
             << close_edge[index].end
             << "="
             <<m_pWeightMatrix[close_edge[index].start][close_edge[index].end]
             <<endl;
        //更新我们的close_edge数组。
        for( k = 1 ; k<= vertex ; k++)
        {
            if(m_pWeightMatrix[close_edge[index].end][k] < close_edge[k].weight)
            {
                close_edge[k].weight = m_pWeightMatrix[close_edge[index].end][k];
                close_edge[k].start = close_edge[index].end;
                close_edge[k].end  = k;
            }
        }
    }

}
