#include <bits/stdc++.h>
using namespace std;

class myQuqe
{
public:
    list<int> l;
    
    void push(int val)
    {
    l.push_back(val);
        
    }
    void pop()
    {
       l.pop_front();
    }
    int front()
    {
       return l.front();
    }
    int back()
    {
        return l.back();
    }
   int siz(){ return l.size();}
    bool empty() {return l.empty(); }
};
int main()
{
    myQuqe a;
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);
    a.push(100);

    while (a.empty()!=true)
    {
        cout << a.front()<<" "<<a.siz() << endl;
        a.pop();
    }

    return 0;
}