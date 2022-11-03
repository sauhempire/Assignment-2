//8. Write a program to check whether the given number is even or odd using a bitwise 
  //  operator
#include<stdio.h>
    int main()
 {
    int x;
    printf("Enter your number\n");
    scanf("%d",&x);
        if(x&1)
          printf("odd number\n");
          else
          printf("even number\n");
    

    return 0;
}
