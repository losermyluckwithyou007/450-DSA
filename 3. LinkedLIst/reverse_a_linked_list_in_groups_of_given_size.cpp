#include <bits/stdc++.h>
using namespace std;

struct Node {

    int data;
    struct Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

void printList(struct Node *head){

    struct Node *p = head;

    while(p){

        cout<<p->data<<" ";
        p=p->next;
    }
}

Node *reverse(struct Node *head, int k){

    struct Node *cur = head;
    struct Node *nex;
    struct Node *prev = NULL;
    int c=0;

    while(cur!=NULL && c<k){

        nex=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nex;
        c++;
    }

    if(nex!=NULL) head->next= reverse(nex, k);

    return prev;

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

    cout<< " LinkedList = " ;
    printList(head);

    cout<<" \nReverse in k group = ";
    head = reverse(head,3);
    printList(head);

    return 0;
}