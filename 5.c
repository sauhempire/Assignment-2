//5. Write a program to input a three-digit number and display the sum of the digits.
  
   #include<stdio.h>
   int main()
  {
    int x ,rem=0, sum=0;
    printf("Enter your number\n");
    scanf("%d",&x);
    rem=x%10;
    x=x/10;
    sum=sum+rem;

    rem=x%10;
    x=x/10;
    sum=sum+rem;

    rem=x%10;
    x=x/10;
    sum=sum+rem;
    printf("sum of your number is %d",sum);

    return 0;

 }