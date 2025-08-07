#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* next;
    Node* prev;
    Node (int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
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
void insert_at_any_posi(Node *&head,Node *&tail,int posi)
{
    
    Node *temp = head;
    for (int i = 0; i < posi-1; i++)
    {
        temp=temp->next;
    }
    Node * dltnode = temp->next;
    temp->next->next->prev=temp;
    temp->next=temp->next->next;
    delete dltnode;

    
    
}

int main ()
{
    Node * head = new Node(10);
    Node * a= new Node(20);
    Node * b= new Node(30);
    Node * c= new Node(40);
    Node * tail = new Node(50);
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    c->next=tail;
    tail->prev=c;
    insert_at_any_posi(head,tail,2);
    
    print_forward(head);
    print_backword(tail);
   
    return 0;
}