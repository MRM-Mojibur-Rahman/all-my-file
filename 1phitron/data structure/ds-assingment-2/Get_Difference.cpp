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
    int mx = INT_MIN;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val > mx)
        {
            mx = temp->val;
        }

        temp = temp->next;
    }
    int mi = INT_MAX;
    Node *temp1 = head;
    while (temp1 != NULL)
    {
        if (temp1->val < mi)
        {
            mi = temp1->val;
        }

        temp1 = temp1->next;
    }

    cout<<mx-mi;
    return 0;
}