#include<bits/stdc++.h>
using namespace std;

struct Node {

    int data;
    Node *next, *prev;
};

void insert(Node **head_Ref, int data){

    Node *tmp = new Node;

    tmp->data=data;
    tmp->next=tmp->prev=NULL;

    if((*head_Ref)==NULL)
        *head_Ref=tmp;
    else {
        tmp->next=*head_Ref;
        (*head_Ref)->prev=tmp;
        (*head_Ref)=tmp;
    }
}

void printList(Node *head){

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

void triplets(Node *head, int x){

    Node *ptr1, *ptr2, *ptr3;
    int count=0;

    for(ptr1=head;ptr1!=NULL;ptr1=ptr1->next){
        for(ptr2=ptr1->next;ptr2!=NULL;ptr2=ptr2->next){
            for(ptr3=ptr2->next;ptr3!=NULL;ptr3=ptr3->next){

                if((ptr1->data + ptr2->data + ptr3->data) == x) count++;
            }
        }
    }

    cout<<"\ncount = "<<count;

}

int countPairs(Node *first, Node *second, int value){

    int count = 0;

    while(first!=NULL && second!=NULL && first!=second && second->next!=first){

        if((first->data + second->data) == value ){

            count++;

            first = first->next;
            second = second->prev;
        }
        else if((first->data + second->data) > value){

            second = second->prev;
        }else {

            first = first->next;
        }
    }

    return count;
}

int countTriplets(Node *head, int x){

    if(head == NULL)
        return 0;

    Node *cur, *first, *last;
    int count = 0;

    last=head;
    while(last->next!=NULL){
        last=last->next;
    }

    for(cur=head; cur!=NULL; cur=cur->next){

        first = cur->next;

        count += countPairs(first, last, x - cur->data);
    }

    return count;
}

int main(){

    Node *head = NULL;

    insert(&head, 9);
    insert(&head, 8);
    insert(&head, 6);
    insert(&head, 5);
    insert(&head, 4);
    insert(&head, 2);
    insert(&head, 1);
    int x = 17;

    cout<<"Original linked list = ";
    printList(head);

    // triplets(head, x);

    cout<<"count = " << countTriplets(head, x);

    return 0;
}