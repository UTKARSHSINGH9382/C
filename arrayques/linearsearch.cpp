#include<iostream>
using namespace std;
int main()
{
    int i,n ,num;
    cout<<"enter the number u want to search";
    cin>>num;
    cout<<"Enter the number of terms in the series: ";
    cin>>n;
    int a[n];
    cout<<"Enter the terms of the series: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
}
for(i=0;i<n;i++)
{
    if(a[i]==num)
    {
        cout<<"element found %d ",i;
    }
}
if(i==n)
{
    cout<<"element not found";
}
}