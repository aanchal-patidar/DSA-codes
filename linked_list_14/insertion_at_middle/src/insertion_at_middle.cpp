//============================================================================
// Name        : insertion_at_middle.cpp
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
    return 0;
}
