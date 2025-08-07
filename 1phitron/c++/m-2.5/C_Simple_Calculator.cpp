#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int sum = x + y, sub = x - y;
    long long int mal = 1LL* x * y;
    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << mal << endl;
    cout << x << " - " << y << " = " << sub << endl;
    return 0;
}