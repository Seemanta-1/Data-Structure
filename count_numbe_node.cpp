#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val= val;
        this->left= NULL;
        this->right= NULL;
    }
};
Node* input_tree()
{
    int p;
    cin>>p;
    Node* root;
    if(p==-1)
    {
        root=NULL;
    }
    else root=new Node(p);
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* f=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myLeft;
        Node* myRight;
        if(l!=-1) myLeft=NULL;
        else myLeft=new Node(l);
        if(r!=-1) myRight=NULL;
        else myRight=new Node(r);

        f->left=myLeft;
        f->right=myRight;
        
        if(f->left) q.push(f->left);
        if(f->val) q.push(f->right);

    }
    return root;
}
int count(Node* root)
{
    if(root==NULL) return 0;
    int l=count(root->left);
    int r= count(root->right);
    return l+r+1;
}
int main()
{
   Node* root= input_tree();
   cout<<count(root)<<endl;
    return 0;
}