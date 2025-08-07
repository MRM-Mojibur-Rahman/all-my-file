#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    string con;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'E' && s[i + 1] == 'G' && s[i + 2] == 'Y' && s[i + 3] == 'P' && s[i + 4] == 'T')
        {
            con+=' ';
            i+=4;
        }
        else
        {
            con += s[i];
        }
    }

    cout<<con;

    return 0;
}