#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,a,b;
    cin>>num>>a>>b;
    int ans=0;
    for (int i = 1; i <=num; i++)
    {
        int rem,dev= i,rsum=0;
        while (dev!=0)
        {
            rem = dev%10;
            dev = dev/10;
            rsum+=rem;
        }
        if (rsum>=a&&rsum<=b)
        {
           ans+=i;
        }
        
        
    }
    cout<<ans;
    
    return 0;
}