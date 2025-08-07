#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l1 = {0,1, 2, 3, 4, 5,6, 7, 8, 9};
    list<int> l2 = {2,3,4,4,4,4,5};
    for (int val : l1)
    {
        cout << val << " ";
    }
    // cout<<endl << "after changes" << endl;
    // l1.push_back(6);
    // l1.push_front(0);
    
    // for (int val : l1)
    // {
    //     cout << val << " ";
    // }
    // cout<<endl << "after changes" << endl;
    // l1.pop_back();
    // l1.pop_front();
    // for (int val : l1)
    // {
    //     cout << val << " ";
    // }
    // cout<<endl << "after changes" << endl;
    // l1=l2;
    // for (int val : l1)
    // {
    //     cout << val << " ";
    // }
    
    // cout<<endl<<*next(l1.begin(),2);
    // cout<<endl << "after changes" << endl;
    // l1.insert(next(l1.begin(),2),100);
    // for (int val : l1)
    // {
    //     cout << val << " ";
    // }
    
    // cout<<endl << "after changes" << endl;
    // l1.insert(next(l1.end(),-1),l2.begin(),l2.end());
    // for (int val : l1)
    // {
    //     cout << val << " ";
    // }
    cout<<endl << "after changes" << endl;

    l1.erase(next(l1.begin(),2),next(l1.begin(),5));
    l1.erase(next(l1.begin(),2));
    for (int val : l1)
    {
        cout << val << " ";
    }
    cout<<endl << "after changes" << endl;

    l1.insert(next(l1.begin(),2),l2.begin(),l2.end());
    for (int val : l1)
    {
        cout << val << " ";
    }
    cout<<endl << "after changes" << endl;

    replace(next(l1.begin(),5),l1.end(),4,-1);
    for (int val : l1)
    {
        cout << val << " ";
    }
    


    return 0;
}