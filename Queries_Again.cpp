#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
        Node* prev;

    Node(int val) {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if(head == NULL) {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}

void insert_at_head(Node* &head,Node* &tail,int val) {
     Node* newNode = new Node(val);
    if(head == NULL) {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}

int size(Node* head) {
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void insert_at_position(Node* head,int pos,int val) {
    Node* newNode = new Node(val);
    Node* tmp = head;
    for( int i=1;i<=pos-1;i++) {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=tmp;
}

void printLeftToRight(Node* head) {
    Node* current = head;
    cout<<"L -> ";
    while(current != NULL) {
        cout<<current->val<<" ";
        current = current->next;
    }
    cout<<endl;
}

void printRightToLeft(Node* tail) {
    Node* current = tail;
    cout<<"R -> ";
    while(current != NULL) {
        cout<<current->val<<" ";
        current = current->prev;
    }
    cout<<endl;
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin>>q;

    while(q--) {
        int x,value;
        cin>>x>>value;
        if(x > size(head)) {
            cout<<"Invalid"<<endl;
        }else if(x == 0) {
            insert_at_head(head,tail,value);
        }else if(x == size(head)) {
            insert_at_tail(head,tail,value);
        }else {
            insert_at_position(head,x,value);
        }
        if(x > size(head)) continue;
        else {
            printLeftToRight(head);
            printRightToLeft(tail);
        }
    }

    return 0;
}