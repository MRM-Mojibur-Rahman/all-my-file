#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2;
    char symbol;
    cin >> num1 >> symbol >> num2;
    if (num1 == num2 && symbol == '=')
    {
        cout << "Right";
    }
    else if (num1 > num2 && symbol == '>')
    {
        cout << "Right";
    }
    else if (num1 < num2 && symbol == '<')
    {
        cout << "Right";
    }
    else
    {
        cout << "Wrong";
    }

    return 0;
}