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
}
int main()
{
    Node* head=NULL;
    while(true)
    { 
        cout<<"OP :1 for insert"<<endl;
        cout<<"OP :2 for print"<<endl;
        cout<<"OP :3 for terminate"<<endl;
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
       else{
        break;
       }
    }
    return 0;
}