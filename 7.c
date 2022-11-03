//7. Write a program to find the position of first 1 in LSB.
  #include<stdio.h>
    int main()
  {
    int x ,result=0,count=0;
    printf("Enter your number\n");
    scanf("%d",&x);
     
    while(x !=0)
    {
        result=x&1 ;
        count++;
         if(result == 1)
         {
          printf("The first position of your first 1 is %d",count);
          break;

         }
       x=x>>1;
     } 
   return 0;
  }
