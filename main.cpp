
#include <iostream>

using namespace std;
int chooseMode;



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
    if(chooseMode == 1) // 
    {
        cout << " Button 1 choosen" << endl;

    }
    else
    {
        cout << " Button 2 choosen" << endl;
    }
    return 0;
}



/*
Recall How to Compile + run
1. g++ .\main.cpp
2. .\a.exe
*/
