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
void print_forward(Node *head)
{
    
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void print_backword(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}
void insert_head(Node *&head, Node *&tail, int val)
{

    
    Node *newNode = new Node(val);
     if (head == NULL && tail == NULL)
    {
        head =newNode;
        tail =newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    if (head->next==NULL)
    {
        tail=head;
    }
    
    head = newNode;

}
void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL && tail == NULL)
    {
        head =newNode;
        tail =newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
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
int main()
{
   Node *head =NULL;
   Node* tail = NULL;
   int n;
   cin>>n;
   int size=0;
   
   while (n--)
   {
        int index,val;
        cin>>index>>val;
        if (index==0)
        {
            
           insert_head(head,tail,val);
           cout<<"L -> ";print_forward(head);
            cout<<"R -> ";print_backword(tail);
           size++;
        }
        
        else if (index>size )
        {
           cout<<"Invalid"<<endl;
        }
        else if (index==size)
        {
            insert_at_tail(head,tail,val);
            cout<<"L -> ";print_forward(head);
            cout<<"R -> ";print_backword(tail);
            size++;
        }
        else
        {
           insert_at_any_posi(head,tail,val,index);
            cout<<"L -> ";print_forward(head);
            cout<<"R -> ";print_backword(tail);
            size++;
        }
        
        
        

        
   }
   
    return 0;
}