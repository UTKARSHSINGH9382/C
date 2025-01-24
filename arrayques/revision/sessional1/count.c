#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of aaray:");
    scanf("%d",&n);
    int a[n];
    int count[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element:");
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)

{
    count[i]=0;
    if(a[i+1]=a[i])
    {
        count[i]++;
    }


}
int maxcount[0]=count[0];
for(i=0;i<n;i++)
{
   if(maxcount[i+1]>maxcount[i+1])
   {
    maxcount[i+1]=count[i+1];
   }
}
}