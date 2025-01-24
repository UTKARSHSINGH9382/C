#include<iostream>
using namespace std;
void input (int a[], int n)
{
  int i;
  for (i=0; i<n; i++)
  {
    cout<<"Enter element "<<i+1<<": ";
    cin>>a[i];

  }
}
void display(int a[],int n)
{
   cout<<"elements are";
   for(int i=0;i<n;i++)
   {
    cout<<a[i]<<" ";
   }
}
void bs(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
  int c ;
  int i,n;
  cout<<"enter the size of array";
  cin>>n;
  int a[n];
  cout<<"enter the element of array";
  while(i)
  {
    cout<<"menu\n";
    cout<<"1.input\n";
    cout<<"2.display\n";
    cout<<"3. bubble sort\n";
     
     cout<<"4.exit\n";
     cout<<"enter ur choice ";
     cin>>c;
     switch(c)
     {
        case 1:
        input(a,n);
        break;
        case 2:
        display(a,n);
        break;
        case 3:
        bs(a,n);
        break;
        case 4:
        exit(0);
        break;
        default:
        cout<<"invalid choice";
     }

     }
  }
  