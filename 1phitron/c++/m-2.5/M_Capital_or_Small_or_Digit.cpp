#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin >> x;
    int ascii = x;
    if (48 <= x && x <= 57)
    {
        cout << "IS DIGIT";
    }
    else if (65 <= x && x <= 90)
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    else if (97 <= x && x <= 122)
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    
    return 0;
}