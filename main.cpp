
#include <iostream>
#include "Node.h"
using namespace std;
int chooseMode;

void initalizePuzzleMethodOne(Node* n0,Node* n1,Node* n2,Node* n3,Node* n4,Node* n5,Node* n6,Node* n7,Node* n8);
void initalizePuzzleMethodTwo();
void printPuzzle();

int main()
{
    cout << "Welcome to 8 Puzzle game! " << endl;
    cout << "Type \"1 \" to use a default puzzle or, \"2\" to enter your own puzzle   "<< endl;
    cin >> chooseMode;
    cout << "check "<< chooseMode << endl;

    while(chooseMode != 1 && chooseMode != 2) // ensure user does not put incorrect choice 
    {
        cerr << "Error, Invalid Option" << endl;
        cout << "Type \"1 \" to use a default puzzle or, \"2\" to enter your own puzzle   "<< endl;
        
    }
    Node * Node0 = new Node(0, nullptr, nullptr);
    Node * Node1 = new Node(1, nullptr, nullptr);
    Node * Node2 = new Node(2, nullptr, nullptr);
    Node * Node3 = new Node(3, nullptr, nullptr);
    Node * Node4 = new Node(4, nullptr, nullptr);
    Node * Node5 = new Node(5, nullptr, nullptr);
    Node * Node6 = new Node(6, nullptr, nullptr);
    Node * Node7 = new Node(7, nullptr, nullptr);
    Node * Node8 = new Node(8, nullptr, nullptr);
    
    if(chooseMode == 1) // 
    {
        cout << " Button 1 choosen" << endl;
        initalizePuzzleMethodOne(Node1,Node2,Node3,Node4,Node5,Node6,Node7,Node8);

    }
    else
    {
        cout << " Button 2 choosen" << endl;
        initalizePuzzleMethodTwo();
    }
    return 0;

}

void initalizePuzzleMethodOne(Node* n0,Node* Node1,Node* Node2,Node* Node3,Node* Node4,Node* Node5,Node* Node6,Node* Node7, Node* Node8)
{
 
    cout << "Enter your puzzle, use a zero to represent the blank " << endl;
    cout << "Enter the first row, use space or tabs between numbers" << endl;
    cout << "Enter the second row, use space or tabs between numbers" << endl;
    cout << "Enter the third row, use space or tabs between numbers" << endl;
    int Result[8];
    bool numReached = false; // user inputs all 8 digits 
    bool Blank = false;  // user inputs blank
    int input;


    while(!numReached && !Blank) // keep looping until user inputs 8 numbers 
    {
        cin >> input >> endl;
        cin >> 
        if()

    }

    
}




void initalizePuzzleMethodTwo()
{
    cout << "Method 3: " << endl;
}


/*
Recall How to Compile + run
1. g++ .\main.cpp
2. .\a.exe
*/
