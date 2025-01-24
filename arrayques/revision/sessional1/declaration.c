#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements of array");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}