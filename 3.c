//3. Write a program to swap values of two int variables
 #include<stdio.h>
     int main()
   { 
     int a,b,c;
     printf("Enter your first value\n");
     scanf("%d",&a);
     printf("Enter Your second Value\n");
     scanf("%d",&b);
     c=a;
     a=b;
     b=c;
     printf("first int type is %d and second int type is %d",a,b);
     return 0;

   } 
