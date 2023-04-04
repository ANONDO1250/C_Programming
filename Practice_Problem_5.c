#include<stdio.h>


int main (){

  int taka;
  printf("Enter Your Taka:");
  scanf("%d",&taka);


if (taka>=10000)
{
    printf("Gucci Bag\n");
    if (taka>=10000 && taka>20000)
    {
        printf("Gucci Belt");
    }
    
}
else if (taka>=5000)
{
    printf("Levis Bag");
}

else
{
    printf("Something");
}
return 0;



}