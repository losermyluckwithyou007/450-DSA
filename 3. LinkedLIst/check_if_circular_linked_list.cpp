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

bool isCircular(Node *head){

    Node *cur = head;

    while(cur!=NULL){
        cur=cur->next;
        if(cur==head){
            return 1;
        }
    }
    return 0;
}

int main(){
    
    
    Node* first = new Node(7);
    first->next = new Node(6);
    first->next->next = new Node(5);
    first->next->next->next = new Node(4);
    first->next->next->next->next = new Node(3);
    first->next->next->next->next->next = new Node(2);
    first->next->next->next->next->next->next = new Node(1);

    cout<<"\nlist = ";
    printList(first);

    isCircular(first)? cout<<"Yes\n":cout<<"No\n";

    cout<<"\nMalking List Circular :\n";

    first->next->next->next->next->next->next->next = first;

    isCircular(first)? cout<<"Yes\n":cout<<"No\n";

    return 0;
}