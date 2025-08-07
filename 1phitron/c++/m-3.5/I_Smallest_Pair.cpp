#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_case;
    cin>>test_case;
    for (int m = 0; m < test_case; m++)
    {
        int n ;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int smallest_pair=INT_MAX;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j <n ; j++)
            {
                int sum= a[i]+a[j]-i+j;
                if (smallest_pair>sum)
                {
                    smallest_pair=sum;
                }
                
            }
            
        }
        cout<<smallest_pair<<endl;
        
        
    }
    
    return 0;
}