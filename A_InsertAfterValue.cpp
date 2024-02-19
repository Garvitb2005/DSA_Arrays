//inserting after the mention value
#include<iostream>
using namespace std;
int find(int arr[], int size, int valuee)
{   
    int a;
    for(int i =0; i<size; i++)
    {
        if(arr[i]==valuee)
        {
            return i;
        }
    }
}

void InsertValue(int arr[], int size, int value, int valuee)
{
    for(int i = size-1; i>=valuee; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[valuee+1] = value;
    for(int i=0; i<size+1; i++)
    {
        cout<<arr[i]<<" ,";
    }
}
int main()
{
int arr[10];
int n,value,valuee,a;
cout<<"Enter no of terms ";
cin>>n;
for(int i=0; i<n;i++)
{
    cin>>arr[i];
}
for(int i=0; i<n;i++)
{
    cout<<arr[i]<<" ,";
}
cout<<"Enter the value ";
cin>>value;
cout<<"Enter the valuee";
cin>>valuee;
a = find(arr,n,valuee);
InsertValue(arr,n,value,a);
return 0;
}