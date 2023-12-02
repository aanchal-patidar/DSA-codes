//============================================================================
// Name        : deletion_first_last_middle.cpp
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
    //constructor
    Node(int data){
        this-> data =  data;
        this-> next = NULL;
    }
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << "memory is free data : " << value << endl;
    }
};
 void insertAtHead(Node* &head , int d){
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node* &tail , int d){
     Node *temp = new Node(d);
     tail->next = temp;
     tail = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp-> data << " ";
        temp= temp -> next ;
    }
    cout << endl;
}

void insertAtPosition(Node* &tail , Node* &head , int position ,int d ){
    // insert at start
    if(position == 1){
        insertAtHead(head , d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt < position - 1){
        temp = temp-> next;
        cnt++;
    }
    // insert at last position
    if(temp->next == NULL){
        insertAtTail(tail , d);
        return;
    }

    //insert new node at middle
    Node* nodeToInsert = new Node(d);
    nodeToInsert-> next = temp -> next;
    temp->next = nodeToInsert;

}

void deleteNode(int position , Node* &head){
    //deletion of first node
    if(position == 1){
        Node * temp = head;
        head = head->next;
        //memory free start node
        temp->next = NULL;
        delete temp;
    }else{
        //deletion of middle and last position
        Node* current = head;
        Node* previous = NULL;

        int cnt = 1;
        while(cnt < position){
            previous = current;
            current = current->next;
            cnt++;
        }
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}

int main() {

    //creation of new node
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    //cout << node1 -> data << endl;
   // cout << node1 -> next << endl;
   insertAtTail(tail, 20);
   print(head);
   insertAtTail(tail , 30);
   print(head);

   insertAtPosition(tail , head , 3 , 25);
   print(head);

   deleteNode(3, head);
   print(head);
    return 0;
}
