//4. Write a program to print the first N
// odd natural numbers
#include<stdio.h>
int main()
{ 
    int i,n;
    printf("Enter the value n");
    scanf("%d",&n);
    for(i=1;i<=n*2-1;i+=2)
      {
        printf(" %d ",i);
      }
      return 0;
}
