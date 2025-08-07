#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int j = n - 1;
    for (int i = 0; i < j; i++)
    {
        if (a[i] != a[j])
        {
            cout << "NO";
            return 0;
            break;
        }
        j--;
    }
    cout << "YES";
    return 0;
}