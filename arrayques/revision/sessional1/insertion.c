#include<stdio.h>
int main()
{
    int i,n,temp;
    
    
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
   
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     int no;
     printf("enter the number want to insert");
     scanf("%d",&no);
     int pos;
     printf("enter the position where you want to insert");
     scanf("%d",&pos);
    for(i=pos;i<n+1;i++)
    {
        a[i+1]=a[i];
      
        a[pos]=a[i];

     

    }
  
    for(i=0;i<n+1;i++)
    {
        printf("\n%d",a[i]);
    }
}