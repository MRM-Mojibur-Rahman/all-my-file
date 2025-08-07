#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int start= 1;
    for (int i = 1; i <= num; i++)
    {
       
        for (int j = start; j <=start+2; j++)
        {
            cout << j<<" ";
        }
        cout<<"PUM"<<endl;
        start +=4;
        
        
    }
    
    return 0;
}