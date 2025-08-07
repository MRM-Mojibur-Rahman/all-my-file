#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;
        int ans = 0;
        for (int i = 0; i < n - k+1; i++)
        {
            int f = 0;
            for (int j = i; j < i + k; j++)
            {
                if (v[j] == 1)
                {
                    f = 1;
                    break;
                }
            }
            if (f == 0)
            {
                ans++;
                i += k;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}