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
void InsertIndex(int arr[],int size, int position, int value)
{
    for(int i=size-1; i>=position; i--)
    {
        arr[i+1] = arr[i];
    }
    size = size+1;  //if we dont incerease the size then the last element wont be printed.
    arr[position] = value;            
    cout<<"new arr is ";
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
    cout<<"Enter the index in which you want to enter ";
    cin>>position;
    cout<<"Enter the value ";
    cin>>value;
    InsertIndex(arr,n,position,value);
    
return 0;
}