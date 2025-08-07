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
    if (head == NULL || tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
void print_link_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}
void delete_at_head(Node *&head){
    Node *temp = head;
    if (temp->next==NULL)
    {
        head=NULL;
    }
    else 
    {
        Node *dltNode = temp;
        head=head->next;
        delete dltNode;
    }
    
    
}
void delete_at_tail(Node *head,Node *&tail){
    while (head->next->next!=NULL)
    {
        head=head->next;
    }
    Node *dltNode = tail;
    head->next=NULL;
    tail =head;
    delete dltNode;
    
}
void delete_at_any_posi(Node *head, int idx)
{

    for (int i = 0; i < idx-1; i++)
    {
       head=head->next;
    }
    Node *dltNode = head->next;
    head->next=head->next->next;
    delete dltNode;
    
    
}
int main()
{

    int n;
    cin >> n;
    Node *head = NULL;
    Node *tail = NULL;
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
            len++;
        }
        else if (x == 1)
        {

            insert_at_tail(head, tail, v);
            len++;
        }
        else if (x == 2)
        {
            if (len != 0 && v < len)
            {
                if (v==0)
                {
                  delete_at_head(head);
                }
                else if (v==len-1)
                {
                    delete_at_tail(head,tail);
                }
                else
                {
                    delete_at_any_posi(head,v);
                }
                
                len--;
            }
        }

        print_link_list(head);
        cout << endl;
    }

    return 0;
}