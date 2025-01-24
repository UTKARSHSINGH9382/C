#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    {
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
        
    }
    cout<<"Sorted array: ";
    {
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
}