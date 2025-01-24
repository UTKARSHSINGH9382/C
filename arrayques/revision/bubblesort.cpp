#include<iostream>
using namespace std;
int main()
{
    int i,n,j,temp,flag;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements in the array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    { 
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;

            }
        }
    }
    if(flag==0)
    {
        cout<<"sorrted array";
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}