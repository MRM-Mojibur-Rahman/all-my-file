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
    if (head == NULL)
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
// delete a node------------------------------
void delete_at_any_posi(Node *head, int idx)
{

    for (int i = 0; i < idx - 1; i++)
    {
        head = head->next;
    }
    Node *dltNode = head->next;
    head->next = head->next->next;
    delete dltNode;
}
// delete a node------------------------------
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
bool cmp(int a,int b){
    return a>b;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int len = 0;
    while (1)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }
        insert_at_tail(head, tail, n);
        len++;
    }

    vector<int> dltidx;
    int str = 0;
    for (Node *i = head; i != NULL; i = i->next)
    {
        int idx = str;
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            idx++;
            if (i->val == j->val && j->val != -5)
            {

                dltidx.push_back(idx);
                j->val = -5;
            }
        }

        str++;
    }
    sort(dltidx.begin(),dltidx.end(),cmp);
    
    
    for (int i = 0; i < dltidx.size(); i++)
    {
        if (dltidx[i]==len-1)
        {
            delete_at_tail(head,tail);
            
            len--;
        }
        else
        {
              delete_at_any_posi(head, dltidx[i]);
            
        }
        
        
        
         
    }
    print_link_list(head);

    return 0;
}