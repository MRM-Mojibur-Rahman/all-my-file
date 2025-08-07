#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    string questi;
    cin >> questi;
   

    for (int i = 0; i < q; i++)
    {
        string queery;
        cin >> queery;
        if (queery ==  "substr")
        {
            int x, y;
            cin >> x >> y;
            x--;
            cout << questi.substr(x, y) << endl;
        }
        else if (queery == "sort")
        {
            int x, y;
            cin >> x >> y;
            x--;
           
            sort(questi.begin() + x, questi.begin() + y);
        }
        else if (queery == "pop_back")
        {
            questi.pop_back();
        }
        else if (queery == "back")
        {
            cout << questi[questi.size() - 1] << endl;
        }
        else if (queery =="reverse")
        {
            int x, y;
            cin >> x >> y;
            x--;
            reverse(questi.begin() + x, questi.begin() + y);
        }
        else if (queery == "front")
        {
            cout << questi[0] << endl;
        }
        else if (queery == "push_back")
        {
            char a;
            cin >> a;
            questi.push_back(a);
        }
        else if (queery ==  "print")
        {
            int posi;
            cin >> posi;
            cout << questi[posi] << endl;
        }
    }

    return 0;
}