// source file: MyClass.cpp
#include "Node.h"
#include <iostream>

Node::Node() {
    myPrivateMember = 0;
}

void Node::myMethod() 
{
    std::cout << "Hello from myMethod()" << std::endl;
}