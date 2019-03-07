//
// Created by 李超 on 2019/1/24.
//

#ifndef GRAPHALGORITHM_GRAPH_H
#define GRAPHALGORITHM_GRAPH_H


class Node {
public:
    Node(int m_vertex = 0);

    int m_vertex; //顶点编号
    bool m_isVisited; //顶点访问标志位：true表示已经被访问


};

Node::Node(int vertex) {
    m_vertex = vertex;
    m_isVisited = true;

}

//作为记录边的信息，这些边都是达到end的所有边中，权重最小的那个  Prim算法中使用
struct Assis_array {
    int start; //边的终点
    int end;  //边的起点
    int weight;  //边的权重
};

class Graph {
public:
    Graph();

    ~Graph();

    void creatGraph();//构造图

    bool addEdge();   //添加边

    bool deleteEdge();   //无向图删除边，
    bool isEdge();// 判断边是否存在
    bool isConnect();//判断图是否连通
    void printMatrix();   //打印邻接矩阵
    void depthFirstTraverse();   //深度优先遍历，指定第一个点
    void depthFirstTraverseWithRecursion(int nodeIndex);
    void depthFirstTraverseWithRecursion_init();
    void BreadthFirstSearch();   //广度优先遍历，指定第一个点
    void depthFirstTraverse_init(int nodeIndex);
    int  LabelComponents();
    void Compare_DFS_DFSWithRecursion();
    void Compare_DFS(int nodeIndex);
    void Compare_DFSWithRecursion(int nodeIndex);
    void inDegrees();//计算顶点的入度
    void outDegrees();
    Node *m_pNodeArray;
    int NoEdge = 1000000;
    int vertex;//边数
    int edge;//顶点数
    int **m_pMatrix;//图的邻接矩阵
    int *label;//遍历搜索的标记数组
    int randedge_label[100];
    int *labelConnect;
    int randedge[100][100];

//存放顶点的数组

};


#endif //GRAPHALGORITHM_GRAPH_H
