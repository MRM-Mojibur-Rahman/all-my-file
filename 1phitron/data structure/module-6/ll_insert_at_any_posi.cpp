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
void insert_at_any_posi(Node * head, int idx, int val)
{
    Node *newnode = new Node(val);
    idx--;
    while (idx--)
    {

        
        head=head->next;
    }
    
    newnode->next = head->next;
    head->next=newnode;
    
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(30);
    Node *b = new Node(20);
    head->next = a;
    a->next = b;
    insert_at_any_posi(head, 1, 25);
    print_linked_list(head);

    return 0;
}