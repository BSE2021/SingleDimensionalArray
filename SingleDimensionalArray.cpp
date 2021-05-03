// SingleDimensionalArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string names[5] = { "John", "Jones", "Jim", "Jolly","Jicky" }; //storing names
    int i;

    //output
    for (i = 0; i < 5; i++) {
        cout << "\n" << names[i];
    }
    cout << "\n";
    return 0;
}

