#include<bits/stdc++.h>
using namespace std;
int main ()
{
   list <int> l1={1,5,3,4,5,5,2,5,6,7,8,8,9,7,10,4};
    for (int val : l1)
    {
        cout << val << " ";
    }
    cout<<endl << "after changes" << endl;

    
    l1.remove(10);
    for (int val : l1)
    {
        cout << val << " ";
    }
    cout<<endl << "after changes" << endl;

    
    l1.sort();
    for (int val : l1)
    {
        cout << val << " ";
    }
    cout<<endl << "after changes" << endl;

    
    l1.sort(greater<int>());
    for (int val : l1)
    {
        cout << val << " ";
    }
    cout<<endl << "after changes" << endl;

    
    l1.unique();
    for (int val : l1)
    {
        cout << val << " ";
    }
    cout<<endl << "after changes" << endl;

    
    l1.reverse();
    for (int val : l1)
    {
        cout << val << " ";
    }
    
    return 0;
}