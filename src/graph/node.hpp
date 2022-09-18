#include"basic.hpp"
#include<ctime>

class Node {
private:
    time_t                  timestamp;
    string                  name;
    int                     edgeCount;
    unordered_set<Node*>    adjList;
public:

                    Node        ();
    Status          setName     (string name);
    Status          appendEdge  (Node* node);
    Status          deleteEdge  (Node* node);

    string          getName     ();
    int             getEdgeCount();
    vector<Node*>   getEdges    ();

};