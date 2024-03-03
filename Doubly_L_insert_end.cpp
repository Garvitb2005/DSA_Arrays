//insertion at end in doubly linked list
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};
void insertAtend(Node* &tail,int data)
{
    Node* temp = new Node;
    temp-> data = 20;
    temp ->prev = tail;
    temp -> next = NULL;
    tail -> next = temp;
    tail = temp;
}

void print(Node* head)
{
    Node * temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp ->next;
    }
}

int main()
{
    Node* node1 = new Node;
    node1->data = 10;
    node1->next = NULL;
    node1->prev = NULL;
    Node* head = node1;
    Node* tail = node1;
    insertAtend(tail,20);
    print(head);


return 0;
}