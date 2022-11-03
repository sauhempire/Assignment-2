//4. Write a program to swap values of two int variables without 
   //using a third variable.
 #include<stdio.h>
    int main()
  { 
     int a,b;
     printf("Enter your first value\n");
     scanf("%d",&a);
     printf("Enter Your second Value\n");
     scanf("%d",&b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("1st %d and 2nd %d",a,b);
   }  