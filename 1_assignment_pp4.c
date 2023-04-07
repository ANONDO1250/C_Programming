#include<stdio.h>

int main(){

int number,i;
scanf("%d",&number);

for ( i =1; i<=number; i++)
{
    if (i%3==0 && i%7==0)
    {
        printf("%d\n",i);
    }
    
}

return 0;

}
