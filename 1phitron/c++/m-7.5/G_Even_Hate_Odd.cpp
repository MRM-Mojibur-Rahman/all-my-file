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
        int odd = 0, even = 0;

        for (int i = 0; i < len; i++)
        {
            cin >> array[i];
            if (array[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        
        if (len%2==0)
        {
            cout<<max(even,odd)-len/2<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
        

        int ans = max(even,odd);
    }
    return 0;
}