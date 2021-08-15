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

void removeDups(Node *head){

    Node *cur=head;
    Node *nex;
    
    if(cur==NULL) return ;

    while(cur->next!=NULL){

        if(cur->data==cur->next->data) {
            nex=cur->next->next;
            free(cur->next);
            cur->next=nex;
        } else {
            cur=cur->next;
        }
    }

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

    removeDups(head);

    cout<<"\nlinkedlist = ";
    printList(head);

    return 0;
}