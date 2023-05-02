#include<stdio.h>

int mehedi(int x,int y){

    int mehedi=x*y;
    return mehedi;
} 



int main()
{
    //  int s = mehedi(10,5);
    int a,b;
    scanf("%d %d",&a,&b);
    
     printf("%d\n",mehedi(10,5));
     printf("%d\n",mehedi(100,51));


    
    return 0;
}