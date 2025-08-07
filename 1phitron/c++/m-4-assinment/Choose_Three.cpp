#include <bits/stdc++.h>
using namespace std;
int main()
{

    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n, s;
        cin >> n >> s;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int flag = 1;
        if (n < 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < n - 2; i++)
            {
                for (int j = i + 1; j < n - 1; j++)
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        if (a[i] + a[j] + a[k] == s)
                        {
                            cout << "YES" << endl;
                            flag = 0;
                            break;
                        }
                    }
                    if (flag == 0)
                    {
                        break;
                    }
                }
                if (flag == 0)
                {
                    break;
                }
            }
            if (flag == 1)
            {
                cout << "NO"<<endl;
            }
        }

    }

    return 0;
}