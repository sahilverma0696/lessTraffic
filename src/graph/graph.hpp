#include"basic.hpp"
#include"node.hpp"
#include"edge.hpp"

class Graph {
private:
    unordered_map<Node*,unordered_map<Node*,Edge*>> graph;
public:
    Graph();
    Status insertNode(Node* from, Node* to,Edge* edge);
    Status updateNode(Node* from, Node* to,Edge* edge);
    Status deleteNode(Node* from, Node* to);

    void    printDFS();
    void    printBFS();
};

// Keep a dict which keeps A->B : edge