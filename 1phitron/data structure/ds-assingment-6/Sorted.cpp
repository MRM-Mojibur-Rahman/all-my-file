#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        int n;
        cin >> n;
        set<int> s;
        while (n--)
        {
            int val;
            cin >> val;
            s.insert(val);
        }
        for (auto it=s.begin(); it !=s.end(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}