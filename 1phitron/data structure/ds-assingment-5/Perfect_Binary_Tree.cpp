#include <bits/stdc++.h>
using namespace std;
vector<int> v;
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
Bnode *input_bitree()
{
    int val;
    cin >> val;
    Bnode *root = new Bnode(val);
    queue<Bnode *> q;
    q.push(root);
    while (!q.empty())
    {
        Bnode *p = q.front();
        q.pop();
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
int mxdep(Bnode *root)
{
    if (!root)
        return 0;
    if (!root->left && !root->right)
        return 1;
    int l = mxdep(root->left);
    int r = mxdep(root->right);
    return max(l, r) + 1;
}
int total_Nodes(Bnode *root)
{
    if (!root)
        return 0;
    if (!root->left && !root->right)
        return 1;
    int l = total_Nodes(root->left);
    int r = total_Nodes(root->right);
    return l+ r + 1;
}
int main()
{
    Bnode *root = input_bitree();
    int depth = mxdep(root);
    int tlNode= total_Nodes(root);
    int fdNodes=pow(2,depth)-1;
    
    (fdNodes== tlNode)? cout<<"YES":cout<<"NO"; 

    return 0;
}