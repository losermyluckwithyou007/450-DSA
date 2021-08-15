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

bool detectLoop(struct Node* head){

    struct Node *slow=head, *fast=head;

    while(fast && fast->next!=NULL){

        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast) return 1;
    }

    return 0;
}

int main(){
    
    
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);
    head->next->next->next->next->next->next->next = new Node(8);

    head->next->next->next->next->next = head->next->next;

    bool found = detectLoop(head);
    if(found) cout<< "Loop is detected";
    else cout<<"Loop is not detected";
    
    return 0;
}