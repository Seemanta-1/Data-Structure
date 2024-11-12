#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }

};
void insert_at_tail(Node* &head,int v)
{
    Node* newNode= new Node(v);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
void print(Node * head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void insert_at_position(Node* head,int pos,int v)
{
    Node *newNode= new Node(v);
    Node * tmp=head;
    for(int i=1;i<=pos;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
void insert_at_head(Node *&head,int v)
{
    Node * newNode=new Node(v);
    newNode->next=head;
    head=newNode;
}
int main()
{
    Node* head=NULL;
    while(true)
    { 
        cout<<"OP :1 for insert"<<endl;
        cout<<"OP :2 for print"<<endl;
        cout<<"OP :3 for insert at position"<<endl;
        cout<<"OP :4 for insert at head"<<endl;
        cout<<"OP :5 for terminate"<<endl;
        int op;
        cin>>op;
       if(op==1){
        int v;
    cin>>v;
    insert_at_tail(head,v);
       } 
       else if(op==2){
             print(head);
       }
       else if(op==3)
       {
        int pos,v;
        cin>>pos>>v;
        insert_at_position(head,pos,v);
       }
       else if (op==4)
       {
        int v;
        cin>>v;
        insert_at_head(head,v);
       }
       else{
        break;
       }
    }
    return 0;
}