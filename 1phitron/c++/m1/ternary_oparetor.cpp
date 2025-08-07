#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;

    // using if else
    if (x % 2 != 0)
    {
        cout << "odd" << endl;
    }
    else
    {
        cout << "even" << endl;
    }
    // using ternary oparetor
    // syntx
    // (condition) ? True : False;

    //
    (x % 2 == 0) ? cout << "even " << x << endl : cout << "odd " << x << endl;

    return 0;
}