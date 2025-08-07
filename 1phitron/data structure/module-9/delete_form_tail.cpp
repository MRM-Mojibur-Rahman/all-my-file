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
void print_forward(Node* head)
{
    while (head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
void print_backword(Node* tail)
{
    while (tail!=NULL)
    {
        cout<<tail->val<<" ";
        tail=tail->prev;
    }
    cout<<endl;
}
void delete_at_tail(Node *&head,Node * &tail)
{
    
    Node* dltnode = tail;
    tail = tail->prev;
    delete dltnode;
    if (tail==NULL)
    {
       head==NULL;
       return;
    }
    tail->next=NULL;
    
    
    
    
    
    
}
int main()
{
    Node * head = new Node(10);
    Node * a= new Node(20);
    Node * tail = new Node(30);
    head->next=a;
    a->prev=head;
    a->next=tail;
    tail->prev=a;
    print_forward(head);
    delete_at_tail(head,tail);
    // delete_at_tail(head,tail);
    // delete_at_tail(head,tail);
    print_backword(tail);
    return 0;
}