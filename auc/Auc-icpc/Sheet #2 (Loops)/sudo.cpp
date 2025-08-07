#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int t = 0; t < 3; t++)
    {
        int num1, num2, sum = 0;
        cin >> num1 >> num2;
        int start = min(num1, num2), end = max(num1, num2);
        if (num1 == num2)
        {
            cout << num1 << " sum =" << num1 * 2 << endl;
        }
        else if (num1 > 0 && num2 > 0)
        {
            for (int i = start; i <= end; i++)
            {
                cout << i << " ";
                sum += i;
                if (i == end)
                {
                    cout << "sum =" << sum;
                }
            }
        }

        else
        {

            break;
        }
        cout << endl;
    }
}