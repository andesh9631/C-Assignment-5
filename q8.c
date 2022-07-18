//8. Write a program to print squares 
//of the first N natural numbers

#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter the any value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      {
        s=i*i;
        printf("\n The square of %d is  %d ",i,s);
        
      }
      
      return 0;
}