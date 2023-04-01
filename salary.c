#include<stdio.h>

int main(){

int number,selary1;
float selary2,AA;

scanf("%d",&number);
scanf("%d",&selary1);
scanf("%f",&selary2);

AA=(selary1)*(selary2);

printf("NUMBER = %d\n",number);
printf("SALARY = U$ %.2f\n",AA);

return 0;

}