//
// Created by 李超 on 2019/1/24.
//
#include "Graph.h"
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<time.h>
#include <queue>
#include <stack>

using namespace std;

Graph::Graph() {
    int gvertex = 20;
    m_pMatrix = new int *[gvertex + 1];//图的邻接矩阵
    m_pNodeArray = new Node[gvertex];  //存放顶点的数组
    label = new int[gvertex + 1];//初始化标记矩阵
    labelConnect = new int[gvertex + 1];//biaoj
    for (int i = 0; i <= gvertex; i++) {
        m_pMatrix[i] = new int[gvertex + 1];
        label[i] = 0;
    }
    for (int i = 0; i <= gvertex; i++) {
        for (int j = 0; j <= gvertex; j++) {
            m_pMatrix[i][j] = 0;
        }
        m_pNodeArray[i].m_isVisited = false;
        m_pNodeArray[i].m_vertex = 0;
    }
}

Graph::~Graph() {
    delete[] m_pNodeArray;
        for (int i = 0; i <= vertex; i++) {
            delete[]  m_pMatrix[i];
        }
        delete[]  m_pMatrix;
}

void Graph::creatGraph() {
    cout<<endl;
    cout << "请输入图中的顶点数和边数" << endl;
    cout<<endl;
    cin >> vertex;
    cin >> edge;
    cout<<endl;
    cout << "请输入各条边的起点和终点" << endl;
    cout<<endl;
    int from, to;
    for (int i = 0; i < edge; i++) {

        cin >> from;
        cin >> to;
        if ((from < 0 || from > vertex) && (to < 0 || to > vertex)) {
            cout<<endl;
            cout << "输入的边不符合规范" << endl;
            cout<<endl;
        } else {
            m_pMatrix[from][to] = 1;
            m_pMatrix[to][from] = 1;
        }

    }
}

bool Graph::addEdge() {
    cout<<endl;
    cout << "请输入要添加的边" << endl;
    cout<<endl;
    int from, to;
    cin >> from;
    cin >> to;
    if ((from < 0 || from > vertex) && (to < 0 || to > vertex)) {
        cout<<endl;
        cout << "输入的边不符合规范" << endl;
        cout<<endl;
        return false;
    } else if (m_pMatrix[from][to] == 1) {
        cout<<endl;
        cout << "输入的边已经存在" << endl;
        cout<<endl;
        return false;
    } else {
        m_pMatrix[from][to] = 1;
        m_pMatrix[to][from] = 1;
        cout<<endl;
        cout << "添加成功" << endl;
        cout<<endl;
        return true;
    }
}

void Graph::printMatrix() {
    cout<<endl;
    cout<<"此图的邻接矩阵为："<<endl;
    cout<<endl;
    for (int i = 1; i <= vertex; i++) {
        for (int j = 1; j <= vertex; j++) {
            cout << m_pMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

bool Graph::deleteEdge() {
    cout<<endl;
    cout << "请输入要删除的边" << endl;
    cout<<endl;
    int from, to;
    cin >> from;
    cin >> to;
    if ((from < 0 || from > vertex) && (to < 0 || to > vertex)) {
        cout<<endl;
        cout << "输入的边不符合规范" << endl;
        cout<<endl;
        return false;
    } else if (m_pMatrix[from][to] == 0) {
        cout<<endl;
        cout << "输入的边不存在" << endl;
        cout<<endl;
        return false;
    } else {
        m_pMatrix[from][to] = 0;
        m_pMatrix[to][from] = 0;
        return true;
    }
}

bool Graph::isEdge() {
    cout<<endl;
    cout << "请输入要判断是否存在的边" << endl;
    cout<<endl;
    int from, to;
    cin >> from;
    cin >> to;
    if ((from < 0 || from > vertex) && (to < 0 || to > vertex)) {
        cout<<endl;
        cout << "输入的边不符合规范" << endl;
        cout<<endl;
        return false;
    } else if (m_pMatrix[from][to] == 0) {
        cout<<endl;
        cout << "输入的边不存在" << endl;
        cout<<endl;
        return false;
    } else {
        cout<<endl;
        cout << "边" << from << "-->" << to << "存在" << endl;
        cout<<endl;
        return true;
    }
}
void Graph::depthFirstTraverseWithRecursion_init() {
    for (int i = 0; i <= vertex; i++) {
        label[i] = 0;
    }
    cout<<endl;
    cout<<"请输入深度优先搜索开始的顶点"<<endl;
    cout<<endl;
    int nodeIndex;
    cin>>nodeIndex;
    depthFirstTraverseWithRecursion(nodeIndex);
}
void Graph::depthFirstTraverseWithRecursion(int nodeIndex) {

    if(nodeIndex > vertex||nodeIndex<0)
    {
        cout<<endl;
        cout << "输入的顶点不符合规范" << endl;
        cout<<endl;
    }
    label[nodeIndex] = 1;
    cout << nodeIndex << "->";
    for (int i = 1; i <= vertex; i++) {
        if (!label[i] && m_pMatrix[nodeIndex][i] == 1) {
            depthFirstTraverseWithRecursion(i);
        }

    }
}

void Graph::depthFirstTraverse() {

    cout<<endl;
    cout<<"请输入深度优先搜索开始的顶点:"<<endl;
    cout<<endl;
    int nodeIndex;
    cout<<endl;
    cin>>nodeIndex;
    if(nodeIndex > vertex||nodeIndex<0)
    {
        cout<<endl;
        cout << "输入的顶点不符合规范" << endl;
        cout<<endl;
    }
    cout << "非递归方法得到的深度优先搜索的结果为：" << endl;
    cout<<endl;
    for (int i = 0; i <= vertex; i++) {
        label[i] = 0;
    }
    stack<int> s;
    s.push(nodeIndex);
    cout << nodeIndex << "->";
    label[nodeIndex] = 1;
    int w;
    bool flag;
    while (!s.empty()) {
        w = s.top();
        flag = false;
        for (int i = 1; i <= vertex; i++) {
            if (!label[i] && m_pMatrix[w][i] == 1) {
                s.push(i);
                cout << i << "->";
                label[i] = 1;
                flag = true;
                break;
            }
        }
        if (flag == false) {
            s.pop();
        }
    }
    cout<<endl;
}

void Graph::BreadthFirstSearch() {
    cout<<"请输入深度优先搜索开始的顶点"<<endl;
    int nodeIndex;
    cin>>nodeIndex;
    cout << "宽度优先搜索的结果为：" << endl;
    if(nodeIndex > vertex||nodeIndex<0)
    {
        cout<<endl;
        cout << "输入的顶点不符合规范" << endl;
        cout<<endl;
    }
    for (int i = 0; i <= vertex; i++) {
        label[i] = 0;
    }
    queue<int> q;
    q.push(nodeIndex);
    label[nodeIndex] = 1;
    cout<<nodeIndex<<"->";
    int w ;
    while (!q.empty())
    {
        w = q.front();
        q.pop();
        for(int i = 1 ; i<= vertex ; i++)
        {
            if(m_pMatrix[w][i] == 1&& label[i]==0)
            {
                q.push(i);
                label[i] =1;
                cout<<i<<"->";
            }


        }
    }


}

bool Graph::isConnect() {
    for (int i = 0; i <= vertex; i++) {
        label[i] = 0;
    }

    queue<int> q;
    q.push(1);
    label[1] = 1;
    int w;
    while (!q.empty()) {
        w = q.front();
        q.pop();
        for (int i = 1; i <= vertex; i++) {
            if (m_pMatrix[w][i] != 0 && label[i] == 0) {
                q.push(i);
                label[i] = 1;

            }
        }
    }
    for (int i = 1; i <= vertex; i++) {
        if (!label[i]) {
            cout << "此图不是连通图" << endl;
            return false;
        }
    }
    cout<<endl;
    cout << "此图是连通图" << endl;
    cout<<endl;
    return true;


}

void Graph::inDegrees() {
    cout<<"请输入你要计算入度的顶点！"<<endl;
    int in;
    cin>>in;
    if(in > vertex||in<0)
    {
        cout<<endl;
        cout << "输入的顶点不符合规范" << endl;
        cout<<endl;
    }
    int sum = 0;
    for (int i = 1; i <= vertex; i++) {
        if (m_pMatrix[i][in] == 1) {
            sum++;
        }
    }
    cout<<endl;
    cout<<"顶点"<<in<<"的入度是："<<sum<<endl;
    cout<<endl;

}



int Graph::LabelComponents() {
    cout<<endl;
    cout<<"连通构件的标记为："<<endl;
    cout<<endl;
    for(int i = 0 ; i<=vertex ; i++)
    {
        labelConnect[i] = 0;
    }
    int labelcount = 0;
    for(int i = 1 ; i<= vertex ; i++)
    {

        if(labelConnect[i] == 0)
        {
            labelcount++;
            queue<int> q;
            q.push(i);
            labelConnect[i] = labelcount;

            int w ;
            while (!q.empty())
            {
                w = q.front();
                q.pop();
                for(int j = 1 ; j<= vertex ; j++)
                {
                    if(m_pMatrix[w][j] != 0 && labelConnect[j] == 0)
                    {
                        q.push(j);
                       labelConnect[j] = labelcount;

                    }


                }
            }

        }
    }
    for(int   i = 1  ; i<= vertex ; i++)
    {
        cout<<labelConnect[i]<<" ";
    }
    cout<<endl;
}
void Graph::outDegrees() {

    cout<<"请输入你要计算出度的顶点！"<<endl;
    int out;
    cin>>out;
    if(out > vertex||out<0)
    {
        cout<<endl;
        cout << "输入的顶点不符合规范" << endl;
        cout<<endl;
    }
    int sum = 0;
    for(int i = 1 ; i<= vertex ; i++)
    {
        if(m_pMatrix[out][i] ==1)
        {
            sum++;
        }
    }
    cout<<endl;
    cout<<"顶点"<<out<<"的出度是："<<sum<<endl;
    cout<<endl;
}

void Graph::Compare_DFS_DFSWithRecursion() {
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        for(int j = 0 ; j< 100 ; j++)
        {

            int u = (double)rand() / (RAND_MAX + 1) * (0 - 10000) + 10000;
            randedge[i][j] = u%2;
        }


    }

    cout<<endl;
    cout<<"请输入递归深度优先搜索开始的顶点"<<endl;
    cout<<endl;
    int nodeIndex;
    cin>>nodeIndex;

    clock_t start1,finish1;
    double totaltime1;

    start1=clock();
    cout << "递归方法得到的深度优先搜索的结果为：" << endl;

    for (int i = 0; i < 100; i++) {
        randedge_label[i] = 0;
    }


    Compare_DFSWithRecursion(nodeIndex);
    finish1=clock();
    totaltime1=(double)(finish1-start1)/CLOCKS_PER_SEC;
    cout<<endl;
    cout<<"递归深度优先搜索的运行时间是："<<totaltime1<<"秒！"<<endl;


    cout<<endl;
    clock_t start2,finish2;
    double totaltime2;
    start2=clock();
    Compare_DFS(nodeIndex);
    finish2=clock();
    totaltime2=(double)(finish2-start2)/CLOCKS_PER_SEC;
    cout<<"非递归深度优先搜索的运行时间是："<<totaltime2<<"秒！"<<endl;

    cout<<endl;


}

void Graph::Compare_DFSWithRecursion(int nodeIndex) {

    randedge_label[nodeIndex] = 1;
    cout << nodeIndex << "->";
    for (int i = 1; i < 100; i++) {
        if (!randedge_label[i] && randedge[nodeIndex][i] == 1) {
            Compare_DFSWithRecursion(i);
        }

    }
}

void Graph::Compare_DFS(int nodeIndex) {



    cout << "非递归方法得到的深度优先搜索的结果为：" << endl;
    cout<<endl;
    for (int i = 0; i < 100; i++) {
        randedge_label[i] = 0;
    }
    stack<int> s;
    s.push(nodeIndex);
    cout << nodeIndex << "->";
    randedge_label[nodeIndex] = 1;
    int w;
    bool flag;
    while (!s.empty()) {
        w = s.top();
        flag = false;
        for (int i = 1; i < 100; i++) {
            if (!randedge_label[i] && randedge[w][i] == 1) {
                s.push(i);
                cout << i << "->";
                randedge_label[i] = 1;
                flag = true;
                break;
            }
        }
        if (flag == false) {
            s.pop();
        }
    }
    cout<<endl;
}

void Graph::depthFirstTraverse_init(int nodeIndex) {
    if(nodeIndex > vertex||nodeIndex<0)
    {
        cout<<endl;
        cout << "输入的顶点不符合规范" << endl;
        cout<<endl;
    }
    cout << "非递归方法得到的深度优先搜索的结果为：" << endl;
    cout<<endl;
    for (int i = 0; i <= vertex; i++) {
        label[i] = 0;
    }
    stack<int> s;
    s.push(nodeIndex);
    cout << nodeIndex << "->";
    label[nodeIndex] = 1;
    int w;
    bool flag;
    while (!s.empty()) {
        w = s.top();
        flag = false;
        for (int i = 1; i <= vertex; i++) {
            if (!label[i] && m_pMatrix[w][i] == 1) {
                s.push(i);
                cout << i << "->";
                label[i] = 1;
                flag = true;
                break;
            }
        }
        if (flag == false) {
            s.pop();
        }
    }
    cout<<endl;
}
int Graph::inDegrees(int to)
{
    QLine temp_line;
    int sum = 0;
    for (int i = 0; i < vexnum; i++) {
        if (m_pMatrix[i][to] == 1) {
            sum++;
            temp_line.setLine(cityMap[i].pos.rx(),cityMap[i].pos.ry(),cityMap[to].pos.rx(),cityMap[to].pos.ry());
            line_indegrees.push_back(temp_line);
        }
    }
    qDebug()<<" Graph::inDegrees";
    return sum;
}

int Graph::outDegrees(int from)
{
    int sum = 0;
    QLine temp_line;
    for(int i = 0 ; i< vexnum ; i++)
    {
        if(m_pMatrix[from][i] ==1)
        {
            sum++;
            temp_line.setLine(cityMap[from].pos.rx(),cityMap[from].pos.ry(),cityMap[i].pos.rx(),cityMap[i].pos.ry());
            line_outdegrees.push_back(temp_line);
        }
    }
    return  sum;
}