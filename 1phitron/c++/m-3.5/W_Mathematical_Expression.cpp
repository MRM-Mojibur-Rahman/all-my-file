#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, num2, ans;
    char sym1, sym2;
    cin >> num >> sym1 >> num2 >> sym2 >> ans;
    if ((num + num2 == ans && sym1 == '+') || (num * num2 == ans && sym1 == '*') || (num - num2 == ans && sym1 == '-'))
    {
        cout << "Yes";
    }
    else if (num + num2 != ans && sym1 == '+')
    {
        cout << num + num2;
    }
    else if (num - num2 != ans && sym1 == '-')
    {
        cout << num - num2;
    }
    else if (num * num2 != ans && sym1 == '*')
    {
        cout << num * num2;
    }

    return 0;
}