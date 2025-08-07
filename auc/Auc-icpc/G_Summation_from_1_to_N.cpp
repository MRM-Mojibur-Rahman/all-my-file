#include<iostream>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
   long long num;
   cin>>num;
   long long sum = num*(num+1)/2;
   cout << sum << '\n';
   
    return 0;
}