#include<stdio.h>

int main(){

    int n,s,k;
    scanf("%d",&n);
    s=0;
    k=n;

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=k; j++)
        {
           printf("*");
        }
        s++;
        k--;
        printf("\n");

        
    }
    
return 0;

}