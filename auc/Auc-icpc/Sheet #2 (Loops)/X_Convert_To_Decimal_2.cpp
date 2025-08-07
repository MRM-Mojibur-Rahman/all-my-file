#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin>>test_case;
    for (int t = 0; t < test_case; t++)
    {
        int num;
        cin>>num;
        int rem,dev=num;
        int ones=0;
        while (dev!=0)
        {
            rem=dev%2;
            dev=dev/2;
            if (rem==1)
            {
                ones++;
            }
        }
        int decimal=0;
        for (int i = 0; i < ones; i++)
        {
            decimal+=1*pow(2,i);
        }
        cout<<decimal<<endl;
        
        
        

        
    }
    return 0;
}