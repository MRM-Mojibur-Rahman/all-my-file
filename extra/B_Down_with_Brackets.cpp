#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        string s;
        cin >> s;
        int n = s.length();
        int right_braket = 0;
        int left_braket = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                left_braket++;
            }
        }
        for (int i = 0; i < n; i++)
        {

            if (s[i] == ')')
            {
                right_braket++;
            }
        }
    
        right_braket-=1;
        left_braket-=1;
        // int braket = right_braket+ left_braket;
        if ((right_braket>=1&&right_braket % 2 != 0) && (left_braket>=1&& left_braket % 2 != 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}