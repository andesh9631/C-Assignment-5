//3. Write a program to print the first N natural
// numbers in reverse order
#include<stdio.h>
int main()

{
    int i,n;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;n--)
       {
        printf(" %d ",n);
       }
       return 0;

}