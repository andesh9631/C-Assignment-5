//9. Write a program to print cubes
// of the first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      {
        s=i*i*i;
        printf("\nsquare of %d is %d ",i,s);
      }
      return 0;

}
