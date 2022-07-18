//5. Write a program to print the first N odd 
//natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the any value of n");
    scanf("%d",&n);
    for(i=1;i<=n;n--)
       {
        printf(" %d ",n*2-1);

       }
       return 0;

;}