/*11. Write a program to input a number from the user and also input a digit. Append a 
    digit in the number and print the resulting number.

     (Example - number=234 and digit=9 then the resulting number is 2349)
*/
   #include<stdio.h>
     int main()
  {
    int x,s;
    printf("Enter Your number\n");
    scanf("%d",&x);
    printf("Enter Your digit\n");
    scanf("%d",&s);
     x=x*10;
     x=x+s;
     printf("%d",x);
     return 0;
  }