//12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
//convert it into USD
#include<stdio.h>
int main()
{
    float r,d=76.23;
    printf("Enter amount : ");
    scanf("%f",&r);
     r=r*d;
     printf("%.2f",r);
     return 0;
}