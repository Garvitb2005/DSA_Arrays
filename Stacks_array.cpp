#include<iostream>
using namespace std;
class Stack{
    public:
    int size;
    int top;
    int* arr;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top=-1;

    }
    void push(int element)
    {
        if(size-top>1)
        {
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack overflow";
        }
    }

    int pop()
    {
        if(top>=0)
        {
            return arr[top--];
        }
        else{
            cout<<"Stack underflow";
            return -1;
        }
    }

    int peek()
    {
        if(top>=0)
        {
            return arr[top];
        }
        else{
            cout<<"Stack is empty";
            return -1;
        }
    }
    bool isempty()
    {
        if(top==-1)
        {
            return true;
        }
        else{
            return false;
        }
    }
    void reverseArr(int arr[], int size)
    {
        for(int i=0; i<size; i++)
        {
            push(arr[i]);
        }
        for(int i=0; i<size; i++)
        {
            arr[i] = pop();
        }
    }

    
};
int main()
{  
    
//    // st.peek();
//     st.push(7);
//     cout<<st.peek()<<endl;
//     st.push(9);
//     cout<<st.peek()<<endl;
//     st.pop();
//     cout<<st.peek()<<endl;
    int n;
    cout<<"Enter size";
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
{
    cin>>arr[i];
}
for(int i=0; i<n;i++)
{
    cout<<arr[i]<<" ,";
}
cout<<endl;
Stack st(n);
st.reverseArr(arr,n);
for(int i=0; i<n;i++)
{
    cout<<arr[i]<<" ,";
}
return 0;
}