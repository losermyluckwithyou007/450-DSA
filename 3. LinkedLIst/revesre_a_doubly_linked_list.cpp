#include<bits/stdc++.h>
using namespace std;

struct Node {

    int data;
    Node *next;
    Node *prev;
    Node(int data){
        this->data=data;
        next=NULL;
        prev=NULL;
    }
};

void push(Node **head_Ref, int data){

    Node *new_Node = new Node(data);

    new_Node->prev=NULL;
    new_Node->next=(*head_Ref);

    if((*head_Ref) != NULL)
    (*head_Ref)->prev = new_Node;

    (*head_Ref) = new_Node;

}

Node* reverse(Node **head){

    Node *cur = *head;

    if(cur==NULL && cur->next==NULL) return *head;

    while(cur->next!=NULL) 
            cur=cur->next;

        *head=cur;
        cur->next=cur->prev;
        cur->prev=NULL;
        cur=cur->next;

    while(cur->prev!=NULL){
        Node *tmp = cur->next;
        cur->next = cur->prev;
        cur->prev = tmp;
        cur=cur->next;
    }

    cur->prev=cur->next;
    cur->next=NULL;

    return *head;

}

void printList(Node *node){

    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;
    }
}

int main(){

    Node *head = NULL;
    
    push(&head, 2);
    push(&head, 4);
    push(&head, 8);
    push(&head, 10);

    cout<<"Original linked list = ";
    printList(head);

    head = reverse(&head);

    cout<<"\nReverse linked list = ";
    printList(head);

    return 0;

}