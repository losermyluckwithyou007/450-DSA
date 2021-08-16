#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

void printList(struct Node *head){

    struct Node *p = head;

    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

Node *reverse(struct Node *head){

    struct Node *cur = head;
    Node *nex;
    Node *prev=NULL;

    while(cur!=NULL){
        nex=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nex;
    }
    head = prev;

    return head;
}

void addOne(struct Node *head){

    head = reverse(head);

    struct Node *cur=head;

    while(cur!=NULL){

        if(cur->next==NULL && cur->data==9) {
            cur->data=1;
            Node *temp = new Node(0);
            temp->next=head;
            head=temp;
            cur->next;
            

        }else if(cur->data==9) {
            cur->data=0;
            cur=cur->next;
        }else {
                cur->data=cur->data+1;
                cur=cur->next;
                break;
        }
    }

    reverse(head);
    
}

int main(){
    
    
    Node* head = new Node(9);
    head->next = new Node(9);
    head->next->next = new Node(9);
    head->next->next->next = new Node(9);
    head->next->next->next->next = new Node(9);
    head->next->next->next->next->next = new Node(9);
    head->next->next->next->next->next->next = new Node(9);
    head->next->next->next->next->next->next->next = new Node(9);

    cout<<"linkedlist = ";
    printList(head);

    cout<<"\nlinkedlist = ";
    addOne(head);
    printList(head);

    return 0;
}