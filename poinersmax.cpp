#include<iostream>
using namespace std;
int main()
{
    int i,n ,*p;

    cout<<"Enter the number of elements in the array"<<endl;
    cin>>n;
    int a[n];
    p=&a[0];
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>*(p+i);

}
cout<<"The elements of the array are"<<endl;
for(i=0;i<n;i++)
{
    cout<<*(p+i)<<endl;
}
int max=0;
for(i=0;i<n;i++)
{
    if(*(p+i)>max)
    {
        max=*(p+i);
    }
    printf("%d",max);
}
}