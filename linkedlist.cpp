#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int value){
            data = value;
            next = nullptr;
        }
};

class LinkedList{
    public:
        Node* head;
        Node* tail;

        LinkedList(){
            head = nullptr;
            tail = nullptr;
        }
        void append(Node* newNode){
            if(head == nullptr){
                head = newNode;
                return;
            }

        }
};

int main(){
    system("cls");

    Node nodeA(9);
    Node nodeB(14);

    nodeA.next = &nodeB;
    cout << nodeA.data; // to see the data of first node
    cout << "\n";
    cout << nodeA.next; // to see the address of next data of node
    cout << "\n";
    cout << nodeA.next->data; // to point to the data using the address


    
    return 0;
}
