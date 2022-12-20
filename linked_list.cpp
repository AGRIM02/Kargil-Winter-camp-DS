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



// void insertafter(Node* prev_node , int new_data){
//     if(prev_node == NULL){
//         cout<<"Prev node cant be null";
//         return;
//     }
    
//     Node* new_node = new Node();
//     new_node -> data = new_data;
//     new_node -> next = prev_node -> next;
//     prev_node -> next = new_node;

// }

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
    //insertafter(head->next, 8);
    printlist(head);
    return 0;
}