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
void prtBitree(Bnode *root)
{

    if (root == NULL) return; 
    
    prtBitree(root->left);
    prtBitree(root->right);
    cout << root->val << endl;
  
}
int main()
{
    Bnode *root = new Bnode(1);
    Bnode *a = new Bnode(2);
    Bnode *b = new Bnode(3);
    Bnode *c = new Bnode(4);
    Bnode *d = new Bnode(5);
    Bnode *e = new Bnode(6);
    root->left=a;
    a->left=b;
    root->right=c;
    c->left=d;
    c->right=e;
    prtBitree(root);

    return 0;
}