#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> nums;
    while (n--)
    {
        int num;
        cin >> num;
        nums.push(num);
    }
    int numsq;
    cin >> numsq;
    while (numsq--)
    {
        int querie;
        cin >> querie;
        if (querie == 1)
        {
            if (nums.empty())
                cout << "Empty" << endl;
            else
                cout << nums.top() << endl;
        }
        else if (querie == 0)
        {
            int x;
            cin >> x;
            nums.push(x);
            cout << nums.top() << endl;
        }
        else if (querie == 2)
        {
            if (nums.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                nums.pop();
                if (nums.empty())
                    cout << "Empty" << endl;

                else
                    cout << nums.top() << endl;
            }
        }
    }

    return 0;
}