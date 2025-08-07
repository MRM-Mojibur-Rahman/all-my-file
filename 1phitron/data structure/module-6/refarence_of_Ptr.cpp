#include <bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
    int y = 10;
    p = &y;
    cout << "From fun " << *p << endl;
}
// note 1st we try to change out pointer value but we falled .
// now if give the address of our ptr then function's ptr would be our ptr
// this is called pass by refarence of a function.
int main()
{
    int x = 25;
    int *p = &x;
    fun(p);
    cout << "From main " << *p << endl;
    return 0;
}