//============================================================================
// Name        : doubly_insertion_at_middle.cpp
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
 void insertAtHead(Node* &head, Node* &tail , int d){

	if(head == NULL){
		Node* temp = new Node(d);
		head = temp;
		tail = temp;
	}else{
		Node *temp = new Node(d);
		temp->next = head;
		head->prev = temp;
		head = temp;
	}
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp-> data << " ";
        temp= temp -> next ;
    }
    cout << endl;
}

void insertAtTail(Node* &head ,Node* &tail ,int d){

	if(head == NULL){
		//linked list empty
		Node* temp = new Node(d);
		head = temp;
		tail = temp;
	}else{
		Node* temp = new Node(d);
		tail->next = temp;
		temp->prev = tail;
		tail = temp;
	}
}
void insertAtPosition(Node* &head , Node * &tail , int position , int d){
    // insert at start
    if(position == 1){
        insertAtHead(head ,tail, d);
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
        insertAtTail(head ,tail , d);
        return;
    }
    //insert new node at middle
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;


}
int main() {

    //creation of new node
   /* Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    */
	Node *head = NULL;
	Node *tail = NULL;
    print(head);

   insertAtTail(head,tail,11);
   print(head);

   insertAtTail(head ,tail,13);
   print(head);

   insertAtTail(head ,tail,15);
   print(head);

   insertAtPosition(head, tail, 2, 100);
   print(head);

   insertAtPosition(head, tail, 4, 104);
   print(head);

    return 0;
}
