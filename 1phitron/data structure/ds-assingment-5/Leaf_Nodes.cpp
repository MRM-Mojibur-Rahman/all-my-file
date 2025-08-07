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
void leaf_nodes(Bnode*root)
{
    if(!root) return;
    if(!root->left&&!root->right) v.push_back(root->val);
    leaf_nodes(root->left);
    leaf_nodes(root->right); 
}
int main()
{
    Bnode* root= input_bitree();
    leaf_nodes(root);
    sort(v.begin(),v.end(),greater<int>());
    for (int x : v) cout<<x<<" ";
   
    
    return 0;
}