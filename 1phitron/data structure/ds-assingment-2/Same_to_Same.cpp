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
    int idx1 = 0, idx2 = 0;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (1)
    {
        int n;
        cin >> n;

        if (n == -1)
        {
            break;
        }
        idx1++;
        insert_at_tail(head1, tail1, n);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (1)
    {
        int n;
        cin >> n;

        if (n == -1)
        {
            break;
        }
        idx2++;
        insert_at_tail(head2, tail2, n);
    }
    if (idx1 == idx2)
    {
        Node *temp1 = head1;
        Node *temp2 = head2;
        while (temp1 != NULL)
        {
            if (temp1->val != temp2->val)
            {
                cout << "NO" << endl;
                return 0;
            }

            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        cout<<"YES"<<endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}