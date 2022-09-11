#include "basic.hpp"

class Node {
public:
    string Name;
    int edgeCount;
    unordered_set<Node*> adjList;
};