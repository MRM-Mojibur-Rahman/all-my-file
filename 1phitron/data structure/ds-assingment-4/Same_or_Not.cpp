#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (n != m)
       { cout << "NO"; return 0;}
    stack<int> s;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
       int val;
       cin>>val;
       s.push(val);
    }
    for (int i = 0; i < n; i++)
    {
       int val;
       cin>>val;
       q.push(val);
    }
    
    
        while (!s.empty())
        {
            if (s.top() != q.front())
            {
                cout << "NO";
                return 0;
            }
            s.pop();
            q.pop();
        }
    
    cout << "YES";

    return 0;
}