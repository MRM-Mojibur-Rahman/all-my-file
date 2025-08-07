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
void delete_at_any_posi(Node *head, int idx)
{
    idx--;
    while (idx--)
    {
        if (head->next != NULL)
        {
            head = head->next;
        }
        else
        {
           return;
        }
    }
    Node *deleteNode = head->next;
    if (head->next->next == NULL)
    {
        head->next = NULL;
    }
    else
    {
        head->next = head->next->next;
    }

    delete deleteNode;
}
void print_link_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }
        insert_at_tail(head, tail, n);
    }
    int n;
    cin >> n;
    delete_at_any_posi(head, n);
    print_link_list(head);

    return 0;
}