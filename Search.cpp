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

int searchNode(Node* head, int x) {
    int index = 0;
    while (head != NULL) {
        if (head->val == x) {
            return index;
        }
        index++;
        head = head->next;
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        Node* head = NULL;
        Node* tail=NULL;
        int v;
        while (true) {
            cin >>v;
            if (v== -1) {
                break;
            }
            insert_at_tail(head,tail,v);
        }
        int x;
        cin >> x;
        cout << searchNode(head, x) << endl;
    }
    return 0;
}