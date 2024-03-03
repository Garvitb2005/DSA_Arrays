#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};
void deletion(Node* &head, int position)
{
    if(position==1)
    {
    Node* temp = head;
    head = temp->next;
    temp->next->prev = NULL;
    temp->next = NULL;
    delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        for(int i=1; i<position;i++)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr ->next = NULL;
        curr -> prev = NULL;
        delete curr;
    }
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
    deletion(head,2);
    print(head);
return 0;
}