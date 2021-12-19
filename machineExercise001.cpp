#include<iostream>
using namespace std;

class Node{ // first create a class node where you can store the data and address next data.
    public:
        int data;       // to store data
        Node* next;     // to store the address
};

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
void printList(Node* n){
    while(n != NULL){       // condition where n is not equal to null, it will print the data

        cout << n->data << " "; //to print the data
        n = n->next;        // to update condition here in while loop
    }

}
void deleteNode(Node** head_ref, int key)
{
	
	// Store head node
	Node* temp = *head_ref;
	Node* prev = NULL;
	
	// If head node itself holds
	// the key to be deleted
	if (temp != NULL && temp->data == key)
	{
		*head_ref = temp->next; // Changed head
		delete temp;		 // free old head
		return;
	}

	// Else Search for the key to be deleted,
	// keep track of the previous node as we
	// need to change 'prev->next' */
	else
	{
	while (temp != NULL && temp->data != key)
	{
		prev = temp;
		temp = temp->next;
	}

	// If key was not present in linked list
	if (temp == NULL)
		return;

	// Unlink the node from linked list
	prev->next = temp->next;

	// Free memory
	delete temp;
	}
}
int main(){
system("cls");

    Node* head = new Node();
    head->data = 0;   
    int userinput, del;
    cout << "Enter numbers ending with -999.\n";
    for (int i = 0; i < 10; i++){
        cin >> userinput;
        insertAtEnd(&head, userinput);
    }
    deleteNode(&head, 0);
    cout << "list1: ";
    printList(head);
    cout << endl;
    cout << "list2: ";
    printList(head);

    cout << "\nEnter the number to be deleted: ";
    cin >> del;
    deleteNode(&head, del);
    cout << "After deleting " << del ;
    cout << " list2: \n";
    printList(head);
    return 0;
}