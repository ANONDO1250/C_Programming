#include<stdio.h>

int main(){
 

 int num;
 scanf("%d",&num);

 if (num>0)
 {
       if (num%3==0)
       {
        printf("YES");
       }
       else{
        printf("NO");
       }
 }else if (num==0)
 {
    printf("YES");
 }
 else{
    printf("Enter a positive number!");
 }
 
 return 0;

}