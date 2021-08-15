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

void removeDuplicates(Node *head){

    struct Node *p1, *p2, *dup;
    p1=head;

    while(p1!=NULL && p1->next!=NULL){

        p2=p1;

        while(p2->next!=NULL){

            if(p1->data==p2->next->data){
                dup=p2->next;
                p2->next=p2->next->next;
                delete(dup);
            }else{
                p2=p2->next;
                }
            
        }
        p1=p1->next;
    }
}

void removeDups(Node *head){

        map<int, int>m;
        Node *cur=head;
        m[cur->data]=1;
        Node *prev=cur;
        cur=cur->next;

        while(cur!=NULL){

            if(m[cur->data]){
                prev->next=cur->next;
                free(cur);
            }else{
                m[cur->data]++;
                prev=cur;    
            }
            cur=prev->next;
        }
}

int main(){
    
    Node* head = new Node(10);
    head->next = new Node(12);
    head->next->next = new Node(11);
    head->next->next->next = new Node(11);
    head->next->next->next->next = new Node(12);
    head->next->next->next->next->next = new Node(11);
    head->next->next->next->next->next->next = new Node(10);

    cout<<"Linked list before removing duplicates: ";
    printList(head);

    // removeDups(head);
    removeDuplicates(head);

    cout<<"\nLinked list after removing duplicates:";
    printList(head);

    return 0;
}