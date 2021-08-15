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

void moveLastToFront(struct Node **head){

    struct Node *cur=*head;
    Node *prev=NULL;

    while(cur->next!=NULL){
        prev=cur;
        cur=cur->next;
    }

    prev->next=NULL;
    cur->next=*head;
    *head=cur;


}

int main(){
    
    
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(4);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);
    head->next->next->next->next->next->next->next = new Node(8);

    cout<<"linkedlist = ";
    printList(head);

    moveLastToFront(&head);

    cout<<"\nlinkedlist = ";
    printList(head);

    return 0;
}