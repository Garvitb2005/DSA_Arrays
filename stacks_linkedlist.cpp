
//REVERSE A STACK USING LINKED LIST


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class RevLinkedListStack {
private:
    Node* top;

public:
    RevLinkedListStack() {
        top = nullptr;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void push(int item) {
        Node* newNode = new Node(item);
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Underflow\n";
            return -1; 
        }

        Node* temp = top;
        int poppedItem = temp->data;
        top = top->next;
        delete temp;

        return poppedItem;
    }

    void reverseStack() {
        Node* prev = nullptr;
        Node* current = top;
        Node* nextNode = nullptr;

        while (current != nullptr) {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }

        top = prev;
    }
};

int main() { 
    RevLinkedListStack revStack;

    int numValues;
    cout << "Enter the number of values for the stack: ";
    cin >> numValues;

    cout << "Enter the values for the stack:\n";
    for (int i = 0; i < numValues; ++i) {
        int value;
        cin >> value;
        revStack.push(value);
    }

    revStack.reverseStack();

    cout << "Reversed Stack Values:\n";
    while (!revStack.isEmpty()) {
        cout << revStack.pop() << " ";
    }

    return 0;
}