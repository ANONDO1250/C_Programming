#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int array[n];

    for (int i = 0; i <n; i++)
    {
         scanf("%d",&array[i]);

    }
    int i=0,j=n-1;
    while (i<j)
    {
        int tmp=array[i];
        array[i]=array[j];
        array[j]=tmp;
        i++;
        j--;

    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    

    
    return 0;
}