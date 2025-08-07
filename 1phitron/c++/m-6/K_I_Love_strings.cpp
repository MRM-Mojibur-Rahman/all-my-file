#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int len1 = s1.size(), len2 = s2.size();
         if (len1 >= len2)
        {
            for (int i = 0; i < len1; i++)
            {
                if (i < len2)
                {
                    cout << s1[i] << s2[i];
                }
                else
                {
                    cout << s1[i];
                }
            }
        }
        else if (len1 <= len2)
        {
            for (int i = 0; i < len2; i++)
            {
                if (i < len1)
                {
                    cout << s1[i] << s2[i];
                }
                else
                {
                    cout << s2[i];
                }
            }
        }
        cout << endl;
    }
    return 0;
}