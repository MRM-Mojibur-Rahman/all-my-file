#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next,*prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev= NULL;
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
        newNode->prev=tail;
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
        head->prev=NULL;
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
        cout << a.front()<<" "<<a.siz << endl;
        a.pop();
    }

    return 0;
}