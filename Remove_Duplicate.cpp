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

void removeDuplicates(Node* &head) {
    Node* current = head;
    while (current != NULL) {
        Node* runner = current;
        while (runner->next != NULL) {
            if (runner->next->val == current->val) {
                Node* temp = runner->next;
                runner->next = runner->next->next;
                delete temp;
            } else {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail =NULL;
    int v;
    while (true) {
        cin >>v;
        if (v == -1) {
            break;
        }
        insert_at_tail(head,tail,v);
    }
    removeDuplicates(head);
    printList(head);
    return 0;
}