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

void insert_at_tail(Node* &head, Node * &tail,int val)
{
    Node * newNode= new Node(val);
    if(head == NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
    
}

bool Same(Node* head1, Node* head2) {
    while (head1 != NULL && head2 != NULL) {
        if (head1->val != head2->val) {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if (head1 !=NULL || head2 !=NULL) {
        return false;
    }
    return true;
}

int main()
{
    Node* head1 = NULL;
    Node* head2 = NULL;
    Node* tail= NULL;
       int v;
    while (true) {
        cin >>v;
        if (v == -1) {
            break;
        }
        insert_at_tail(head1,tail,v);
    }
    while (true) {
        cin >> v;
        if (v == -1) {
            break;
        }
        insert_at_tail(head2,tail,v);
    }
    if (Same(head1, head2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}