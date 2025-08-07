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
void print_linked_list(Node *head)
{
    
    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
}
void insert_at_head(Node * & head,int val){
    Node * newnode = new Node(val);
    newnode->next=head;
    head=newnode;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(30);
    Node *b = new Node(20);
    head->next = a;
    a->next = b;
    insert_at_head(head,100);
    insert_at_head(head,23);
    insert_at_head(head,43);
    print_linked_list(head);
    
    

    return 0;
}