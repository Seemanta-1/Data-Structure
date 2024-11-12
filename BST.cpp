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
        this->right=NULL;
    }
};
Node* input_tree()
{
    int val; cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty())
    {
        
        Node* p = q.front();
        q.pop();

        int left_val, right_val; cin >> left_val >> right_val;
        Node* my_left; Node* my_right;

        if(left_val == -1) my_left = NULL;
        else my_left = new Node(left_val);
        if(right_val == -1) my_right = NULL;
        else my_right = new Node(right_val);

        p->left = my_left;
        p->right = my_right;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

    }
    return root;
}

void level_order(Node* root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* f= q.front();
        q.pop();

        cout<<f->val<<" ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}
bool search(Node* root, int x)
{
    if(root==NULL) return false;
    if(root->val) return true;
    if(x<root->val) {
        return search(root->left,x);
    }
    else {
        return search(root->right,x);
    }
}
int main()
{
    Node* root = input_tree();
   if(search(root,12)) cout<<"yes,found"<<endl;
    else cout<<"No, Not found"<<endl;
    //level_order(root);
    return 0;
}