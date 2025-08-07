#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int test_case;
   cin>>test_case;
   for (int t = 0; t < test_case; t++)
   {
       int n;
       cin>>n;
       int smal=n;

       while (n!=0)
       {
        smal=min(smal,n%10);
        n/=10;
       }
       cout<<smal<<endl;
       
       
   }
    return 0;
}