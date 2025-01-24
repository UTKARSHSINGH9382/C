#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *p;
    p=(int*)malloc(5*sizeof(int));
    for(int i=0;i<5;i++)
    {
        printf("Enter the value of a[%d]:",i);

        scanf("%d",*(p+i));
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",*(p+i));
}
}