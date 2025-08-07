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
Bnode *input_bitree()
{
    int val;
    cin >> val;
    Bnode *root = new Bnode(val);
    queue<Bnode *> q;
    q.push(root);
    while (!q.empty())
    {
        // taking out the parents
        Bnode *p = q.front();
        q.pop();
        // doing the work
        int l, r;
        cin >> l >> r;
        if (l != -1)
            p->left = new Bnode(l);
        if (r != -1)
            p->right = new Bnode(r);
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

int main()
{
    Bnode *root = input_bitree();
    level_order(root);
    return 0;
}