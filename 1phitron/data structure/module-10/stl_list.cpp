#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l1 = {1,2,4};
    int a[]={1,4,5,6};
    vector<int> v = {2,3,5,5,3};
    // list <int> l(3,15);
    // list <int> l(a,a+4);
    list <int> l(v.begin(),v.end());
    for (int e:l1  ){cout<<e<<endl;}
    
    
    for (auto it = l.begin();it!=l.end();it++){cout<<*it<<endl;}
    // cout<<l.size();
    return 0;
}