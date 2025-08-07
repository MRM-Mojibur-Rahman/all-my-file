#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (q--)
    {
        int num;
        cin >> num;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == num)
            {
                cout << "found\n";
                num=-1;
                break;
                
            }
            

        }
        if (num!=-1)
        {
            cout << "not found\n";
        }
        
    }

    return 0;
}