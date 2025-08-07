#include<bits/stdc++.h>
using namespace std;
int main ()
{
     queue<string>names;
   int n;
   cin>>n;
   for (int i = 0; i < n; i++)
   {
       int m;
       cin>>m;
       if (m==0)
       {
        string name;
        cin>>name;
        names.push(name);
       }
       else
       {
           if (names.empty()==true)
           {
                    cout<<"Invalid"<<endl;
           }
           else
           {
            cout<<names.front()<<endl;
            names.pop();
           }
           
           
       }
       
       
   }
   
    return 0;
}