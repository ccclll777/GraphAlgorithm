#include <iostream>
#include "Graph.h"
#include "UndirectedGraph.h"
#include "DirectedGraph.h"
#include "Graph.cpp"
#include "DirectedGraph.cpp"
#include "UndirectedGraph.cpp"
#include "UndirectedWeightedGraph.cpp"
#include "UndirectedWeightedGraph.h"
#include "DirectedWeightedGraph.cpp"
#include "DirectedWeightedGraph.h"
using namespace std;
int main() {

    int choice;
    int choice_UnDirectedGraph;
    int choice_UnDirectedWeightedGraph;
    int choice_DirectedGraph;
    int choice_DirectedWeightedGraph;

    cout<<endl;
    cout<<"***********************"<<endl;
    cout<<"*请选择你要构造图的类型:"<<endl;
    cout<<"*1--构造无向图!   "<<endl;
    cout<<"*2--构造有向图!       "<<endl;
    cout<<"*3--构造无向加权图! "<<endl;
    cout<<"*4--构造有向加权图! "<<endl;
    cout<<"*5--随机构造100顶点的图，比较递归方法的深度优先搜索和非递归方法的深度优先搜索的性能!! "<<endl;
    cout<<"*0--表示结束操作!     "<<endl;
    cout<<"***********************"<<endl;
    cout<<"请你做出选择!"<<endl;
    while(true)
    {

        cin>>choice;
        switch(choice)
        {

            case 0:
                {

                cout << "已退出" << endl;
                    return 0;
                }
            case 1:
                {
                UndirectedGraph *undirectedGraph = new UndirectedGraph();
                undirectedGraph->creatGraph();
                    cout<<"***********************"<<endl;
                    cout<<"你已经成功构建\"无向图\""<<endl;
                    cout<<"*请选择你要进行的操作:"<<endl;
                    cout<<"*1--添加边!   "<<endl;
                    cout<<"*2--删除边!   "<<endl;
                    cout<<"*3--判断边是否存在! "<<endl;
                    cout<<"*4--判断图是否连通! "<<endl;
                    cout<<"*5--打印图的邻接矩阵! "<<endl;
                    cout<<"*6--显示顶点入度!   "<<endl;
                    cout<<"*7--显示顶点出度!   "<<endl;
                    cout<<"*8--非递归方法深度优先搜索!"<<endl;
                    cout<<"*9--递归方法深度优先搜索! "<<endl;
                    cout<<"*10--广度优先搜索! "<<endl;
                    cout<<"*11--连通构件标记! "<<endl;
                    cout<<"*12--在\"无向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                    cout<<"*0--结束无向图的操作!     "<<endl;
                    cout<<"***********************"<<endl;
                    bool flag = true;
                while (flag)
                {
                    cin>>choice_UnDirectedGraph;
                    switch(choice_UnDirectedGraph)
                    {
                        case 1:
                            {
                            undirectedGraph->addEdge();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"无向图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--显示顶点入度!   "<<endl;
                                cout<<"*7--显示顶点出度!   "<<endl;
                                cout<<"*8--非递归方法深度优先搜索!"<<endl;
                                cout<<"*9--递归方法深度优先搜索! "<<endl;
                                cout<<"*10--广度优先搜索! "<<endl;
                                cout<<"*11--连通构件标记! "<<endl;
                                cout<<"*12--在\"无向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                            break;
                        }
                        case 2:
                        {
                            undirectedGraph->deleteEdge();
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"无向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"无向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束无向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 3:
                        {
                            undirectedGraph->isEdge();
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"无向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"无向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束无向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 4:
                        {
                            undirectedGraph->isConnect();
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"无向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"无向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束无向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 5:
                        {
                            undirectedGraph->printMatrix();
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"无向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"无向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束无向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 6:
                        {
                            undirectedGraph->inDegrees();
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"无向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"无向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束无向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 7:
                        {
                            undirectedGraph->outDegrees();
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"无向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"无向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束无向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 8:
                        {
                            undirectedGraph->depthFirstTraverse();
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"无向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"无向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束无向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 9:
                        {
                            undirectedGraph->depthFirstTraverseWithRecursion_init();
                            cout<<endl;
                                cout<<"递归方法得到的深度优先搜索的结果为："<<endl;
                                cout<<endl;
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"无向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"无向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束无向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 10:
                        {
                            undirectedGraph->BreadthFirstSearch();
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"无向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"无向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束无向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 11:
                        {
                            undirectedGraph->LabelComponents();
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"无向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"无向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束无向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 12:
                        {
                            cout<<endl;
                            cout<<"请输入深度优先搜索开始的顶点"<<endl;
                            cout<<endl;
                            int nodeIndex;
                            cin>>nodeIndex;
                            for (int i = 0; i <= undirectedGraph->vertex; i++) {
                                undirectedGraph->label[i] = 0;
                            }
                            clock_t start1,finish1;
                            double totaltime1;

                            start1=clock();
                            cout << "递归方法得到的深度优先搜索的结果为：" << endl;
                            undirectedGraph->  depthFirstTraverseWithRecursion(nodeIndex);
                            finish1=clock();
                            totaltime1=(double)(finish1-start1)/CLOCKS_PER_SEC;
                            cout<<endl;
                            cout<<"递归深度优先搜索的运行时间是："<<totaltime1<<"秒！"<<endl;
                            cout<<endl;
                            clock_t start2,finish2;
                            double totaltime2;
                            start2=clock();
                            undirectedGraph->depthFirstTraverse_init(nodeIndex);
                            finish2=clock();
                            totaltime2=(double)(finish2-start2)/CLOCKS_PER_SEC;
                            cout<<"非递归深度优先搜索的运行时间是："<<totaltime2<<"秒！"<<endl;

                            cout<<endl;

                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"无向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"无向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束无向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 0:
                        {
                            cout << "退出有关无向图的操作！" << endl;
                            flag = false;
                            cout<<"***********************"<<endl;
                            cout<<"*请选择你要构造图的类型:"<<endl;
                            cout<<"*1--构造无向图!   "<<endl;
                            cout<<"*2--构造有向图!       "<<endl;
                            cout<<"*3--构造无向加权图! "<<endl;
                            cout<<"*4--构造有向加权图! "<<endl;
                            cout<<"*5--随机构造100顶点的图，比较递归方法的深度优先搜索和非递归方法的深度优先搜索的性能!! "<<endl;
                            cout<<"*0--表示结束操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            cout<<"请你做出选择!"<<endl;
                            break;
                        }


                    }


                }
                break;
                }
            case 2:
            {
                DirectedGraph *directedGraph = new DirectedGraph();
                directedGraph->creatGraph();
                cout<<"***********************"<<endl;
                cout<<"你已经成功构建\"有向图\""<<endl;
                cout<<"*请选择你要进行的操作:"<<endl;
                cout<<"*1--添加边!   "<<endl;
                cout<<"*2--删除边!   "<<endl;
                cout<<"*3--判断边是否存在! "<<endl;
                cout<<"*4--判断图是否连通! "<<endl;
                cout<<"*5--打印图的邻接矩阵! "<<endl;
                cout<<"*6--显示顶点入度!   "<<endl;
                cout<<"*7--显示顶点出度!   "<<endl;
                cout<<"*8--非递归方法深度优先搜索!"<<endl;
                cout<<"*9--递归方法深度优先搜索! "<<endl;
                cout<<"*10--广度优先搜索! "<<endl;
                cout<<"*11--连通构件标记! "<<endl;
                cout<<"*12--在\"有向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                cout<<"*0--结束有向图的操作!     "<<endl;
                cout<<"***********************"<<endl;
                bool flag = true;
                while (flag)
                {
                    cin>>choice_DirectedGraph;
                    switch(choice_DirectedGraph)
                    {
                        case 1:
                        {
                            directedGraph->addEdge();
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"有向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"有向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束有向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 2:
                        {
                            directedGraph->deleteEdge();
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"有向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"有向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束有向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 3:
                        {
                            directedGraph->isEdge();
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"有向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"有向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束有向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 4:
                        {
                            directedGraph->isConnect();
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"有向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"有向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束有向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 5:
                        {
                            directedGraph->printMatrix();
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"有向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"有向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束有向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 6:
                        {
                            directedGraph->inDegrees();
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"有向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"有向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束有向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 7:
                        {
                            directedGraph->outDegrees();
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"有向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"有向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束有向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 8:
                        {
                            directedGraph->depthFirstTraverse();
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"有向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"有向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束有向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 9:
                        {
                            directedGraph->depthFirstTraverseWithRecursion_init();
                            cout<<endl;
                            cout<<"递归方法得到的深度优先搜索的结果为："<<endl;
                            cout<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"有向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"有向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束有向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 10:
                        {
                            directedGraph->BreadthFirstSearch();
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"有向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"有向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束有向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 11:
                        {
                            directedGraph->LabelComponents();
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"有向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"有向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束有向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 12:
                        {

                            cout<<endl;
                            cout<<"请输入深度优先搜索开始的顶点"<<endl;
                            cout<<endl;
                            int nodeIndex;
                            cin>>nodeIndex;
                            for (int i = 0; i <= directedGraph->vertex; i++) {
                                directedGraph->label[i] = 0;
                            }
                            clock_t start1,finish1;
                            double totaltime1;

                            start1=clock();
                            cout << "递归方法得到的深度优先搜索的结果为：" << endl;
                            directedGraph->  depthFirstTraverseWithRecursion(nodeIndex);
                            finish1=clock();
                            totaltime1=(double)(finish1-start1)/CLOCKS_PER_SEC;
                            cout<<endl;
                            cout<<"递归深度优先搜索的运行时间是："<<totaltime1<<"秒！"<<endl;
                            cout<<endl;
                            clock_t start2,finish2;
                            double totaltime2;
                            start2=clock();
                            directedGraph->depthFirstTraverse_init(nodeIndex);
                            finish2=clock();
                            totaltime2=(double)(finish2-start2)/CLOCKS_PER_SEC;
                            cout<<"非递归深度优先搜索的运行时间是："<<totaltime2<<"秒！"<<endl;

                            cout<<endl;
                            cout<<"***********************"<<endl;
                            cout<<"你已经成功构建\"有向图\""<<endl;
                            cout<<"*请选择你要进行的操作:"<<endl;
                            cout<<"*1--添加边!   "<<endl;
                            cout<<"*2--删除边!   "<<endl;
                            cout<<"*3--判断边是否存在! "<<endl;
                            cout<<"*4--判断图是否连通! "<<endl;
                            cout<<"*5--打印图的邻接矩阵! "<<endl;
                            cout<<"*6--显示顶点入度!   "<<endl;
                            cout<<"*7--显示顶点出度!   "<<endl;
                            cout<<"*8--非递归方法深度优先搜索!"<<endl;
                            cout<<"*9--递归方法深度优先搜索! "<<endl;
                            cout<<"*10--广度优先搜索! "<<endl;
                            cout<<"*11--连通构件标记! "<<endl;
                            cout<<"*12--在\"有向图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                            cout<<"*0--结束有向图的操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            break;
                        }
                        case 0:
                        {
                            cout << "退出有关有向图的操作！" << endl;
                            flag = false;
                            cout<<"***********************"<<endl;
                            cout<<"*请选择你要构造图的类型:"<<endl;
                            cout<<"*1--构造无向图!   "<<endl;
                            cout<<"*2--构造有向图!       "<<endl;
                            cout<<"*3--构造无向加权图! "<<endl;
                            cout<<"*4--构造有向加权图! "<<endl;
                            cout<<"*5--随机构造100顶点的图，比较递归方法的深度优先搜索和非递归方法的深度优先搜索的性能!! "<<endl;
                            cout<<"*0--表示结束操作!     "<<endl;
                            cout<<"***********************"<<endl;
                            cout<<"请你做出选择!"<<endl;
                            break;
                        }


                    }


                }
                break;
            }


            case 3:
                {
                UndirectedWeightedGraph *undirectedWeightedGraph = new UndirectedWeightedGraph();
                undirectedWeightedGraph->creatGraph();
                    cout<<"***********************"<<endl;
                    cout<<"你已经成功构建\"无向加权图\""<<endl;
                    cout<<"*请选择你要进行的操作:"<<endl;
                    cout<<"*1--添加边!   "<<endl;
                    cout<<"*2--删除边!   "<<endl;
                    cout<<"*3--判断边是否存在! "<<endl;
                    cout<<"*4--判断图是否连通! "<<endl;
                    cout<<"*5--打印图的邻接矩阵! "<<endl;
                    cout<<"*6--打印图的权重矩阵!   "<<endl;
                    cout<<"*7--显示边的权重!   "<<endl;
                    cout<<"*8--显示顶点入度!   "<<endl;
                    cout<<"*9--显示顶点出度!   "<<endl;
                    cout<<"*10--非递归方法深度优先搜索!"<<endl;
                    cout<<"*11--递归方法深度优先搜索! "<<endl;
                    cout<<"*12--广度优先搜索! "<<endl;
                    cout<<"*13--连通构件标记! "<<endl;
                    cout<<"*14--最小生成树! "<<endl;
                    cout<<"*15--在\"无向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                    cout<<"*0--结束无向图的操作!     "<<endl;
                    cout<<"***********************"<<endl;
                    bool flag = true;
                    while (flag)
                    {
                        cin>>choice_UnDirectedWeightedGraph;
                        switch(choice_UnDirectedWeightedGraph)
                        {
                            case 1:
                            {
                                undirectedWeightedGraph->addEdge();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"无向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"无向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 2:
                            {
                                undirectedWeightedGraph->deleteEdge();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"无向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"无向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 3:
                            {
                                undirectedWeightedGraph->isEdge();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"无向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"无向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 4:
                            {
                                undirectedWeightedGraph->isConnect();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"无向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"无向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 5:
                            {
                                undirectedWeightedGraph->printMatrix();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"无向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"无向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 6:
                            {
                                undirectedWeightedGraph->printWeightMatrix();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"无向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"无向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 7:
                            {
                                undirectedWeightedGraph->getWeight();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"无向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"无向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 8:
                            {
                                undirectedWeightedGraph->inDegrees();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"无向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"无向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 9:
                            {
                                undirectedWeightedGraph->outDegrees();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"无向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"无向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 10:
                            {
                                undirectedWeightedGraph->depthFirstTraverse();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"无向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"无向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 11:
                            {
                                undirectedWeightedGraph->depthFirstTraverseWithRecursion_init();
                                cout<<endl;
                                cout<<"递归方法得到的深度优先搜索的结果为："<<endl;
                                cout<<endl;
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"无向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"无向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 12:
                            {
                                undirectedWeightedGraph->BreadthFirstSearch();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"无向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"无向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 13:
                            {
                                undirectedWeightedGraph->LabelComponents();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"无向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"无向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 14:
                            {
                                undirectedWeightedGraph->Prim();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"无向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"无向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 15:
                            {

                                cout<<endl;
                                cout<<"请输入深度优先搜索开始的顶点"<<endl;
                                cout<<endl;
                                int nodeIndex;
                                cin>>nodeIndex;
                                for (int i = 0; i <= undirectedWeightedGraph->vertex; i++) {
                                    undirectedWeightedGraph->label[i] = 0;
                                }
                                clock_t start1,finish1;
                                double totaltime1;

                                start1=clock();
                                cout << "递归方法得到的深度优先搜索的结果为：" << endl;
                                undirectedWeightedGraph->  depthFirstTraverseWithRecursion(nodeIndex);
                                finish1=clock();
                                totaltime1=(double)(finish1-start1)/CLOCKS_PER_SEC;
                                cout<<endl;
                                cout<<"递归深度优先搜索的运行时间是："<<totaltime1<<"秒！"<<endl;
                                cout<<endl;
                                clock_t start2,finish2;
                                double totaltime2;
                                start2=clock();
                                undirectedWeightedGraph->depthFirstTraverse_init(nodeIndex);
                                finish2=clock();
                                totaltime2=(double)(finish2-start2)/CLOCKS_PER_SEC;
                                cout<<"非递归深度优先搜索的运行时间是："<<totaltime2<<"秒！"<<endl;

                                cout<<endl;
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"无向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"无向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 0:
                            {
                                cout << "退出有关无向加权图的操作！" << endl;
                                flag = false;
                                cout<<"***********************"<<endl;
                                cout<<"*请选择你要构造图的类型:"<<endl;
                                cout<<"*1--构造无向图!   "<<endl;
                                cout<<"*2--构造有向图!       "<<endl;
                                cout<<"*3--构造无向加权图! "<<endl;
                                cout<<"*4--构造有向加权图! "<<endl;
                                cout<<"*5--随机构造100顶点的图，比较递归方法的深度优先搜索和非递归方法的深度优先搜索的性能!! "<<endl;
                                cout<<"*0--表示结束操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                cout<<"请你做出选择!"<<endl;
                                break;
                            }


                        }


                    }
                break;
                }
            case 4:
                {
                DirectedWeightedGraph *directedWeightedGraph = new DirectedWeightedGraph();
                directedWeightedGraph->creatGraph();
                    cout<<"***********************"<<endl;
                    cout<<"你已经成功构建\"有向加权图\""<<endl;
                    cout<<"*请选择你要进行的操作:"<<endl;
                    cout<<"*1--添加边!   "<<endl;
                    cout<<"*2--删除边!   "<<endl;
                    cout<<"*3--判断边是否存在! "<<endl;
                    cout<<"*4--判断图是否连通! "<<endl;
                    cout<<"*5--打印图的邻接矩阵! "<<endl;
                    cout<<"*6--打印图的权重矩阵!   "<<endl;
                    cout<<"*7--显示边的权重!   "<<endl;
                    cout<<"*8--显示顶点入度!   "<<endl;
                    cout<<"*9--显示顶点出度!   "<<endl;
                    cout<<"*10--非递归方法深度优先搜索!"<<endl;
                    cout<<"*11--递归方法深度优先搜索! "<<endl;
                    cout<<"*12--广度优先搜索! "<<endl;
                    cout<<"*13--连通构件标记! "<<endl;
                    cout<<"*14--最小生成树! "<<endl;
                    cout<<"*15--在\"有向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                    cout<<"*0--结束无向图的操作!     "<<endl;
                    cout<<"***********************"<<endl;
                    bool flag = true;
                    while (flag)
                    {
                        cin>>choice_DirectedWeightedGraph;
                        switch(choice_DirectedWeightedGraph)
                        {
                            case 1:
                            {
                                directedWeightedGraph->addEdge();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"有向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"有向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 2:
                            {
                                directedWeightedGraph->deleteEdge();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"有向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"有向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 3:
                            {
                                directedWeightedGraph->isEdge();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"有向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"有向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 4:
                            {
                                directedWeightedGraph->isConnect();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"有向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"有向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 5:
                            {
                                directedWeightedGraph->printMatrix();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"有向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"有向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 6:
                            {
                                directedWeightedGraph->printWeightMatrix();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"有向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"有向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 7:
                            {
                                directedWeightedGraph->getWeight();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"有向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"有向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 8:
                            {
                                directedWeightedGraph->inDegrees();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"有向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"有向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 9:
                            {
                                directedWeightedGraph->outDegrees();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"有向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"有向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 10:
                            {
                                directedWeightedGraph->depthFirstTraverse();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"有向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"有向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 11:
                            {
                                directedWeightedGraph->depthFirstTraverseWithRecursion_init();
                                cout<<endl;
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"有向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"有向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 12:
                            {
                                directedWeightedGraph->BreadthFirstSearch();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"有向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"有向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 13:
                            {
                                directedWeightedGraph->LabelComponents();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"有向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"有向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 14:
                            {
                                directedWeightedGraph->Prim();
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"有向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"有向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 15:
                            {

                                cout<<endl;
                                cout<<"请输入深度优先搜索开始的顶点"<<endl;
                                cout<<endl;
                                int nodeIndex;
                                cin>>nodeIndex;
                                for (int i = 0; i <= directedWeightedGraph->vertex; i++) {
                                    directedWeightedGraph->label[i] = 0;
                                }
                                clock_t start1,finish1;
                                double totaltime1;

                                start1=clock();
                                cout << "递归方法得到的深度优先搜索的结果为：" << endl;
                                directedWeightedGraph->  depthFirstTraverseWithRecursion(nodeIndex);
                                finish1=clock();
                                totaltime1=(double)(finish1-start1)/CLOCKS_PER_SEC;
                                cout<<endl;
                                cout<<"递归深度优先搜索的运行时间是："<<totaltime1<<"秒！"<<endl;
                                cout<<endl;
                                clock_t start2,finish2;
                                double totaltime2;
                                start2=clock();
                                directedWeightedGraph->depthFirstTraverse_init(nodeIndex);
                                finish2=clock();
                                totaltime2=(double)(finish2-start2)/CLOCKS_PER_SEC;
                                cout<<"非递归深度优先搜索的运行时间是："<<totaltime2<<"秒！"<<endl;

                                cout<<endl;
                                cout<<"***********************"<<endl;
                                cout<<"你已经成功构建\"有向加权图\""<<endl;
                                cout<<"*请选择你要进行的操作:"<<endl;
                                cout<<"*1--添加边!   "<<endl;
                                cout<<"*2--删除边!   "<<endl;
                                cout<<"*3--判断边是否存在! "<<endl;
                                cout<<"*4--判断图是否连通! "<<endl;
                                cout<<"*5--打印图的邻接矩阵! "<<endl;
                                cout<<"*6--打印图的权重矩阵!   "<<endl;
                                cout<<"*7--显示边的权重!   "<<endl;
                                cout<<"*8--显示顶点入度!   "<<endl;
                                cout<<"*9--显示顶点出度!   "<<endl;
                                cout<<"*10--非递归方法深度优先搜索!"<<endl;
                                cout<<"*11--递归方法深度优先搜索! "<<endl;
                                cout<<"*12--广度优先搜索! "<<endl;
                                cout<<"*13--连通构件标记! "<<endl;
                                cout<<"*14--最小生成树! "<<endl;
                                cout<<"*15--在\"有向加权图\"中比较递归深度优先搜索和非递归深度优先搜索性能! "<<endl;
                                cout<<"*0--结束无向图的操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                break;
                            }
                            case 0:
                            {
                                cout << "退出有关无向加权图的操作！" << endl;
                                flag = false;
                                cout<<"***********************"<<endl;
                                cout<<"*请选择你要构造图的类型:"<<endl;
                                cout<<"*1--构造无向图!   "<<endl;
                                cout<<"*2--构造有向图!       "<<endl;
                                cout<<"*3--构造无向加权图! "<<endl;
                                cout<<"*4--构造有向加权图! "<<endl;
                                cout<<"*5--随机构造100顶点的图，比较递归方法的深度优先搜索和非递归方法的深度优先搜索的性能!! "<<endl;
                                cout<<"*0--表示结束操作!     "<<endl;
                                cout<<"***********************"<<endl;
                                cout<<"请你做出选择!"<<endl;
                                break;
                            }


                        }


                    }
                break;
               }
            case 5:
                Graph *graph = new Graph();

                for (int i = 0; i < 100; i++)
                {
                    for(int j = 0 ; j< 100 ; j++)
                    {

                        int u = (double)rand() / (RAND_MAX + 1) * (0 - 10000) + 10000;
                        graph->randedge[i][j] = u%2;
                        graph->randedge_label[i] = 0;

                    }


                }
               graph->Compare_DFS_DFSWithRecursion();
                cout<<"***********************"<<endl;
                cout<<"*请选择你要构造图的类型:"<<endl;
                cout<<"*1--构造无向图!   "<<endl;
                cout<<"*2--构造有向图!       "<<endl;
                cout<<"*3--构造无向加权图! "<<endl;
                cout<<"*4--构造有向加权图! "<<endl;
                cout<<"*5--随机构造100顶点的图，比较递归方法的深度优先搜索和非递归方法的深度优先搜索的性能!! "<<endl;
                cout<<"*0--表示结束操作!     "<<endl;
                cout<<"***********************"<<endl;
                cout<<"请你做出选择!"<<endl;
                break;


        }
    }
           return 0;

}