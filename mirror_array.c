#include<stdio.h>
int main()
{
    int row,colum;
    scanf("%d %d",&row,&colum);
    int a[row][colum];

    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j<colum; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for (int i =0; i <row; i++)
    {
        for (int j =colum-1; j>=0; j--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
        
    }
    


    
    return 0;
}