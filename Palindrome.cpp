#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insert(Node *&head,Node*&tail,int val)
{
    Node * newNode=new Node(val);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}

bool isPalindrome(Node* head) {
    if (head == NULL) return true;

    Node* end = head;
    while (end->next != NULL) {
        end = end->next;
    }
    while (head != end && head->prev != end) {
        if (head->data != end->data) {
            return false;
        }
        head = head->next;
        end = end->prev;
    }
    return true;
}

int main() {
    Node * head=NULL;
    Node * tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert(head,tail,val);
    }
     if (isPalindrome(head)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}