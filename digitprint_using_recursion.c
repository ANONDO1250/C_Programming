#include<stdio.h>

void mehedi(int n){
       

       if (n==0)return;
       
       int x=n%10;
       mehedi(n/10);

       printf("%d ",x);


}


int main()
{

   int a;
   scanf("%d",&a);

   for ( int i = 0; i <a; i++)
   {
    int n;
    scanf("%d",&n);
    mehedi(n);
    if (n==0)
   {
    printf("0");
   }
   printf("\n");
   }
   
   
   

    
    return 0;
}