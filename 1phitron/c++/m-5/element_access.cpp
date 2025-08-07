#include<bits/stdc++.h>
using namespace std;
int main ()
{ 
    string s ;
    cin>> s;
    cout << s[0]<< " using s[i]"<<endl;
    cout << s.at(0)<<" using s.at()"<<endl;
    cout << s.front()<< " using s.front()"<<endl;
    cout << s.back()<< " using s.back()"<< endl;
    cout << s[s.size()-1]<< " using  s[s.size()-1]"<< endl;
    return 0;
}