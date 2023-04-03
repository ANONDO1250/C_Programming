#include<stdio.h>


int main (){

   
   int number ,payment;
   printf("Enter your ID :");
   scanf("%d",&number);
   printf("Enter your PAYMENT ID :");
   scanf("%d",&payment);
       //

   if (number >= 2085)
   {
    printf("Welcome to Green University\n");

      if (payment == 1010 )
      {
        printf("Welcome To You're ID\n");
      }
      else{

        printf("Payment FIRST");
      }


   }
   else{

    printf("Enter a Valid ID");
   }

return 0 ;



}