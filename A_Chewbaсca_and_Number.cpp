#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //"number" : stores input
    string number;
    cin >> number;
    for (int i = 0; i < size(number); i++)
    {
        char c = number[i];
        if (i == 0 and c >= '5' and c < '9')
        {
            number[i] = '9' - c;
        }
        else if(i>0 and c>'4'){
            number[i]='9'-c;
        }
    }
    cout << number;
}