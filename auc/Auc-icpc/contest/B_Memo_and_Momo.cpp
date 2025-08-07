#include<bits/stdc++.h>
using namespace std;
int main ()
{
   long long n,m,k;
   cin>>n>>m>>k;
   if (n%k==0&& m%k==0)
   {
    cout<<"Both";
   }
   else if (n%k==0&& m%k!=0)
   {
    cout<<"Memo";
   }
   else if (n%k!=0&& m%k==0)
   {
    cout<<"Momo";
   }
   
   else
   {
    cout<<"No One";
   }
   
    return 0;
}