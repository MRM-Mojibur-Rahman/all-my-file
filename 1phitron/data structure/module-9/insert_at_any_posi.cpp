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
void insert_at_any_posi(Node *&head,Node *&tail,int val,int posi)
{
    Node * newNode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < posi-1; i++)
    {
        temp=temp->next;
    }
    temp->next->prev=newNode;
    newNode->next=temp->next;

    temp->next= newNode;
    newNode->prev=temp;
    
    
}

int main ()
{
    Node * head = new Node(10);
    Node * a= new Node(20);
    Node * tail = new Node(30);
    head->next=a;
    a->prev=head;
    a->next=tail;
    tail->prev=a;
    insert_at_any_posi(head,tail,200,1);
    
    print_forward(head);
    print_backword(tail);
   
    return 0;
}