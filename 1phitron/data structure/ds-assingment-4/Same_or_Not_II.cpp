#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next, *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myQuqe
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int siz = 0;
    void push(int val)
    {
        siz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
           
            return;
        }
        tail->next = newNode;
        tail = newNode;
       
        return;
    }
    void pop()
    {
        siz--;
        if (head == NULL)
        {
            return;
        }
        Node *dlt = head;
        head = head->next;
        delete dlt;
        return;
    }
    int front()
    {
        if (head == NULL)
        {
            return -1;
        }
        return head->val;
    }
    int back()
    {
        if (head == NULL)
        {
            return -1;
        }
        return tail->val;
    }
    
    bool empty() {return (head == NULL) ? true : false; }
};
class MyStack
{
public:
    vector<int> v;
    void push(int val) { v.push_back(val); }
    void pop() { v.pop_back(); }
    int top() { return v.back(); }
    bool empty() { return v.empty(); }
    
};
int main()
{
    int n, m;
    cin >> n >> m;
    if (n != m)
    {
        cout << "NO";
        return 0;
    }
   
    MyStack s;
    myQuqe q;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }
    
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    

    while (!s.empty())
    {
        if (s.top() != q.front())
        {
            cout << "NO";
            return 0;
        }
        s.pop();
        q.pop();
    }

    cout << "YES";

    return 0;
}