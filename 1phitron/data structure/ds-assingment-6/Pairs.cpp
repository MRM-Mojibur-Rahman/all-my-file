#include <bits/stdc++.h>
using namespace std;
class Students
{
public:
    int m;
    string name;
    Students(string name, int m)
    {
        this->name = name;
        this->m = m;
    }
};
class cmp
{
public:
    bool operator()(Students l, Students r)
    {
        if(l.name>r.name) return true;
        else if (l.name<r.name) return false;
        else{
            return l.m<r.m;
        }
        
        
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Students, vector<Students>, cmp> st;

    while (n--)
    {
        string name;
        int m;
        cin >> name >> m;
        Students student(name, m);
        st.push(student);
    }
    while (!st.empty())
    {
       cout<<st.top().name<<" "<<st.top().m<<endl;
       st.pop();
    }
    
    return 0;
}