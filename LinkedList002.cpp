#include<iostream>
using namespace std;

class Node{ // first create a class node where you can store the data and address next data.
    public:
        int data;       // to store data
        Node* next;     // to store the address
};

void printList(Node* n){
    while(n != NULL){       // condition where n is not equal to null, it will print the data

        cout << n->data << endl; //to print the data
        n = n->next;        // to update condition here in while loop
    }

}

void insertAtFront(Node** head, int newHeadData){
    Node* newHeadNode = new Node();     // create a new head node
    newHeadNode->data = newHeadData;
    newHeadNode->next = *head;      // put it in front of current headnode
    *head = newHeadNode;
}

void insertAtEnd(Node** tail, int newTailData){
    Node* newTailNode = new Node();
    newTailNode->data = newTailData;    
    newTailNode->next = NULL;
    if (*tail == NULL){            // if empty
        *tail = newTailNode;       // it will become the head or the only node in linkedlist
        return;
    }
    Node* last = *tail;
    while (last->next != NULL ){    // to find the last node where it is pointing to null
        last = last->next;
    }
    last->next = newTailNode;
}

void insertAfter(Node* before, int newData){
    if (before == NULL){            // I need a valid element
        cout << "Cannot be Null";
        return;
    }
    Node* newNode = new Node();
    newNode->data = newData;

    newNode->next = before->next;
    before->next = newNode;
}

int main(){
system("cls");
    
    Node* head = new Node();    // creating a pointer Node 
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;         // storing to the data of head element
    head->next = second;    // storing address of the next element

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;     // pointing to NULL cause there is no next element.


    insertAtFront(&head, 5);
    insertAtFront(&head, 20);
    insertAtEnd(&head, 46);
    insertAfter(second, 33);  
    printList(head);
    

    return 0;
}