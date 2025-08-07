#include <bits/stdc++.h>
using namespace std;
class Bnode
{
public:
    int val;
    Bnode *left;
    Bnode *right;
    Bnode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void level_order(Bnode *root)
{

    queue<Bnode *> q;
    q.push(root);
    while (!q.empty())
    {
        Bnode *node = q.front();
        cout << node->val << " ";
        if (node->left != NULL)
            q.push(node->left);

        if (node->right != NULL)
            q.push(node->right);
        q.pop();
    }
}
int main()
{
    Bnode *root = new Bnode(1);
    Bnode *a = new Bnode(2);
    Bnode *b = new Bnode(4);
    Bnode *c = new Bnode(3);
    Bnode *d = new Bnode(5);
    Bnode *e = new Bnode(6);
    root->left = a;
    a->left = b;
    root->right = c;
    c->left = d;
    c->right = e;
    level_order(root);

    return 0;
}