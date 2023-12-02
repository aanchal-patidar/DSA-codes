//============================================================================
// Name        : insertion_at_head.cpp
// Author      : Aanchal Patidar
// Description : 
//============================================================================

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this-> data =  data;
        this-> next = NULL;
    }
};
void insertAtHead(Node* &head , int d){
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp-> data << " ";
        temp= temp -> next ;
    }
    cout << endl;
}

int main() {

    //creation of new node
    Node *node1 = new Node(10);
    Node *head = node1;
    print(head);
    //cout << node1 -> data << endl;
   // cout << node1 -> next << endl;
   insertAtHead(head , 20);
   print(head);

    return 0;
}
