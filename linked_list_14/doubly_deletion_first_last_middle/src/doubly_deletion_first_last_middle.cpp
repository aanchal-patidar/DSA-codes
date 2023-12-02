//============================================================================
// Name        : doubly_deletion_first_last_middle.cpp
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
    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory free element :  " << val << endl;
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

void insertAtTail(Node* &tail ,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtPosition(Node* &head , Node * &tail , int position , int d){
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
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;


}
void deleteNode(int position , Node* &head){
    //deletion of first node
    if(position == 1){
        Node * temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;

    }else{
        //deletion of middle and last position
        Node* current = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = current;
            current = current->next;
            cnt++;
        }
       current -> prev = NULL;
       prev ->next = current -> next;
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

   insertAtTail(tail,11);
   print(head);

   insertAtTail(tail,13);
   print(head);
   insertAtTail(tail,15);
   print(head);

   insertAtPosition(head, tail, 2, 100);
   print(head);

   insertAtPosition(head, tail, 4, 104);
   print(head);

   deleteNode(2 , head);
   print(head);
   cout << "head " << head->data << endl;
   cout << "tail " << tail->data << endl;

    return 0;
}
