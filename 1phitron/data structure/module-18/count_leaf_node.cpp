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
int count_leaf_node(Bnode *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    int l = count_leaf_node(root->left);
    int r = count_leaf_node(root->right);
    return l + r;
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
        Bnode *myleft, *myright;
        if (l != -1)
        {
            myleft = new Bnode(l);
        }
        else
            myleft = NULL;
        if (r != -1)
        {
            myright = new Bnode(r);
        }
        else
            myright = NULL;

        p->left = myleft;
        p->right = myright;
        // pushing element
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
    int size = count_leaf_node(root);
    cout << size;
    return 0;
}