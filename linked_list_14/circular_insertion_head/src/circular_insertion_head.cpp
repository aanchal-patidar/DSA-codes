//============================================================================
// Name        : circular_insertion_head.cpp
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
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    ~Node(){
        int value = this-> data;
        if(this-> next != NULL){
            delete next;
            next = NULL;

        }
        cout << "memory is free for the node " << value << endl;
    }
};

void insertNode(Node* tail , int element, int d){
    // if linked list is empty
    if(tail == NULL){
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }else{
        // non-empty list
        // when assuming element is present in the list
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        // element found -> curr representing element vala node
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }

}
void print(Node* tail){
    Node* temp = tail;
    do{
        cout << tail->data << " ";
        tail = tail->next ;
    }while(tail != temp);
}

int main() {
    Node* tail = NULL;
    insertNode(tail , 5 , 3);
    print(tail);

    return 0;
}
