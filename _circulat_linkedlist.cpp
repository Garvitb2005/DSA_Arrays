#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtbeginning(Node* &head)
{
    int data;
    cout<<"Enter the data";
    cin>>data;
    Node* n1 = new Node(data);
    if(head == NULL)
    {
        head = n1;
        head->next = head;
    }
    else{
        Node* temp = head;
        while(temp->next!=head)
        {
            temp = temp->next;
        }
        temp->next = n1;
        n1->next = head;
        head = n1;
    }
}
void insertAtposition(Node* &head)
{
    int position,data;
    cout<<"Enter the position";
    cin>>position;
    if(head == NULL)
    {
        cout<<"invalid";
    }
    else if(position == 1)
    {
        insertAtbeginning(head);
    }
    else{
        cout<<"Enter the data";
        cin>>data;
        Node* n1 = new Node(data);
        Node* curr = head;
        Node* prev = NULL;
        for(int i=1; i<position; i++)
        {
            prev = curr;
            curr = curr->next;
        }
        n1->next = prev->next;
        prev->next = n1;
    }
}
void insertAtend(Node* &head)
{
    int data;
    cout<<"Enter the data";
    cin>>data;
    Node* n1 = new Node(data);
    if(head == NULL)
    {
        head = n1;
        head->next = head;
    }
    else{
        Node* temp = head;
        while(temp->next!=head)
        {
            temp = temp->next;
        }
        temp->next = n1;
        n1->next = head;
    }
}
void deletion(Node* &head)
{
    int position;
    cout<<"Enter the position ";
    cin>>position;
    if(head == NULL)
    {
        cout<<"invalid";
    }
    else if(position == 1)
    {
        Node* temp = head;
        head = head->next;
        Node* curr = head;
        while(curr->next!=temp)
        {
            curr = curr->next;
        }
        curr->next = head;
        delete curr;
    }
    else{
        
        Node* curr = head;
        Node* prev = NULL;
        for(int i=1; i<position; i++)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
void print(Node* &head)
{
    if(head == NULL)
    {
        cout<<"invalid";
    }
    else
    {
    Node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    while(temp!=head);
    }
}
int main()
{
int n;
cout<<"Enter the length of linked list";
cin>>n;
Node* head = NULL;
for(int i=0; i<n; i++)
{
    insertAtend(head);
}
print(head);
//insertAtbeginning(head);
deletion(head);
print(head);
return 0;
}