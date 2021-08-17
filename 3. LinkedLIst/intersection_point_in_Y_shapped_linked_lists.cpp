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

int intersectionPoint(struct Node *first ,struct Node *second){

    Node *ptr1 = first;
    Node *ptr2 = second;
    int c1=0;
    int c2=0;

    while(ptr1){
        c1++;
        ptr1=ptr1->next;
    }
    while(ptr2){
        c2++;
        ptr2=ptr2->next;
    }

    ptr1=first;
    ptr2=second;

    int dif = abs(c1 - c2);

    if(c1>c2){
        for(int i=0;i<dif;i++) ptr1=ptr1->next;
    }else if(c1<c2){
        for(int i=0;i<dif;i++) ptr2=ptr2->next;
    }
    
    while(ptr1!=ptr2){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    if(ptr1) return ptr1->data;
    return -1;


}

int main(){
    
    
    Node* first = new Node(1);
    first->next = new Node(2);
    first->next->next = new Node(3);
    first->next->next->next = new Node(4);
    first->next->next->next->next = new Node(5);
    first->next->next->next->next->next = new Node(6);
    first->next->next->next->next->next->next = new Node(7);
    
    Node* second = new Node(10);
    second->next = new Node(9);
    second->next->next = new Node(8);
    second->next->next->next = first->next->next->next;

    cout<<"list-1 = ";
    printList(first);

    cout<<"\nlist-2 = ";
    printList(second);

    cout<<"\nIntersection point is "<<intersectionPoint(first ,second);

    return 0;
}