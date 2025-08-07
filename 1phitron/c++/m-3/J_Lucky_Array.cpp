#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int m = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        m = min(m, array[i]);
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == m)
        {
            count++;
        }
    }
    (count%2)? cout<<"Lucky":cout<<"Unlucky";
    return 0;
}