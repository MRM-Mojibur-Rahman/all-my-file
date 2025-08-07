#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int test_case;
   cin>>test_case;
   for (int t = 0; t < test_case; t++)
   {
       int num;
       char c;
       cin>>num>>c;
       for (int i = 1; i <= num; i++)
       {
        cout<<c<<" ";
       }
       cout<<endl;
       
   }
    return 0;
}