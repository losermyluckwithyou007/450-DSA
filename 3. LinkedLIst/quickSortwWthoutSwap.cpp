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

Node *getTail(Node *cur){

    while(cur != NULL && cur->next!=NULL){
        cur=cur->next;
    }
    return cur;
}

Node *partition(Node *head, Node *end, Node **newHead, Node **newEnd){

    Node *prev = NULL;
    Node *cur = head;
    Node *pivot = end,*tail = pivot;

    while(cur!=pivot){

        if(cur->data < pivot->data){
            
            if((*newHead)==NULL)
                (*newHead) = cur;

            prev=cur;
            cur=cur->next;    
        }
        else{
            
            if(prev)
                prev->next = cur->next;

            Node* temp = cur->next;
            cur->next=NULL;
            tail->next=cur;
            tail=cur;
            cur=temp;    
        }
    }

    if((*newHead) == NULL)
        (*newHead) = pivot;
    
    (*newEnd) = tail;

    return pivot;

}

Node *quickSortRec(Node *head, Node *end){

    if( !head || head==end)
    return head;

    Node *newHead = NULL, *newEnd=NULL;

    Node *pivot = partition(head, end, &newHead, &newEnd);

    if(newHead != pivot){

        Node *temp = newHead;
        while(temp->next != pivot)
            temp = temp->next;

        temp->next=NULL;

        newHead = quickSortRec(newHead, temp);

        temp = getTail(newHead);
        temp->next= pivot;    
    }

    pivot->next = quickSortRec(pivot->next, newEnd);

    return newHead;
}

void quickSort(Node **headRef){

    *headRef = quickSortRec(*headRef, getTail(*headRef));

    return ;

}

int main(){
    
    
    Node* first = new Node(7);
    first->next = new Node(6);
    first->next->next = new Node(5);
    first->next->next->next = new Node(4);
    first->next->next->next->next = new Node(3);
    first->next->next->next->next->next = new Node(2);
    first->next->next->next->next->next->next = new Node(1);

    cout<<"list = ";
    printList(first);

    cout<<"\nQuickSort = ";

    quickSort(&first);
    printList(first);

    return 0;
}