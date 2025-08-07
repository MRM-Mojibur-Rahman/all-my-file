#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int test_case;
   cin>>test_case;
   for (int t = 0; t < test_case; t++)
   {
       int n,plrposi,remain;
       cin>>n>>plrposi>>remain;
       vector<int>v(n);
       for (int i = 0; i <n; i++)
       {
        cin>>v[i];
       }
       auto maxit= max_element(v.begin(),v.end());
       if (remain>=2)
       {
        cout<<"YES"<<endl;
       }
       else if(remain==1&& v[plrposi-1]==*maxit)
       {
        cout<<"YES"<<endl;
       }
       else
       {
        cout<<"NO"<<endl;
       }
       
       
       
       
       
   }
    return 0;
}