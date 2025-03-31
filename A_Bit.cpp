#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //"o" : stores output
    int o=0;
    // "n" : stores the number of statements
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string operation;
        cin >> operation;
        if (operation == "X++" || operation == "++X")
        {
            o++;
        }
        else
        {
            o--;
        }
        
    }
    cout << o;
}