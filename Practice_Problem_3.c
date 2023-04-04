#include<stdio.h>

int main(){

   int number;
   printf("Enter a Number:");

scanf("%d",&number);

if (number % 2 == 0)
{
    printf("This is Even ");
}
else if (number<0 )
{
    printf("Enter an Intiger Number");
}
else
{
    printf(" This is Odd");
}
return 0;




}