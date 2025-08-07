#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        int size;
        cin >> size;
        int array[size];
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        for (int i = 0; i <= size; i++)
        {
            int mx = INT_MIN;
            for (int j = 0; j < size - i; j++)
            {
                int mx = INT_MIN;
                for (int k = j; k <= j + i; k++)
                {
                     mx = max(mx,array[k]);
                    // if (array[k] > max)
                    // {
                    //     max = array[k];
                    // }
                }
                cout << mx << " ";
            }
        }
        cout << endl;
    }
    return 0;
}