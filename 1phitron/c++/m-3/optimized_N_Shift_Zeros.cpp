#include<bits/stdc++.h>
using namespace std;
void zero_sort(int a[],int n){
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]!=0)
        {
            a[index++]=a[i];
        }
        
    }
    for (int i = index; i < n; i++)
    {
        a[index++]=0;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main(){
    int n ;
    cin>> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    zero_sort(a,n);
    
    return 0;
}