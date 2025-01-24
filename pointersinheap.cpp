#include<iostream>
#include<stdio.h>
#include<stdlib.h>/// this declaration bcz we use malloc function
int main()
{
    int *p;
    int n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
  
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);

    }

    for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));

    }
    delete(p);
}
