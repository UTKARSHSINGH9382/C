#include<stdio.h>
int main()
{
    int i,n;
    int *p;
    
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
   p=a;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  
    for(i=0;i<n;i++)
    {
        printf("\n%d",*(p+i));
    }
}