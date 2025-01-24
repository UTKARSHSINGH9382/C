#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the size of array";

    cin>>n;
    int a[n];
    int smallest=INT_MAX;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<smallest)
        smallest=a[i];
    }
    cout<<"smallest element in array is"<<smallest;
}
