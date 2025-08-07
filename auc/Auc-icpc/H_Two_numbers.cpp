#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int a,b;
   cin>>a>>b;
   float div = (float) a/b;

   int flr= floor(div);
   int cil = ceil(div);
   int rnd = round (div);
   cout<<"floor "<<a<<" / "<<b<<" = "<<flr<<endl;
   cout<<"ceil "<<a<<" / "<<b<<" = "<<cil<<endl;
   cout<<"round "<<a<<" / "<<b<<" = "<<rnd<<endl;
    return 0;
    //helloo
}