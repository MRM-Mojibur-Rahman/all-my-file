#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int febo[num]={0} ;
    febo[1]=1;
    for (int i = 0; i < num; i++)
    {
        if (i>1)
        {
            febo[i]=febo[i-1]+febo[i-2];
        }
        cout<<febo[i]<<" ";
        
        
    }

    return 0;
}