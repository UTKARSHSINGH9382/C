#include<iostream>
using namespace std;
int f(int a[],int n,int num)
{

   for( int i=0;i<n;i++)
   {
    if(a[i]==num)
    {
      cout<<"element found at index "<<i;
      return i;
    }
    if(i==n)
    {
        cout<<"element not found";
        return -1;
    }
   }
}
int main()
{
   int i,n,num;
   cout<<"Enter the number of elements in the array"<<endl;
   cin>>n;
   int a[n];
   cout<<"Enter the searching element "<<endl;
   cin>>num;
   for(i=0;i<n;i++)
   {
    cout<<"Enter the element "<<i+1<<endl;
    cin>>a[i];
   }
   int pos=f(a,n,num);

   
}
