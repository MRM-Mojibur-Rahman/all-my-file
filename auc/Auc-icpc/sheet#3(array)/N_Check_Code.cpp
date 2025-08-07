#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int num = a + b + 1;
    char digits[num];

    for (int i = 0; i < num; i++)
    {
        cin >> digits[i];
    }

    int position = 0,digi=0;
    for (int i = 0; i < num; i++)
    {

        if (digits[i] == '-')
        {
            position = i;
        }
        // if (digits[i] - 48 <= 0 && digits[i] != '-')
        // {
        //     digi=1;
        // }
    }
    if (position == a)
    {
        cout << "Yes";
    }
    else
    {
        cout<<"No";
    }
    

    return 0;
}