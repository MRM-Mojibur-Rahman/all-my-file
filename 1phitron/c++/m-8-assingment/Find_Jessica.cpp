#include <bits/stdc++.h>
using namespace std;
int main()
{
    string names;
    getline(cin, names);
    int len = names.size();
    string jessi = "Jessica";
    int flag = 0;
    stringstream words(names);
    string word;
    while (words>>word)
    {
        if (word==jessi)
        {
           cout<<"YES";
           return 0;
        }
        
    }
    cout<<"NO";
    
    
   

    return 0;
}