#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};
void insertAtHead(Node* &head, int data)
{
    Node* temp = new Node;
    temp -> data = data;
    temp ->next = head;
    temp -> prev = NULL;
    head -> prev = temp;
    head = temp;
}
void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    Node* node1 = new Node;
    node1 -> data = 10;
    node1 -> next = NULL;
    node1 -> prev = NULL;

    Node* head = node1;
    insertAtHead(head,5);
    insertAtHead(head,1);
    print(head);
return 0;
}