#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[50];
    a[0]=0;
    a[1] = 1;
    for (int i = 2; i < 50; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    
    

    int num;
    cin >> num;
    cout << a[num - 1];

    return 0;
}