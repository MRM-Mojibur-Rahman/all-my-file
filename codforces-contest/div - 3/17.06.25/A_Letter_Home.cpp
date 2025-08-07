#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        int len, s;
        cin >> len >> s;

        int array[len];
        for (int i = 0; i < len; i++)
        {
            cin >> array[i];
        }
        int ans = 0;

        if (len == 1)
        {
            ans = abs(array[0] - s);
        }
        else if (array[0] > s && array[len - 1] > s)
        {
            ans = array[len - 1] - s;
        }
        else if (array[0] < s && array[len - 1] < s)
        {
            ans = s - array[0];
        }

        else if (array[len - 1] - s > s - array[0])
        {
            ans = (s - array[0]) + (array[len - 1] - array[0]);
        }
        else if (array[len - 1] - s < s - array[0])
        {
            ans = (array[len - 1] - s) + (array[len - 1] - array[0]);
        }
        else if (array[len - 1] - s == s - array[0])
        {
            ans = (array[len - 1] - s) + (array[len - 1] - array[0]);
        }

        cout << ans << endl;
    }
    return 0;
}