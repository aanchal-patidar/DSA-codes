//============================================================================
// Name        : doubly_insertion_head_and_len.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
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
 void insertAtHead(Node* &head , int d){
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
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
int getLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
       len++;
       temp= temp -> next ;
    }
    return len;
}


int main() {

    //creation of new node
    Node *node1 = new Node(10);
    Node *head = node1;
    print(head);

   insertAtHead(head,11);
   print(head);

   insertAtHead(head,13);
   print(head);

   insertAtHead(head,15);
   print(head);

   cout << "length of the linked list : " << getLength(head) << endl;
    return 0;
}
