#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *p;
    p=arr;
    cout<<"The elements of the array are: ";
    for(i=0;i<n;i++)
    {
        cout<<*(p+i)<<" ";
    }
      
     
  
}