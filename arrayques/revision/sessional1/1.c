#include<stdio.h>
#include<stdlib.h>
void closet(int a[],int n)
{
   int i,closet,mindiff,diff,target;
   
   printf("enter the target element ");
   scanf("%d",&target);
   closet=a[0];
   mindiff=abs(a[0]-target);
   for(i=1;i<n;i++)
   {
    diff=abs(a[i]-target);
    if(diff<mindiff)
    {
        mindiff=diff;
        closet=a[i];
    }

   }
   printf("the closet element is %d",closet);
}
int main()
{
    int i,n;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    closet(a,n);
}