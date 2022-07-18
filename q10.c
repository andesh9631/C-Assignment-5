//10. Write a program to print a table of N
#include<stdio.h>
int main()
{
     int i,n,s=0;
     printf("Enter the any value of n");
     scanf("%d",&n);
     for(i=1;i<=10;i++)
       {
        printf(" %d ",s=i*n);
       }
       return 0;
       
}