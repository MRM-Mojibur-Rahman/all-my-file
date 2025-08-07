#include <bits/stdc++.h>
using namespace std;
class MyStack
{
public:
    vector<int> v;
    void push(int val) { v.push_back(val); } // for insert a value in stack
    void pop() { v.pop_back(); }             // delete the last value of stack
    int top() { return v.back(); }           // get the value of the top element in stack
    bool empty() { return v.empty(); }       // cheking empty or not
    int size() { return v.size(); }          // get the size of the stack
};
int main()
{
    MyStack st;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       int x;
       cin>>x;
       st.push(x);
    }
    while (!st.empty())
    {
       cout<<st.top()<<endl;
       st.pop();
    }
    
    
    return 0;
}