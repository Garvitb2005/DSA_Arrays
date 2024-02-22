//Inserting at the specified index
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void insertAtPosition(Node* head, int position, int data)
{
    Node* temp = head;
    /*in this loop we are traversing for store the pointer value of the position 
    which is before the inserting position so that we can break and point to new linklist*/ 
    for(int i = 1; i<position-1; i++)
    {
        temp = temp->next;
    }
    Node* nodetoinsert = new Node;
    nodetoinsert->data = data;
    /*new linklist ka pointer pointing to the next linklist 
    basically we are taking help of loop as previous list 
    already have the location before inserting*/
    nodetoinsert-> next = temp->next;
    //and here previous list ka pointer location change karke new list pe de rhe
    temp->next = nodetoinsert;
}
void print(Node* &head)
{
    Node* temp =head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{

    Node* node1 = new Node;
    node1->data = 10;
    node1->next = NULL;

    Node* node2 = new Node;
    node1->next = node2;
    node2->data = 20;
    node2->next = NULL;

    Node* node3 = new Node;
    node2->next = node3;
    node3->data = 30;
    node3->next = NULL;

    Node* node4 = new Node;
    node3-> next = node4;
    node4->data = 40;
    node4->next = NULL;

    Node* node5 = new Node;
    node4-> next = node5;
    node5->data = 50;
    node5->next = NULL;
    Node* head = node1;

    insertAtPosition(head,4,35);
    print(head);
    
    


return 0;
}