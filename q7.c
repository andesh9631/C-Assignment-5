//7. Write a program to print the first N even natural 
//numbers in reverse order
#include<stdio.h>
int main()
    {
        int i,n;
        printf("ENter the any value of n");
        scanf("%d",&n);
        for(i=1;i<=n;n--)
          {
            printf(" %d ",n*2);
          }
          return 0;
    }