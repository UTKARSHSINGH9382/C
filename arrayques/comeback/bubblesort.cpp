#include<iostream>
using namespace std;
int main()
{
    int n,i,temp,j,flag;
    cout<<"enter the size of array;";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cout<<"enter the element";
        cin>>a[i];

    }
    for(i=0;i<n-1;i++)
    {
        int flag=0;
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
    if( flag==1)
    {
        printf("swapping is done");
        

    }
    for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
}