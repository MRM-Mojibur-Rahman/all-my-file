#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = head;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_ll(Node *head)
{
    while (1)
    {
        cout << head->val << " ";
        head = head->next;
        if (head == NULL)
        {
            break;
        }
    }
}
void reverse_ll(Node*&head,Node *&tail,Node*temp){
    if (temp->next==NULL)
    {
        head=temp;
        return;
    }
    reverse_ll(head,tail,temp->next);
    temp->next->next=temp;
    temp->next=NULL;
    tail=temp;
    
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

    reverse_ll(head,tail,head);
    print_ll(head);
        
    


    return 0;
}