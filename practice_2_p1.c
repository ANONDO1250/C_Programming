#include<stdio.h>
int main()
{

     char a;
     int as;
     scanf("%c",&a);

     if (a>='a' && a<='z')
     {
        
       
        if ('z'==a)
        {
           
           as =a-25;
             printf("%c\n",as);
        }else{
            as =a+1;
             printf("%c\n",as);
        }
        
     }
     
        else if (a>='A' && a<='Z')
        {
            if ('Z'==a)
        {
           
           as =a-25;
             printf("%c\n",as);
        }else{
            as =a+1;
             printf("%c\n",as);
        }
        }
        
       
     
     
     

    
    return 0;
}