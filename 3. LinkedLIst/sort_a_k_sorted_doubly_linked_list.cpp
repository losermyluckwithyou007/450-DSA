#include<bits/stdc++.h>
using namespace std;

struct Node {

    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data=data;
        next=NULL;
        prev=NULL;
    }
};

void insert(Node **head, int data){

    Node *tmp = new Node(data);
    
    tmp->next=tmp->prev=NULL;

    if(!(*head)){
        (*head)=tmp;
    }
    else {
        tmp->next= *head;
        (*head)->prev=tmp;
        (*head)=tmp;
    }

}

void printList(Node *head){

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node *sort_K_sortedDLL(Node *head, int k){

    if(head == NULL || (head)->next == NULL)
        return head;

    for(Node *i=head->next; i!=NULL; i = i->next){
        Node *j=i;

        while(j->prev != NULL && j->data < j->prev->data) {

            Node *tmp = j->prev->prev;
            Node *tmp2 = j->prev;
            Node *tmp3 = j->next;

            j->prev->next = tmp3;
            j->prev->prev = j;
            j->prev = tmp;
            j->next = tmp2;

            if(tmp!=NULL)
                tmp->next = j;

            if(tmp3!=NULL)
            tmp3->next=tmp2;    
        }

        if(j->prev == NULL)
            head = j;
    }  

    return head;
}

int main(){

    Node *head = NULL;

    insert(&head, 8);
    insert(&head, 56);
    insert(&head, 12);
    insert(&head, 2);
    insert(&head, 6);
    insert(&head, 3);
    int k = 2;

    cout<<"Original DLL = ";
    printList(head);

    head = sort_K_sortedDLL(head, k);

    cout<<"K sorted DDL = ";
    printList(head);

    return 0;
}