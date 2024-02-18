#include<iostream>
using namespace std;
//function for taking arr input
void input(int arr[], int size)
{
    cout<<"Input arr elements";
    for(int i =0; i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i =0; i<size;i++)
    {
        cout<<arr[i]<<" ,";
    }
}
void InsertEnd(int arr[], int size, int value)
{
    arr[size] = value;
    size+=1;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ,";
    }
}

int main()
{
    int arr[10];
    int n , position , value;
    cout<<"Enter number of terms ";
    cin>>n;
    input(arr,n);
    cout<<"Enter the value ";
    cin>>value;
    InsertEnd(arr,n,value);
    
return 0;
}