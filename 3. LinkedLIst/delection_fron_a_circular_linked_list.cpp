#include <iostream>
using namespace std;

struct Node{

	int data;
	struct Node *next;

	Node(int data){
		this->data = data;
		next = NULL;
	}
}*head=NULL;

void printList(struct Node* head){

	struct Node *p = head;

	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}

void deleteNode(Node **head, int key){

    if(*head==NULL)
    return;

    if((*head)->data==key && (*head)->next==(*head)){
        free(*head);
        head=NULL;
        return ;
    }

    Node *last = *head, *d;

    if((*head)->data==key){

        while(last->next!=*head){
            last=last->next;
        }
        
        last->next=(*head)->next;
        free(*head);
        *head=last->next;
    }

    while(last->next != *head && last->next->data != key){
        last=last->next;
    }

    if(last->next->data==key){

        d=last->next;
        last->next=d->next;
        free(d);

    }
    else cout<<"non such keywfound";
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
    
	cout<<"LinkedList = " ; 
	printList(head);

    deleteNode(&head,1);

	cout<<"\nDelete key = ";
	printList(head);

    return 0;
}