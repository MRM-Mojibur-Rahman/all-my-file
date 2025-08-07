#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
       string word;
       cin>>word;
       if (word.size()>10)
       {
            cout<<word.front()<<word.size()-2<<word.back()<<endl;
       }
       else
       {
        cout << word << endl;
       }
       
       
    }

    return 0;
}