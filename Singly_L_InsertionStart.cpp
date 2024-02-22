//Insertion at start
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
 void insertAtHead(Node* &head,int data)
{
    Node* temp = new Node;
    temp ->data = data;
    temp ->next = head;
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
    node1 ->data = 20;

    Node* head = node1;
    insertAtHead(head,10);
    print(head);
    insertAtHead(head,5);
    print(head);

return 0;
}