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
Bnode *biInput()
{
    int val;
    cin >> val;
    Bnode *root = new Bnode(val);
    queue<Bnode *> q;
    q.push(root);
    while (!q.empty())
    {
        Bnode *node = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        if (l != -1)
        {
            node->left = new Bnode(l);
        }
        if (r != -1)
        {
            node->right = new Bnode(r);
        }
        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }
    return root;
}
bool bisearch(Bnode *root, int val)
{
    if (!root)
        return false;
    if (root->val == val)
        return true;

    if (root->val < val)
        return bisearch(root->right, val);
    else
        return bisearch(root->left, val);
}
int main()
{
    Bnode *root = biInput();
    cout << (bisearch(root, 20) ? "Found\n" : "Not Found\n");

    return 0;
}