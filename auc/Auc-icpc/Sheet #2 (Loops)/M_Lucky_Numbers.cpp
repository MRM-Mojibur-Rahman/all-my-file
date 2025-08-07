#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int t=0;
    for (int i = a; i <= b; i++)
    {
        int is_lucky = 1;

        int dev = i, rem;
        while (dev != 0)
        {

            rem = dev % 10;
            dev = dev / 10;
            if (rem != 4 && rem != 7)
            {
                is_lucky = 0;
                break;
            }
        }
        if (is_lucky == 1)
        {
            cout << i << " ";
            t++;
        }
        
    }
    if (t==0)
    {
        cout<<"-1 ";
    }
    
    return 0;
}