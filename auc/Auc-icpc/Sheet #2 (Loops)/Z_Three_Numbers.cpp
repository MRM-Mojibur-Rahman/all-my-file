#include <bits/stdc++.h>
using namespace std;
int main()
{
    int range, sum;
    cin >> range >> sum;
    int ans = 0;
    for (int i = 0; i <= range; i++)
    {
        for (int j = 0; j <= range; j++)
        {
            int x = sum - i -j;
            if (0<=x&&x<=range)
            {
                ans++;
            }
            
        }
    }
    cout<<ans;

    return 0;
}