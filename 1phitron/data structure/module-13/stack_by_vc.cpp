#include <bits/stdc++.h>
using namespace std;
class MyStack
{
public:
    vector<int> v;
    void push(int val) { v.push_back(val); } // for insert a value in stack
    void pop() { v.pop_back(); }// delete the last value of stack
    int top() { return v.back(); }// get the value of the top element in stack
    bool empty() { return v.empty(); } // cheking empty or not
    int size() { return v.size(); } // get the size of the stack
};
int main()
{
    MyStack plates;
    plates.push(10);
    plates.push(20);
    plates.push(30);
    plates.push(40);
    plates.push(50);
    cout<<plates.top()<<endl;
    plates.pop();
    cout<<plates.top()<<endl;
    plates.pop();
    cout<<plates.top()<<endl;
    plates.pop();
    cout<<plates.top()<<endl;
    plates.pop();
    cout<<plates.top()<<endl;
    plates.pop();
    // but we have to check is empty or not .because if it is empty then we will 
    // get a errror
    if (plates.empty()==false)
    {
         cout<<plates.top()<<endl;
    }
    if (plates.empty()==false)
    {
       plates.pop();
    }
    // but there is a shortcut
    if(!plates.empty()) cout<<plates.top()<<endl;
    if(!plates.empty()) plates.pop();
   
    
    




    return 0;
}