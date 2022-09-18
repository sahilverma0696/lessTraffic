#include"node.hpp"

Node::Node()
{

}

Status  Node::setName(string name)
{
    // used to set the name identity of node
    
}

Status  Node::appendEdge(Node* node)
{
    // Add a new node as an edge to this node 
    
}

Status  Node::deleteEdge(Node* node)
{
    // delete a specific connection from this node
    
}

string  Node::getName()
{
    // get the node name info
    
}

int  Node::getEdgeCount()
{
    // get the total number of edges present for the node 
    // now this is required to be handled when there is a deletion 

    
}

vector<Node*>  Node::getEdges()
{
    // simple list of all the nodes which are connected to this node 
    
}