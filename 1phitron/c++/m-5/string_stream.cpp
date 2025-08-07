#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    stringstream word_by_word(s);
    string word ;
    while (word_by_word>>word)
    {
        cout << word<<endl;
        
    }
    
    
    return 0;
}