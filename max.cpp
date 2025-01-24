#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the number of terms in the series: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int largest=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    cout<<"max elment "<<largest;
}