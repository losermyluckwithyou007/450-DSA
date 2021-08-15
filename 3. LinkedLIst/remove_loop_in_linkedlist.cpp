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

void removeLoop(struct Node *head){

    Node *slow=head;
    Node *fast=head;

        while(slow!=NULL && fast!=NULL && fast!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast) break;
        }

        if(slow==head){

            while(fast->next!=slow){
                fast=fast->next;
            }
            fast->next=NULL;

        }else if(slow==fast){

            slow=head;

            while(slow->next != fast->next){

                slow=slow->next;
                fast=fast->next;
            }
            fast->next=NULL;
        }

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
    if(found) cout<< "\nLoop is detected";
    else cout<<"\nLoop is not detected";

    removeLoop(head);

    bool found1 = detectLoop(head);
    if(found1) cout<< "\nLoop is not removed";
    else cout<<"\nLoop is removed";
    
    return 0;
}