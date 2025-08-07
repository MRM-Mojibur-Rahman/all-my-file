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

Bnode* convert(int a[],int n,int l,int r){
    if(l>r) return NULL;
    int mild = (l+r)/2;
    Bnode * root = new Bnode(a[mild]);
    root->left= convert(a,n,l,mild-1);
    root->right=convert(a,n,mild+1,r);
    return root;

}
int main()
{
   int n;
   cin>>n;
   int a[n];
   for (int i = 0; i < n; i++)
   {
       cin>>a[i];
    }
    
   Bnode *root = convert(a,n,0,n-1);
   BiTprt(root);

    return 0;
}