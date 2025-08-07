#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        bool ans = false;
        for (int i = n - 2; i >= 1; i--)
        {

            char alpha = s[i];
            bool is = true;

            for (int j = 0; j < n; j++)
            {
                if (s[j] == alpha&&j!=i)
                {
                    is = false;

                    break;
                }
            }
            if (is == false)
            {
                cout << "Yes" << endl;
                ans=true;
                break;
            }
            
            
        }
        if (ans==false)
        {
            cout << "No" << endl;
        }
        
    }
    return 0;
}