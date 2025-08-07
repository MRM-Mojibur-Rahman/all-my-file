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
void lside(Bnode *root)
{
    if(!root) return;
    if(root->left) lside(root->left);
    else lside(root->right);
    cout<<root->val<<" ";
}
void rside(Bnode *root)
{
    if(!root) return;
    cout<<root->val<<" ";
    if(root->right) rside(root->right);
    else rside(root->left);
}

int main()
{
    Bnode *root = input_bitree();
    int level;
    cin>>level;
    
        lside(root->left);
    cout<<root->val<<" ";
    rside(root->right);
   

    return 0;
} 