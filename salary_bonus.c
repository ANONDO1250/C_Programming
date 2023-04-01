#include<stdio.h>

int main(){


 
 double Total,value1,value2;
 char name;

 scanf("%s",&name);
 scanf("%lf %lf",&value1,&value2);



 Total=(value1)+(value2*0.15);



 printf("TOTAL = R$ %.2lf\n",Total);

 return 0;





}