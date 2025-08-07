#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello";
    string s1 = " world";
    // now we can append 2 sring without using strcrt()


    // s+=s1;
    // cout << s << " using s+=s1"<<endl;
    // cout << s.append(s1) << " using append function"<<endl;
    // s.push_back('2');
    // cout << s << " using push back to add a char"<<endl;
    // s.pop_back();
    // cout << s << " using pop back to remove the last char"<<endl;

    cout << "now we will use assign function"<< endl;
    s=s1;
    cout << s << " using = sign"<< endl;

    s.assign(s1);
    cout << s << " using assign function"<< endl;
    s.assign(" of mrm");
    cout << s << " using assign function"<< endl;
    s.erase(2,3);
    cout << s << " using erase function"<< endl;
    s.replace(0,0," banglades ");
    cout << s << " using replace function"<< endl;
    s.insert(2," what the hell");
    cout << s << " using erase function"<< endl;
    
    return 0;
}