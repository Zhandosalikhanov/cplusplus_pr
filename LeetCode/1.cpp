#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
};

void printList(Node* n)
{
    while (n != NULL)
    {
        cout << n -> data << " -> ";
        n = n -> next;
    }
    cout << "NULL" << endl << endl;
    
}

void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}

void InsertAfter(Node* prev_node, int new_data)
{
    if(prev_node == NULL)
    {
        throw "Previous node cannot be NULL";
        return;
    }

    Node* new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = prev_node -> next;
    prev_node -> next = new_node;
}

void append(Node** head_ref, int new_data)
{
    Node* new_node = new Node();

    Node *last = *head_ref;
    
    new_node -> data = new_data;
    
    new_node -> next = NULL;
    
    if(*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last -> next != NULL)
        last = last -> next;
    
    last -> next = new_node;
    return; 
    
}

int main()
{
    Node* head = NULL;

    cout << endl << "Appending numbers from 0 to 9 to the linked list:" << endl;
    for (size_t i = 0; i < 10; i++)
        append(&head, i);

    printList(head);

    cout << "Pushing number from -9 to -1 to the linked list:" << endl;
    for (size_t i = 1; i < 10; i++)
        push(&head, -i);
    
    printList(head);

    cout << "Inserting number after -8:" << endl;
    InsertAfter(head->next, -999);
    printList(head);
}