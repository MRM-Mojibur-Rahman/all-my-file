#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int test_case;
   cin>>test_case;
   for (int t = 0; t < test_case; t++)
   {
       string s;
       int extra=0;
       cin>>s;
       stack<int> st;
       for (char x:s)
       {
            if (x=='0')
            {
            st.push(0);
            }
            else
            {
                if (st.empty()!=true)
                {
                    st.pop();
                }
                else
                {
                    extra++;
                }
                
                
            }
            
            
       }
       if (st.empty()==true&& extra==0)
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