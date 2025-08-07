#include <bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin >> len;
    long long int ar1[len];
    for (int i = 0; i < len; i++)
    {
        cin >> ar1[i];
    }
    long long int ar2[len];
    for (int i = 0; i < len; i++)
    {
        cin >> ar2[i];
    }
    int ans = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (ar1[i] == ar2[j])
            {
                ar2[j] = 0;
                ans++;
                break;
            }
        }
    }
    
    (ans==len)? cout<<"yes":cout<<"no";
    return 0;
}