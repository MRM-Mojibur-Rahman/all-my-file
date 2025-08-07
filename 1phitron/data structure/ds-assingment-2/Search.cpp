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
// void print_link_list(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << endl;
//         temp = temp->next;
//     }
// }
int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
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
        int x, i = 0, f=0 ;
        cin >> x;

        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->val == x)
            {
                cout << i << endl;
                f=1;
                break;
            }
            i++;
            temp = temp->next;
        }
        if (f==0)
        {
            cout<<-1<<endl;
        }
        
    }

    return 0;
}