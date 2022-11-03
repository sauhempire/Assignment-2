/*13. Write a program to take a three-digit number from the user and rotate its digits by 
one position towards the right*/
#include<stdio.h>
int main()
{
    int x,rem,s;
    printf("Enter your number: ");
    scanf("%d",&x);
    rem=x%10;
    x=x/10;
    s=rem*100;
    s=s+x;
    printf("%d ",s);
    return 0;
}