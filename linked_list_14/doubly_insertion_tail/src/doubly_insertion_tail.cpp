//============================================================================
// Name        : doubly_insertion_tail.cpp
// Author      : Aanchal Patidar
// Description : 
//============================================================================

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    //constructor
    Node(int data){
        this-> data =  data;
        this-> next = NULL;
        this-> prev = NULL;
    }

};


void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp-> data << " ";
        temp= temp -> next ;
    }
    cout << endl;
}

void insertAtTail(Node* &tail ,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}


int main() {

    //creation of new node
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);

   insertAtTail(tail,11);
   print(head);

   insertAtTail(tail,13);
   print(head);
   insertAtTail(tail,15);
   print(head);


    return 0;
}
