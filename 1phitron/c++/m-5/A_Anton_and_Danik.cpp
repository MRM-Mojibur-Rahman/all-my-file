#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    string play;
    cin >> play;
    int anton = 0, danik = 0;
    for (auto i = play.begin(); i < play.end(); i++)
    {
        if (*i == 'A')
        {
            anton++;
        }
        else if(*i=='D')
        {
            danik++;
        }
    }
    if (anton==danik)
    {
        cout<<"Friendship";
    }
    else if(anton>danik)
    {
        cout<<"Anton";
    }
    else
    {
        cout<<"Danik";
    }
    
    
    

    return 0;
}