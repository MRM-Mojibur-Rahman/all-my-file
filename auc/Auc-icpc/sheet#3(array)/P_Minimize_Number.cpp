#include <bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin >> len;
    int array[len];
    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
    }
    int ans[len] = {0};
    int i = 0;
    while (true)
    {
        
        if (array[i] % 2 == 0)
        {
            ans[i]++;
            array[i] = array[i] / 2;
        }
        else
        {
            break;
            
        }
        if (i == len - 1)
        {
            i = -1;
        }
        i++;
    }

    

    cout << *min_element(ans,ans+len);

    return 0;
}