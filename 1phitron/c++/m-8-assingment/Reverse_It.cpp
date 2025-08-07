#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls, id;
    char sec;
};
int main()
{
    int n;
    cin >> n;
    Student students[n];
    for (int i = 0; i < n; i++)
    {
       cin>>students[i].name>>students[i].cls>>students[i].sec>>students[i].id;
    }
    for (int i = 0; i < n; i++)
    {
       cout<<students[i].name<<" "<<students[i].cls<<" "<<students[n-1-i].sec<<" "<<students[i].id<<endl;
    }
    

    return 0;
}