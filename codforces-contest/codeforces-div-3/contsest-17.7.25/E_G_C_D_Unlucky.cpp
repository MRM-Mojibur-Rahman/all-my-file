#include <bits/stdc++.h>
#include <numeric>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        int n;
        cin >> n;
        int p[n], s[n];
        for (int &x : p)
            cin >> x;
        for (int &x : s)
            cin >> x;
        if (p[n - 1] != s[0])
        {
            cout << "NO" << endl;
            continue;
        }
        int off = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (p[i] < p[i - 1] || s[i] > s[i + 1])
            {
                cout << "NO" << endl;
                off=1;
                break;
            }
        }
    }   
    return 0;
}