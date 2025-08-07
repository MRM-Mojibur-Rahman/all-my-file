#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int common = 0;
    if (num1 > num2)
    {
        
        for (int i = 1; i <= num2; i++)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                common = i;
            }
        }
    }
    else
    {

        for (int i = 1; i <= num1; i++)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                common = i;
            }
        }
    }
    cout<<common;

    return 0;
}