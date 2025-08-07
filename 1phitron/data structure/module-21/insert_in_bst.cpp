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
Bnode *biTinput()
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
            q.push(node->left);
        }
        if (r != -1)
        {
            node->right = new Bnode(r);
            q.push(node->right);
        }
    }
    return root;
}
void BiTprt(Bnode *root)
{
    queue<Bnode *> q;
    q.push(root);
    while (!q.empty())
    {
        Bnode *node = q.front();
        q.pop();
        cout << node->val << " ";
        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }
}
void insert_Bst(Bnode *&root, int val)
{
    if (!root)
       { root = new Bnode(val); return;}
    if (root->val > val)
    {
        // if (!root->left)
            // root->left = new Bnode(val);
        // else
            insert_Bst(root->left, val);
    }
    else
    {
        // if (!root->right)
        //     root->right = new Bnode(val);
        // else
            insert_Bst(root->right, val);
    }
}
int main()
{
    Bnode *root = biTinput();
    int val;
    cin >> val;
    insert_Bst(root, val);
    BiTprt(root);
    // cout<<endl<<root->val;

    return 0;
}