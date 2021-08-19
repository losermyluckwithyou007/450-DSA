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

void splitList(Node *head, Node **head1_ref, Node **head2_ref){

    Node *slow = head;
    Node *fast = head;

    while(fast!=NULL && fast->next!=head && fast->next->next != head){
        slow=slow->next;
        fast=fast->next->next;
    }

    *head2_ref = slow->next;
    slow->next = head;
    *head1_ref = head;

    Node *temp = *head2_ref;

    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=*head2_ref;
}

int main(){
    
    
    Node* first = new Node(7);
    first->next = new Node(6);
    first->next->next = new Node(5);
    first->next->next->next = new Node(4);
    first->next->next->next->next = new Node(3);
    first->next->next->next->next->next = new Node(2);
    first->next->next->next->next->next->next=  new Node(1);

    cout<<"list = ";
    printList(first);

    Node *head1_ref=NULL;
    Node *head2_ref=NULL;

    splitList(first, &head1_ref, &head2_ref);

    cout<<"\nFirst halve = ";
    printList(head1_ref);

    cout<<"\nSecond halve = ";
    printList(head2_ref);

    return 0;
}