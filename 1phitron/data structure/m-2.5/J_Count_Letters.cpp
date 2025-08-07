#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int>v(26,0);
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        v[s[i]-97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i]>0)
        {
            char alp = i+97;
            cout<<alp<<" : "<<v[i]<<endl;
        }
        
    }
    
    
    return 0;
}