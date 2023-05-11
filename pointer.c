#include<stdio.h>
int main()
{
    
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    
     int *pointer;
        
        pointer =&x;
        printf("X= %d\n",*pointer);
          
            pointer =&y;
        printf("Y= %d\n",*pointer);
          pointer =&z;
        printf("Z= %d\n",*pointer);
    
    return 0;
}