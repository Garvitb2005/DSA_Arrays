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
void InsertBeginning(int arr[], int size, int value)
{
    for (int i=size-1; i>=0; i--)
    {
        arr[i+1] = arr[i];
    }
    size +=1;
    arr[0] = value;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ,";
    }

}



int main()
{
    int arr[10];
    int n ,value;
    cout<<"Enter number of terms ";
    cin>>n;
    input(arr,n);
    cout<<"Enter the value ";
    cin>>value;
    InsertBeginning(arr,n,69);
    
return 0;
}