#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
       cin>>array[i];

    }
    // sort(array,array+n);======= assendig order ========
    // for (int i = 0; i < n; i++)
    // {
    //    cout<<array[i]<<" ";

    // }
    sort(array,array+5,greater<int>());
    for (int i = 0; i < n; i++)
    {
       cout<<array[i]<<" ";

    }
    

    return 0;
}