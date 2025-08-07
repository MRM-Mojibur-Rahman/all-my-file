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
void insert_head(Node *&head, Node *&tail, int val)
{
    Node * newNode = new Node(val);
    if (head == NULL && tail == NULL)
    {
        head == newNode;
        tail == newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head = newNode;

    
    
    
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
    insert_head(head,tail,1);
    print_forward(head);
    print_backword(tail);
    return 0;
}