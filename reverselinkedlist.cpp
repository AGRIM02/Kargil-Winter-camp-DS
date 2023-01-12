<<<<<<< HEAD
// Insert at front of linked list
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void push(Node** head_ref , int new_data){

    Node* new_node = new Node();
    new_node -> data = new_data;
}



void reverse(Node** head_ref){
    Node *temp = NULL;
    Node *prev = NULL;
    Node *current = (*head_ref);
    while(current != NULL) {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    (*head_ref) = prev;
}

void printlist(Node *node){
    while( node != NULL){
        cout<<" "<<node->data;
        node = node -> next;
    }

}



int main(){
    Node* head = NULL;
    push(&head , 7);
    push(&head , 3);
    push(&head , 4);
    push(&head , 5);
    reverse(&head);
    //insertafter(head->next, 8);
    printlist(head);
    return 0;
=======
// Insert at front of linked list
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void push(Node** head_ref , int new_data){

    Node* new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;

}



void reverse(Node** head_ref){
    Node *temp = NULL;
    Node *prev = NULL;
    Node *current = (*head_ref);
    while(current != NULL) {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    (*head_ref) = prev;
}

void printlist(Node *node){
    while( node != NULL){
        cout<<" "<<node->data;
        node = node -> next;
    }

}



int main(){
    Node* head = NULL;
    push(&head , 7);
    push(&head , 3);
    push(&head , 4);
    push(&head , 5);
    reverse(&head);
    //insertafter(head->next, 8);
    printlist(head);
    return 0;
>>>>>>> 3007c734c44bc47b109ba5b8e6836f89553b259a
}