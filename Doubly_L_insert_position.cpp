#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};
void insertAtPosition(Node* &head,int data,int position)
{
    Node* temp = head;
    for(int i=1; i<position-1;i++)
    {
        temp = temp->next;
    }
    Node* nodetoinsert = new Node;
    nodetoinsert -> data = data;
    nodetoinsert -> next = temp->next;
    nodetoinsert ->prev = temp;
    temp->next = nodetoinsert;
}
void print(Node* &head)
{
    Node* temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    Node* node1 = new Node;
    node1->data = 10;
    node1->prev = NULL;
    node1->next = NULL;

    Node* node2 = new Node;
    node1 ->next = node2;
    node2->data = 20;
    node2->prev = node1;
    node2->next = NULL;

    Node* node3 = new Node;
    node2 -> next = node3;
    node3->data = 30;
    node3->prev = node2;
    node3->next = NULL;

    Node* node4 = new Node;
    node3 -> next = node4;
    node4->data = 40;
    node4->prev = node3;
    node4->next = NULL;

    Node* head = node1;
    print(head);
    cout<<endl;
    insertAtPosition(head,35,4);
    print(head);
    cout<<endl;
    insertAtPosition(head,39,5);
    print(head);
    cout<<endl;
    insertAtPosition(head,25,3);
    print(head);



return 0;
}