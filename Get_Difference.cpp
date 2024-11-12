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

int main()
{
    Node* head = NULL;
    Node* tail =NULL;
    int v, maxVal = INT_MIN, minVal = INT_MAX;
    while (true) {
        cin >>v;
        if (v == -1) {
            break;
        }
        insert_at_tail(head,tail, v);
        if (v > maxVal) {
            maxVal = v;
        }
        if (v < minVal) {
            minVal = v;
        }
    }

    cout << maxVal - minVal << endl;
    return 0;
}