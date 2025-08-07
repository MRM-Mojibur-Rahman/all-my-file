#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    int n;
    cin >> n;
    while (n--)
    {
        list<int> l2;
        int q, val;
        cin >> q >> val;
        if (q == 0)
        {
            l.push_front(val);
            l2 = l;
            reverse(l2.begin(), l2.end());
            cout << "L -> ";
            for (int x : l)
                cout << x << " ";
            cout << endl;
            cout << "R -> ";
            for (int x : l2)
                cout << x << " ";
            cout << endl;
        }
        else if (q == 1)
        {
            l.push_back(val);
            l2 = l;
            reverse(l2.begin(), l2.end());
            cout << "L -> ";
            for (int x : l)
                cout << x << " ";
            cout << endl;
            cout << "R -> ";
            for (int x : l2)
                cout << x << " ";
            cout << endl;
        }
        else
        {
            if (val < l.size())
            {
               
                l.erase(next(l.begin(), val));
                l2 = l;
                reverse(l2.begin(), l2.end());
                cout << "L -> ";
                for (int x : l)
                    cout << x << " ";
                cout << endl;
                cout << "R -> ";
                for (int x : l2)
                    cout << x << " ";
                cout << endl;
            }
            else
            {
                 l2 = l;
                reverse(l2.begin(), l2.end());
                cout << "L -> ";
                for (int x : l)
                    cout << x << " ";
                cout << endl;
                cout << "R -> ";
                for (int x : l2)
                    cout << x << " ";
                cout << endl;
            }
            
            
        }
    }

    return 0;
}