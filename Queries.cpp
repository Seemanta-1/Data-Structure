#include <bits/stdc++.h>
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

void insert_at_head(Node *&head,int v)
{
    Node * newNode=new Node(v);
    newNode->next=head;
    head=newNode;
}

void insert_at_tail(Node* &head, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void delete_from_Index(Node* &head, int index) {
    if (head == NULL) {
        return;
    }
    Node* temp = head;
    if (index == 0) {
        head = temp->next;
        delete temp;
        return;
    }
    for (int i = 0; temp != NULL && i < index - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        return;
    }
    Node* next = temp->next->next;
    delete temp->next;
    temp->next = next;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int q;
    cin >> q;
    Node* head = NULL;
    while (q--) {
        int x, v;
        cin >> x >> v;
        if (x == 0) {
            insert_at_head(head, v);
        } else if (x == 1) {
            insert_at_tail(head, v);
        } else if (x == 2) {
            delete_from_Index(head, v);
        }
        printList(head);
    }
    return 0;
}



/*#include<bits/stdc++.h>
using namespace std;




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

/*void delete_from_position(Node* head,int pos)
{
    Node * tmp=head;
    if(head==NULL) return;
    if(pos==0)
    {
        head = tmp->next;
        delete tmp;
        return;
    }
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    Node * deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
}
void delete_from_position(Node* &head, int index) {
    if (head == NULL) {
        return;
    }
    Node* temp = head;
    if (index == 0) {
        head = temp->next;
        delete temp;
        return;
    }
    for (int i = 0; temp != NULL && i < index - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        return;
    }
    Node* next = temp->next->next;
    delete temp->next;
    temp->next = next;
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
int main()
{
  // int q;
    //cin >> q;
    Node* head = NULL;
    Node* tail = NULL;
    //while (q--) {
        int x, v;
        cin >> x >> v;
        if (x == 0) {
            insert_at_head(head, v);
        } else if (x == 1) {
            insert_at_tail(head,tail, v);
        } else if (x == 2) {
            delete_from_position(head, v);
        }
        print(head);
   // }
    return 0;
}*/