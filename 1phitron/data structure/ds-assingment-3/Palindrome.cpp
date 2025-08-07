#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {

        head = newNode;
        tail = head;

        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }

        insert_at_tail(head, tail, val);
    }
    Node* l=head,*r=tail;
    while (l!=r&&l->prev!=r)
    {
       if (l->val!=r->val)
       {
            cout<<"NO"<<endl;
            return 0;
       }
       l=l->next;
       r=r->prev;
       
    }
    cout<<"YES"<<endl;
    
   

    return 0;
}