#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    scanf("%d %d",n,&q)
    cin >> n >> q;
    vector<int> ar(n), presum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
            presum[i] = ar[i]+(i>0? presum[i-1]:0);
        
    }

    for (int i = 0; i < q; i++)
    {
        int ini, fin;
        cin >> ini >> fin;
        ini--;
        fin--;
        (ini == 0) ? cout << presum[fin] : cout << presum[fin] - presum[ini - 1];
        cout << endl;
    }

    return 0;
}