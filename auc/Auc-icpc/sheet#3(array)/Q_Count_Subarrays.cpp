#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        int len;
        cin >> len;
        int array[len];
        for (int i = 0; i < len; i++)
        {
            cin >> array[i];
        }
        int ans = len;

        for (int i = 1; i < len ; i++)
        {
            for (int j = 0; j < len - i; j++)
            {

                int is = 0;
                for (int k = j; k <= j + i-1; k++)
                {
                    if (array[k] > array[k + 1])
                    {
                        is = 1;
                    }
                }
                if (is == 0)
                {
                    ans++;
                }

                // cout<<endl;
            }
            
        }
        cout << ans << endl;
    }
    return 0;
}