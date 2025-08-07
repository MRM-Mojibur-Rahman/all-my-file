#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = INT_MAX;
    int max = INT_MIN;
    int min_in,max_in;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
           max= a[i];
           max_in=i;
        }
        
        if (a[i]<min)
        {
           min= a[i];
           min_in=i;
        }
        
        
    }

    swap(a[max_in],a[min_in]);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    

    return 0;
}