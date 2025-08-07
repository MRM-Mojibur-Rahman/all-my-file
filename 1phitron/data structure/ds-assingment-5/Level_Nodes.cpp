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
void level_prt(Bnode *root,int level)
{

    queue<pair<Bnode*,int>> q;
    q.push({root,0});
    int f=0;
   
    while (!q.empty())
    {
        pair<Bnode*,int> parents=q.front();
        q.pop();
        Bnode *node = parents.first;
        int culevel= parents.second;
        if(level==culevel) {cout<<node->val<<" ";f=1;}
        if(node->left) q.push({node->left,culevel+1});
        if(node->right) q.push({node->right,culevel+1});

    }
    if(!f) cout<<"Invalid";

    
}
int main()
{
    Bnode *root = input_bitree();
    int level;
    cin>>level;
    level_prt(root,level);
   

    return 0;
}