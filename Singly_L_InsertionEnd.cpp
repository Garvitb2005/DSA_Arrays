//insertion at end
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void insertionAtEnd(Node* &tail,int data)
{
    Node* temp = new Node;
    temp-> data = data;
    tail-> next = temp;
    tail = temp;
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

    Node* head = node1;
    Node* tail = node1;
    insertionAtEnd(tail,20);
    print(head);
return 0;
}