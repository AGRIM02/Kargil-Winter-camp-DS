<<<<<<< HEAD
// Insert at front of Double linked list
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

void push(Node** head_ref , int new_data){
    Node* new_node = new Node();
    new_node -> data = new_data;

    new_node -> next = (*head_ref);
    new_node -> prev = NULL;

    if ((*head_ref) != NULL){
        (*head_ref) -> prev = new_node;
    }

    (*head_ref) = new_node;
}

int main(){
  return 0;
=======
// Insert at front of Double linked list
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

void push(Node** head_ref , int new_data){
    Node* new_node = new Node();
    new_node -> data = new_data;

    new_node -> next = (*head_ref);
    new_node -> prev = NULL;

    if ((*head_ref) != NULL){
        (*head_ref) -> prev = new_node;
    }

    (*head_ref) = new_node;
}

int main(){
  return 0;
>>>>>>> 3007c734c44bc47b109ba5b8e6836f89553b259a
}