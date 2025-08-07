#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int* a=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    
    int m;
    cin>>m;
    int a2[m];
    for (int i = 0; i < m; i++)
    {
        if (i < n)
        {
            a2[i] = a[i];
        }
        else
        {
            cin >> a2[i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout << a2[i] << " ";
    }
    delete[] a;

    return 0;
}