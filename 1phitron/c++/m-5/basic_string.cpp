#include<bits/stdc++.h>
using namespace std;
int main ()

{

    char s [100]=" hello";
    char s1 [100]=" hello";
    string s2 = "hello";
    string s3 = "hello";
    if(strcmp(s,s1)==0){
        cout << " yes";
    }
    else
    {
        cout << " no";
    }
    // but is string we can do it very esaliy
    if (s2==s3)
    {
       cout<<"yes from string";
    }
    else
    {
        cout << " no from yes";
    }
    
    
    return 0;
}