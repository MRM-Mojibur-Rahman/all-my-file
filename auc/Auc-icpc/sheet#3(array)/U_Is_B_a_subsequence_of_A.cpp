#include <bits/stdc++.h>
using namespace std;
int main()
{
    int len1, len2;
    cin >> len1 >> len2;
    int ar1[len1];
    for (int i = 0; i < len1; i++)
    {
        cin >> ar1[i];
    }
    int ar2[len2];
    for (int i = 0; i < len2; i++)
    {
        cin >> ar2[i];
    }
    int posi = 0;
    for (int i = 0; i < len2; i++)
    {
        int flag = 0;
        for (int j = posi; j < len1; j++)
        {

            if (ar2[i] == ar1[j])
            {
                flag = 1;

                posi = j+1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
        if (flag == 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}