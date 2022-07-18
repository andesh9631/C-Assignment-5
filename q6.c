//6. Write a program to print the first N 
//even natural numbers
#include<stdio.h>
int main()
{
    int i,n;
    printf("ENter the any value of n");
    scanf("%d",&n);
    for(i=2;i<=n*2;i+=2)
      {
        printf(" %d ",i);
      }
      return 0;
   
}