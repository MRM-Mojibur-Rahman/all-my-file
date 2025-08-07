#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string name;
    Node *next;
    Node *prev;
    Node(string name)
    {
        this->name = name;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, string val)
{

    Node *newNode = new Node(val);
    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = newNode;

        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void print_forward(Node *head)
{
    while (head != NULL)
    {
        cout << head->name << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        string a;
        cin >> a;
        if (a == "end")
        {
            break;
        }

        insert_at_tail(head, tail, a);
    }

    int n;
    cin >> n;

    Node *current = NULL;

    int f = 0;
    while (n--)
    {
        
        Node *tmp = head;
        string qu;
        cin >> qu;
        if (qu == "visit")
        {
            string last;
            cin >> last;

            while (tmp != NULL)
            {
                if (tmp->name == last)
                {
                    current = tmp;
                    f = 1;
                    break;
                }
                tmp = tmp->next;
            }

            if (f == 1)
            {
                cout << current->name << endl;
                f = 0;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (qu == "prev")
        {
            if (current->prev == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current = current->prev;
                cout << current->name << endl;
            }
        }
        else
        {
            if (current->next == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current = current->next;
                cout << current->name << endl;
            }
        }
    }

    return 0;
}