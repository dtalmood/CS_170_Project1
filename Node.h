#ifndef NODE_H
#define NODE_H

// this is class for doubly linked list 
class Node 
{
public:
    Node () : data(0), previousLink(nullptr), nextLink(nullptr) {}
    Node (int theData, Node *previous, Node *next) : data(theData), previousLink(previous), nextLink(next) {}
    int getData( ) const { return data; }
    Node *getPreviousLink( ) const { return previousLink; }
    Node *getNextLink( ) const { return nextLink; }
    void setData(int theData) { data = theData; }
    void setPreviousLink(Node *pointer) { previousLink = pointer; }
    void setNextLink(Node *pointer) { nextLink = pointer; }
    ~Node()
    
    private:
    int data; //to simplify, we are using only one piece of data
    Node *previousLink;
    Node *nextLink;
};

#endif