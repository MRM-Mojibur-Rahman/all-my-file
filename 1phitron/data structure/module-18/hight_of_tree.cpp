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
int hight_tree(Bnode* root){
    if(root==NULL) return -1   ;
    // if (root->left==NULL&&root->right==NULL)
    // {
    //     return 0;
    // }
    
    int l = hight_tree(root->left);
    int r = hight_tree(root->right);
    return max(l,r)+1;
}

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
        cin >> l>> r;
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
   int h= hight_tree(root);
   cout<<h;
   
    return 0;
}
