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
void deletion(int arr[], int size, int position)
{ 
    for(int i=position; i<size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    for(int i=0; i<size-1;i++)
    {
        cout<<arr[i]<<" ,";
    }
}


int main()
{
    int arr[10];
    int n , position;
    cout<<"Enter number of terms ";
    cin>>n;
    input(arr,n);
    cout<<"Enter the index ";
    cin>>position;
    deletion(arr,n,position);
    
    
return 0;
}